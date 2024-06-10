def factorial_iteration(n):
    result = 1

    for i in range(2, n + 1):
        result *= i

    return result


def factorial_recursion(n, recursion_step=0, current_result=1):
    floor_nr = recursion_step
    recursion_step += 1
    draw_steps(floor_nr, '>')
    print(f"{n}!")

    if n <= 1:
        print(".......this is the last step, we will go back......")
        result = 1
    else:
        result = n * factorial_recursion(n - 1, recursion_step)
        current_result = result

    draw_steps(floor_nr, '<')
    print(f"{n}! = {current_result}")
    recursion_step -= 1

    return result


def draw_steps(n, s):
    print(f"{n} pietro: {' '.join([s] * n)}", end=' ')


if __name__ == '__main__':
    print("Factorial solved recursively:")
    r = factorial_recursion(5)
    print(r)

    print()

    print("Factorial solved linearly")
    r2 = factorial_iteration(3)
    print(r2)
