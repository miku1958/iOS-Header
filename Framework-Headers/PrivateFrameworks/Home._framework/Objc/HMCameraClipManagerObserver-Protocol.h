//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/NSObject-Protocol.h>

@class HMCameraClipManager, NSSet;

@protocol HMCameraClipManagerObserver <NSObject>

@optional
- (void)clipManager:(HMCameraClipManager *)arg1 didRemoveClipsWithUUIDs:(NSSet *)arg2;
- (void)clipManager:(HMCameraClipManager *)arg1 didRemoveSignificantEventsWithUUIDs:(NSSet *)arg2;
- (void)clipManager:(HMCameraClipManager *)arg1 didUpdateClips:(NSSet *)arg2;
- (void)clipManager:(HMCameraClipManager *)arg1 didUpdateSignificantEvents:(NSSet *)arg2;
@end

