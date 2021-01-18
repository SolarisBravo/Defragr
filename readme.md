# Defragr (Plugin format)

Defragr movement code ported to UE4.26 as a plugin. Weapon pickup and checkpoint systems have been removed.

Precision movement FPS ported off the Quake 3 series of movement physics, most notibly the Defrag and CPMA mods for Quake 3. Defragr includes a near direct port of idTech3's physics for the player.

Checkout this video for a preview of the game before cloning / downloading:
[![IMAGE ALT TEXT HERE](http://img.youtube.com/vi/uT6r55J6jmQ/0.jpg)](http://www.youtube.com/watch?v=uT6r55J6jmQ)

## Current features

* CPMA Strafe jumping
* Wall strafing
* Down ramp boosting

## Planned features

* Multiplayer
* Editor
* Steam integration

## Testing

Considering this is a game, and cannot be machine tested, testing the mechanics is rather convoluted to ensure the mechanics remain accurate to CPMA. However if you do make changes to the physics of the player there is a scene called `dev_testing_grounds` in which has obstacles that the player can be tested against to make sure the changes to the player don't break anything else.

## Developing

### Support

Open a ticket [here](https://github.com/SolarisBravo/DefragrPlugin/issues) or if you want to ask a couple of questions, see the Contact section just below.

### Contributing

Fork the code then place a pull request [here](https://github.com/SolarisBravo/DefragrPlugin/pulls). Ensure that the code isn't specific towards a mod and/or a fork.

## License

This project supports the GNU v3.0 license.
