from time import sleep
import multiprocessing as mp

class InvalidOperation(Exception):
    pass

def long_task(namespace):
    if namespace.allow_action:
        namespace.allow_action = False
        print("Starting long task...")
        sleep(10)
        print("Finished long task!")
        namespace.allow_action = True
    else:
        raise InvalidOperation("Object is busy.")

def task(namespace):
    if namespace.allow_action:
        namespace.allow_action = False
        print("Starting task...")
        print("Finished task!")
        namespace.allow_action = True
    else:
        raise InvalidOperation("Object is busy.")

if __name__ == "__main__":
    manager = mp.Manager()
    namespace = manager.Namespace()
    namespace.allow_action = True

    p_long = mp.Process(target=long_task, args=(namespace,))
    p = mp.Process(target=task, args=(namespace,))

    p_long.start()
    p.start()
    sleep(1)
    p.join()
    p_long.join()
