from turtle import Screen,Turtle
turtle=Turtle()
screen=Screen()
class Paddle(Turtle):
    def __init__(self,position):
        super().__init__()
        self.position = position
        self.shape("square")
        self.color("white")
        self.shapesize(stretch_wid=5, stretch_len=1)
        self.penup()
        self.goto(self.position)

    def go_up(self):
        new_y = self.ycor() + 20
        self.goto(self.xcor(), new_y)

    def go_down(self):
        new_y = self.ycor() - 20
        self.goto(self.xcor(), new_y)


class Boundary(Turtle):
    def __init__(self):
        super().__init__()

    def boundary(self):
        self.penup()
        self.goto(0,300)
        self.pendown()
        self.setheading(270)
        self.color("white")
        self.hideturtle()
        for i in range(30):
            self.forward(10)
            self.penup()
            self.forward(10)
            self.pendown()



