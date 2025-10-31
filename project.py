import random
import pygame
import sys

# ---------- SNAKE GAME WITH RESTART & HIGH SCORE ----------
def snake_game():
    pygame.init()
    width, height = 400, 300
    win = pygame.display.set_mode((width, height))
    pygame.display.set_caption("🐍 Snake Game")

    font = pygame.font.SysFont(None, 25)
    clock = pygame.time.Clock()

    def draw_text(text, color, x, y):
        label = font.render(text, True, color)
        win.blit(label, (x, y))

    def run_game():
        x, y = 50, 50
        vel = 10
        snake = [[x, y]]
        food = [random.randrange(0, width-10, 10), random.randrange(0, height-10, 10)]
        direction = 'RIGHT'
        score = 0
        high_score = 0

        # Load high score if exists (temporary in runtime)
        if hasattr(snake_game, "high_score"):
            high_score = snake_game.high_score
        else:
            snake_game.high_score = 0

        run = True
        while run:
            for event in pygame.event.get():
                if event.type == pygame.QUIT:
                    pygame.quit()
                    sys.exit()

            keys = pygame.key.get_pressed()
            if keys[pygame.K_LEFT] and direction != 'RIGHT':
                direction = 'LEFT'
            if keys[pygame.K_RIGHT] and direction != 'LEFT':
                direction = 'RIGHT'
            if keys[pygame.K_UP] and direction != 'DOWN':
                direction = 'UP'
            if keys[pygame.K_DOWN] and direction != 'UP':
                direction = 'DOWN'

            if direction == 'LEFT':
                x -= vel
            elif direction == 'RIGHT':
                x += vel
            elif direction == 'UP':
                y -= vel
            elif direction == 'DOWN':
                y += vel

            # Check collision with wall
            if x < 0 or y < 0 or x >= width or y >= height:
                return score

            # Move snake
            snake.append([x, y])

            # Check food collision
            if [x, y] == food:
                score += 1
                food = [random.randrange(0, width-10, 10), random.randrange(0, height-10, 10)]
            else:
                del snake[0]

            # Check self collision
            if [x, y] in snake[:-1]:
                return score

            win.fill((0, 0, 0))
            for part in snake:
                pygame.draw.rect(win, (0, 255, 0), (part[0], part[1], 10, 10))
            pygame.draw.rect(win, (255, 0, 0), (food[0], food[1], 10, 10))

            # Display score and high score
            draw_text(f"Score: {score}", (255, 255, 255), 10, 10)
            draw_text(f"High Score: {high_score}", (255, 255, 255), 250, 10)
            pygame.display.update()
            clock.tick(10)

        return score

    # Game loop with restart feature
    while True:
        score = run_game()
        if score > getattr(snake_game, "high_score", 0):
            snake_game.high_score = score

        win.fill((0, 0, 0))
        draw_text("Game Over!", (255, 0, 0), 150, 100)
        draw_text(f"Your Score: {score}", (255, 255, 255), 140, 130)
        draw_text(f"High Score: {snake_game.high_score}", (255, 255, 0), 130, 160)
        draw_text("Press R to Restart or Q to Quit", (200, 200, 200), 90, 200)
        pygame.display.update()

        waiting = True
        while waiting:
            for event in pygame.event.get():
                if event.type == pygame.QUIT:
                    pygame.quit()
                    sys.exit()
                if event.type == pygame.KEYDOWN:
                    if event.key == pygame.K_r:
                        waiting = False
                    if event.key == pygame.K_q:
                        pygame.quit()
                        sys.exit()

# ---------- ROCK PAPER SCISSORS ----------
def rock_paper_scissors():
    print("\nRock Paper Scissors Game")
    choices = ["rock", "paper", "scissors"]
    while True:
        user = input("Enter rock, paper or scissors (or q to quit): ").lower()
        if user == 'q':
            break
        if user not in choices:
            print("Invalid input! Try again.")
            continue
        comp = random.choice(choices)
        print("Computer chose:", comp)
        if user == comp:
            print("It's a tie!")
        elif (user == "rock" and comp == "scissors") or \
             (user == "paper" and comp == "rock") or \
             (user == "scissors" and comp == "paper"):
            print("You win!")
        else:
            print("Computer wins!")

# ---------- QUIZ GAME ----------
def quiz_game():
    print("\nCoding Quiz Game (Choose A/B/C/D)")
    questions = [
        {
            "q": "1. What is the output of print(2*3*2)?",
            "options": ["A. 64", "B. 12", "C. 8", "D. 16"],
            "ans": "B"
        },
        {
            "q": "2. Which keyword defines a function in Python?",
            "options": ["A. func", "B. define", "C. def", "D. lambda"],
            "ans": "C"
        },
        {
            "q": "3. What data type is 3 / 2 ?",
            "options": ["A. int", "B. float", "C. double", "D. complex"],
            "ans": "B"
        },
        {
            "q": "4. Which is mutable in Python?",
            "options": ["A. tuple", "B. list", "C. string", "D. int"],
            "ans": "B"
        },
        {
            "q": "5. What does 'break' do in loops?",
            "options": ["A. Restarts loop", "B. Ends loop", "C. Skips iteration", "D. Exits program"],
            "ans": "B"
        }
    ]

    score = 0
    for item in questions:
        print("\n" + item["q"])
        for opt in item["options"]:
            print(opt)
        ans = input("Your answer (A/B/C/D): ").strip().upper()
        if ans == item["ans"]:
            print("✅ Correct!")
            score += 1
        else:
            print("❌ Wrong! Correct answer:", item["ans"])
    print("\nYour final score:", score, "/", len(questions))

# ---------- MAIN MENU ----------
def main():
    while True:
        print("\n--- 🎮 Welcome to Game Zone ---")
        print("1. Snake Game")
        print("2. Rock Paper Scissors")
        print("3. Quiz Game")
        print("4. Exit")

        choice = input("Enter your choice (1-4): ")
        if choice == '1':
            snake_game()
        elif choice == '2':
            rock_paper_scissors()
        elif choice == '3':
            quiz_game()
        elif choice == '4':
            print("Thanks for playing! Goodbye.")
            sys.exit()
        else:
            print("Invalid choice! Try again.")

# ---------- RUN ----------
main()
