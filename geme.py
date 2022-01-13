#-*- coding: utf-8 -*-
import sys
import pygame
from pygame.locals import *
import time

# 초당 프레임수를 정의
TARGET_FPS = 30
clock = pygame.time.Clock()

# 색 정의
BLACK = (0, 0, 0)
RED = (255, 0, 0)
GREEN = (0, 255, 0)
BLUE = (0, 0, 255)
WHITE = (255, 255, 255)

# 라이브러리 및 디스플레이 초기화
pygame.init()
screen = pygame.display.set_mode((600, 400), DOUBLEBUF) # 윈도우 크기 및 속성 설정
pygame.display.set_caption('돌림판')  # 타이틀바의 텍스트를 설정

# 이미지 파일을 로딩
img = pygame.image.load('/home/turtle01/robot_ws/src/python/unnamed.jpg') # 돌림판 이미지
img2 = pygame.image.load('/home/turtle01/robot_ws/src/python/download.png') # 화살표

degree = 0
flag = True 
rad = 100
stop_time = 3 # 돌림판이 멈출 때까지의 시간 (클수록 빨리 멈춤)

# 메인 루프
while True:
  for event in pygame.event.get():
    # 이벤트를 처리하는 부분
    if event.type == QUIT:
      pygame.quit()
      sys.exit()

    # 키보드 이벤트 처리
    if event.type == KEYDOWN:
      # 스페이스 -> 토글
      if event.key == 32:
          if flag == True:
              flag = False
          elif flag == False:
              flag = True
              rad = 100

  # 게임의 상태를 화면에 그려주는 부분
  screen.fill(WHITE)
  
  # 이미지 파일 회전하여 그리기
  x = 350
  y = 200
  
  rotated = pygame.transform.rotate(img, degree) # degree 만큼 회전
  rect = rotated.get_rect()
  rect.center = (x, y)
  screen.blit(rotated, rect)

  # 플래그의 상태가 True면 회전, False면 천천히 정지
  if flag == True:
      degree += rad
  elif flag == False:
      if rad > 0:
          rad -= stop_time
          degree += rad
          

  screen.blit(img2, (70, 180)) # 화살표 그리기
  pygame.display.flip()  # 화면 전체를 업데이트
  clock.tick(TARGET_FPS)  # 프레임 수 맞추기
