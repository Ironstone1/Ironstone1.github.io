print(["Draw!", "You Lost!", "You Win!"][[[0, 1, 2], [1, 0, 2], [2, 1, 0]][{"rock":0, "paper":1, "scissors":2}[input("Enter choice: ")]][random.randint(0, 2)]])
