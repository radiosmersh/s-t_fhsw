ObjectTemplate.networkableInfo HandFireArmsInfo
ObjectTemplate.itemIndex 3
ObjectTemplate.projectileTemplate 7,7mmBProjectile
ObjectTemplate.projectilePosition 0/0/0
ObjectTemplate.hasDynamicShadow 1
ObjectTemplate.magSize 10
ObjectTemplate.numOfMag 5
ObjectTemplate.magType 0
ObjectTemplate.reloadtime 6
ObjectTemplate.roundOfFire 1
ObjectTemplate.fireOnce 1
objectTemplate.aiTemplate No4AI
ObjectTemplate.zoomFov 0.7
ObjectTemplate.altFireOnce 1
ObjectTemplate.GUIIndex 6
ObjectTemplate.setHudAmmoType ATAmmoBar
ObjectTemplate.setAmmoBar "Ingame/Magbar_Rifle_empty_32x64.tga"
ObjectTemplate.setAmmoBarFill "Ingame/Magbar_Rifle_full_32x64.tga"
ObjectTemplate.setAmmoBarSize 20
ObjectTemplate.setAmomBarPosX 6
ObjectTemplate.setAmomBarPosY -17
ObjectTemplate.setAmomBarTextPosX 5
ObjectTemplate.setAmomBarTextPosY 10
ObjectTemplate.setCrossHairType CHTCrossHair

ObjectTemplate.soldierZoomFov 0.7
ObjectTemplate.soldierZoomPosition -0.11/0.01/0.02
ObjectTemplate.soldierCameraPosition -0.08/-0.03/0.00
ObjectTemplate.addRootSpeed 0
ObjectTemplate.AmmoType	1
ObjectTemplate.timeToNotAllowChange 0.25

Rem *** Deviation Begin *****

ObjectTemplate.velocity 700
ObjectTemplate.setRecoilForceUp CRD_UNIFORM/0.9/1.75/0
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
ObjectTemplate.loadSoundScript Sounds/no4.ssc
ObjectTemplate.createSkeleton animations/No4.ske
ObjectTemplate.useSkeletonPartAsMain No4
ObjectTemplate.addTemplate No4Lod

ObjectTemplate.addTemplate e_MuzzGun
rem ObjectTemplate.addTemplate e_MuzzRifle
ObjectTemplate.setInputId -1
ObjectTemplate.startoneffects 0
ObjectTemplate.setPosition 0/0.045/0.745
ObjectTemplate.setRotation 0/0/0
