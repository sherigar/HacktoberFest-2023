from turtle import Screen, Turtle
from paddle import Paddle, Boundary
from ball import Ball
from scoreboard import Scoreboard
import time

turtle = Turtle()
screen = Screen()

points=screen.textinput(prompt="Kitne Points ka Khelega?", title="Batao bhaiii")

screen.bgcolor("black")
screen.setup(width=800, height=600)
screen.title("Pong")
screen.tracer(0)

paddle=Boundary()
paddle.boundary()

ball=Ball()
scoreboard=Scoreboard()

r_paddle=Paddle((350,0))
l_paddle=Paddle((-350,0))


screen.listen()
screen.onkey(r_paddle.go_up, "Up")
screen.onkey(r_paddle.go_down, "Down")
screen.onkey(l_paddle.go_up, "w")
screen.onkey(l_paddle.go_down, "s")


# start=screen.textinput(prompt="Start the game?",title="Shuru karein?")
# if (start.lower() == "yes" or start.lower() == "y"):
#     is_game_on=True
# else:
#     print("Toh aaya hi kyun BSDK")
#     is_game_on=False

is_game_on=True

while is_game_on:
    time.sleep(0.05)
    screen.update()
    ball.move()

    if scoreboard.l_score > int(points) or scoreboard.r_score > int(points):
        is_game_on=False
        turtle.color("white")
        turtle.hideturtle()
        turtle.write("Game Over",align="center",font=("Courier",80,"normal"))

#       detect collision with wall
    if ball.ycor()>280 or ball.ycor()<-280:
        ball.bounce_y()

#         detect collision with the paddle
    if ball.distance(r_paddle)<50 and ball.xcor()>320 or ball.distance(l_paddle)<50 and ball.xcor()<-320:
        ball.bounce_x()

#       R_paddle misses the ball
    if ball.xcor()>380:
        ball.reset_position()
        scoreboard.l_point()

#       L_paddle misses the ball
    if ball.xcor()<-380:
        ball.reset_position()
        scoreboard.r_point()

screen.exitonclick()






