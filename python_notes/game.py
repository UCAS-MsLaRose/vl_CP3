# VL pygame notes
import pygame
import os

pygame.init()

screen = pygame.display.set_mode((1200, 720))
pygame.display.set_caption("Pygame Tutorial")
pos_x = 100
pos_y = 200

ufo = pygame.image.load(os.path.join(os.path.dirname(__file__), 'ufo.png')).convert_alpha()
ufo_rect = ufo.get_rect(topleft = (100, 100))

while True:
    screen.fill((0, 0, 255))

    pygame.draw.rect(screen, (250,0,0), (pos_x, pos_y, 100, 100))

    pygame.draw.circle(screen, (0,0,0), (500,500), 50)

    screen.blit(ufo, ufo_rect)
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            exit()

    # Poll key states outside the event loop so holding a key moves continuously.
    keys = pygame.key.get_pressed()
    if keys[pygame.K_LEFT]:
        pos_x -= 5
    if keys[pygame.K_RIGHT]:
        pos_x += 5
    # Up should decrease y, Down should increase y (screen origin is top-left)
    if keys[pygame.K_UP]:
        pos_y -= 5
    if keys[pygame.K_DOWN]:
        pos_y += 5


    pygame.display.flip()