# Gameplay
## Must
- [x] Update obstacle blueprints to spawn different models
- [x] Fix bug where jumping twice in quick succession plays the hard-fall animation


## Should
- [ ] Add obstacle warning icons
- [x] Inflate scores

## Could
- [x] Make all in-world props destructible through Unreal Engine's Chaos system

## Would
- [ ] Update level generation to add corners instead of being linear
- [ ] ~Improve ducking mechanic~
    - Ducking still slows the player down but the player runs faster & the boulder is slower. This makes the player more able to outrun the boulder, so it feels a little more balanced. User testing will provide more information on whether ducking still feels like a hinderance, but my suspicion is that players will be more annoyed by obstacles than ducking


# Code
## Must

## Should
- [ ] Refactor audio to be handled by a centralized AudioManager class

## Could

## Would


# Art
## Must
- [x] Complete all assets in the [Corporate Rollout assets spreadsheet](https://docs.google.com/spreadsheets/d/191MOwSGsKXqwEgvzihiEf_zCXeHrzPd34X6nVXWNiSo/edit#gid=0)
- [x] Update the player character idle animation to include glancing around nervously
- [ ] Add facial expressions to player character

## Should

## Could

## Would
- [ ] Add more dimension to running animations by having the character play different animations depending on how close the boulder is


# UI
## Must
- [x] Replace placeholder main menu graphics
- [x] Replace placeholder game over graphics
- [x] Create in-game UI for powerups
- [x] Update score UI to display high score at all times

## Should
- [ ] Refactor all UI widgets to be managed through a central UIManager

## Could
## Would
- [ ] Update the main menu so it's a 3D scene and the game UI is displayed on an in-game computer monitor


# SFX
## Must
- [x] Improve boulder SFX
- [x] Add destruction SFX to props

## Should
- [x] Play sound effect while powerup is active
- [x] Add SFX to the 3-2-1 countdown at the start of the game

## Could

## Would


# Music
## Must
- [x] Loop background music

## Should
## Could
## Would
- [ ] Loop background music smoothly
- [ ] Add more background music tracks
