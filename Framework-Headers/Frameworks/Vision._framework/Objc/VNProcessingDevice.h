//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Vision/NSCopying-Protocol.h>

@interface VNProcessingDevice : NSObject <NSCopying>
{
}

+ (void)_lockStaticObjectsAccessLock;
+ (void)_unlockStaticObjectsAccessLock;
+ (id)allDevices;
+ (id)defaultANEDevice;
+ (id)defaultCPUDevice;
+ (id)defaultDevice;
+ (id)defaultMetalDevice;
+ (id)deviceForMetalDevice:(id)arg1;
+ (id)directANEDevice;
+ (void)forcedCleanup;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (int)espressoDeviceID;
- (int)espressoEngine;
- (int)espressoStorageType;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)metalDevice;
- (BOOL)targetsANE;
- (BOOL)targetsCPU;
- (BOOL)targetsGPU;

@end

