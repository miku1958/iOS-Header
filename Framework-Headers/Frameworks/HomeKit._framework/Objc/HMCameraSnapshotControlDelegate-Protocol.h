//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/NSObject-Protocol.h>

@class HMCameraSnapshot, HMCameraSnapshotControl, NSError;

@protocol HMCameraSnapshotControlDelegate <NSObject>

@optional
- (void)cameraSnapshotControl:(HMCameraSnapshotControl *)arg1 didTakeSnapshot:(HMCameraSnapshot *)arg2 error:(NSError *)arg3;
- (void)cameraSnapshotControlDidUpdateMostRecentSnapshot:(HMCameraSnapshotControl *)arg1;
@end
