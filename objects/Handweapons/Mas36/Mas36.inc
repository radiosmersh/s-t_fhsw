ObjectTemplate.networkableInfo HandFireArmsInfo
ObjectTemplate.itemIndex 3
ObjectTemplate.projectileTemplate 7,5mmProjectile
ObjectTemplate.projectilePosition 0/0/0
ObjectTemplate.magSize 5
ObjectTemplate.magType 0
ObjectTemplate.reloadtime 4
ObjectTemplate.roundOfFire 0.71
ObjectTemplate.fireOnce 1
objectTemplate.aiTemplate Mas36AI
ObjectTemplate.zoomFov 0.7
ObjectTemplate.hasDynamicShadow 1
ObjectTemplate.altFireOnce 1
ObjectTemplate.soldierZoomFov 0.6 
ObjectTemplate.soldierZoomPosition -0.07/0/0
ObjectTemplate.soldierCameraPosition -0.07/-0.03/0.05
ObjectTemplate.addRootSpeed 0
ObjectTemplate.AmmoType	1
ObjectTemplate.timeToNotAllowChange 0.25

objectTemplate.GUIIndex 11
ObjectTemplate.setHudAmmoType ATAmmoBar
ObjectTemplate.setAmmoBar "Ingame/Magbar_Rifle_empty_32x64.tga"
ObjectTemplate.setAmmoBarFill "Ingame/Magbar_Rifle_full_32x64.tga"
ObjectTemplate.setAmmoBarSize 20
ObjectTemplate.setAmomBarPosX 6
ObjectTemplate.setAmomBarPosY -17
ObjectTemplate.setAmomBarTextPosX 5
ObjectTemplate.setAmomBarTextPosY 10
ObjectTemplate.setCrossHairType CHTCrossHair
Rem *** Deviation Begin *****

ObjectTemplate.velocity 745
ObjectTemplate.setRecoilForceUp CRD_UNIFORM/1/2/0
ObjectTemplate.setRecoilForceLeftRight CRD_UNIFORM/-0.1/-0.3/0
ObjectTemplate.setHasRecoilForce 1
ObjectTemplate.setGoBackOnRecoil 0

ObjectTemplate.setFireDev 5 2.25 0.12
ObjectTemplate.setDevMod 1.5 1 0.9
ObjectTemplate.setMinDev 0.35
ObjectTemplate.setTurnDev 5 0.4 0.4 0.4
ObjectTemplate.setSpeedDev 8 0.5 0.5 0.5
ObjectTemplate.setMiscDev 18 8 0.35

Rem *** Deviation  End *****

ObjectTemplate.fireInCameraDof 1
ObjectTemplate.loadSoundScript Sounds/Mas36.ssc

ObjectTemplate.createSkeleton animations/MAS36.ske
ObjectTemplate.useSkeletonPartAsMain Mas36
ObjectTemplate.addTemplate Mas36Lod

ObjectTemplate.addTemplate e_MuzzGun
rem ObjectTemplate.addTemplate e_MuzzRifle
ObjectTemplate.setInputId -1
ObjectTemplate.startoneffects 0
ObjectTemplate.setPosition 0/0.05/0.84
ObjectTemplate.setRotation 0/0/0
