ObjectTemplate.itemIndex 3
ObjectTemplate.networkableInfo HandFireArmsInfo
ObjectTemplate.projectileTemplate 7,62x54mmRProjectile
ObjectTemplate.projectilePosition 0/0/0
ObjectTemplate.hasDynamicShadow 1
ObjectTemplate.magSize 10
ObjectTemplate.magType 0
ObjectTemplate.reloadtime 4
ObjectTemplate.roundOfFire 6
ObjectTemplate.fireOnce 1
objectTemplate.aiTemplate SVT40AI
ObjectTemplate.zoomFov 0.7
ObjectTemplate.soldierZoomFov 0.7
ObjectTemplate.soldierZoomPosition -0.08/0.01/-0.05
ObjectTemplate.soldierCameraPosition -0.08/-0.03/-0.07
ObjectTemplate.addRootSpeed 0
ObjectTemplate.AmmoType	1

ObjectTemplate.altFireOnce 1
rem objectTemplate.UseScope 1

Rem *** Deviation Begin *****

ObjectTemplate.velocity 840
ObjectTemplate.setRecoilForceUp CRD_UNIFORM/1.2/2.2/0
ObjectTemplate.setRecoilForceLeftRight CRD_UNIFORM/-0.1/-0.3/0
ObjectTemplate.setHasRecoilForce 1
ObjectTemplate.setGoBackOnRecoil 0

ObjectTemplate.setFireDev 5.0 2.75 0.11
ObjectTemplate.setDevMod 1.4 1.0 0.9
ObjectTemplate.setMinDev 0.25
ObjectTemplate.setTurnDev 5 0.4 0.4 0.4 
ObjectTemplate.setSpeedDev 8.0 0.5 0.5 0.5
ObjectTemplate.setMiscDev 18.0 8.0 0.35

Rem *** Deviation  End *****

ObjectTemplate.fireInCameraDof 1
ObjectTemplate.loadSoundScript Sounds/SVT40.ssc
ObjectTemplate.GUIIndex 18
ObjectTemplate.setHudAmmoType ATAmmoBar
ObjectTemplate.setAmmoBar "Ingame/magbar_BAR_empty_32x64.tga"
ObjectTemplate.setAmmoBarFill "Ingame/magbar_BAR_full_32x64.tga"
ObjectTemplate.setAmmoBarSize 48
ObjectTemplate.setAmomBarPosX 5
ObjectTemplate.setAmomBarPosY -11
ObjectTemplate.setCrossHairType CHTCrossHair

ObjectTemplate.createSkeleton animations/Type5.ske
ObjectTemplate.useSkeletonPartAsMain SVT40
ObjectTemplate.addTemplate SVT40Lod

ObjectTemplate.addTemplate e_MuzzGun
ObjectTemplate.setPosition 0/0.05/0.87
ObjectTemplate.setRotation 0/0/0

ObjectTemplate.addTemplate e_shellM1Garand
ObjectTemplate.setPosition 0/0.1/0.41
ObjectTemplate.setRotation 0/0/0
