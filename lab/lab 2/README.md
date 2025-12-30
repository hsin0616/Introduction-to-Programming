# 2-1 Uniformly accelerated motion
Write a program that calculates the displacement of an object moving with uniform acceleration.

Formula:
$$
s = ut + \frac{1}{2}at^2
$$
- s = displacement (meters, double)
- u = initial velocity (m/s, double)
- a = acceleration (m/s², double)
- t = time (seconds, int)
## Input
-  Initial velocity u: a double value in the range 0.0 to 100.0
- Acceleration a: a double value in the range -10.0 to 10.0
- Time t: an int value in the range 1 to 100

Do not need to read input from the user. Instead, define the values directly in your code as variables.
## Output
```text
Initial Velocity: <value>
Acceleration: <value>
Time: <value>
Displacement: <value>
```
- Initial Velocity:
- Acceleration:
- Time:
- Displacement:
## Sample Output
```text
Initial Velocity: 10
Acceleration: 2
Time: 5
Displacement: 75
```
# 2-2 Weighted average score
Write a program that calculates the weighted average score of four subjects: Math, Physics, Chemistry, and English.

$$
\text{Weighted Average}
=
\frac{M \times w_M + P \times w_P + C \times w_C + E \times w_E}{w_M + w_P + w_C + w_E}
$$
## Constant Weights
- Math: 1.0
- Physics: 1.5
- Chemistry: 2.5
- English: 3.3

## Input
- Four subject scores, each an integer in the range 0 to 100.
- Don't need to read input from the user. Instead, define the scores directly in your code as variables.

## Output
```text
Math: <value>
Physics: <value>
Chemistry: <value>
English: <value>
Weighted Score: <value>
```

## Sample
```text
Math: 70
Physics: 80
Chemistry: 90
English: 100
Weighted Score: 89.759
```