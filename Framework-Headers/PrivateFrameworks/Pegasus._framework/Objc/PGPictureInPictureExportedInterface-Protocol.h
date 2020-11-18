//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Pegasus/NSObject-Protocol.h>

@class BKSAnimationFenceHandle, NSDictionary;

@protocol PGPictureInPictureExportedInterface <NSObject>
- (oneway void)actionButtonTapped;
- (oneway void)beginTwoStagePictureInPictureStopByRestoringUserInterfaceWithCompletionHandler:(void (^)(BOOL, NSError *))arg1;
- (oneway void)endTwoStagePictureInPictureStopWithCompletionBlock:(void (^)(BOOL, NSError *))arg1;
- (oneway void)handleCommand:(NSDictionary *)arg1;
- (oneway void)hostedWindowSizeChangeBegan;
- (oneway void)hostedWindowSizeChangeEnded;
- (oneway void)pictureInPictureCancelRequestedAnimated:(BOOL)arg1 withCompletionHandler:(void (^)(BOOL, NSError *))arg2;
- (oneway void)pictureInPictureCancelled;
- (oneway void)pictureInPictureStartRequestedAnimated:(BOOL)arg1 withCompletionHandler:(void (^)(BOOL, NSError *))arg2;
- (oneway void)pictureInPictureStopRequestedAnimated:(BOOL)arg1 withCompletionHandler:(void (^)(BOOL, NSError *))arg2;
- (oneway void)setResourcesUsageReductionReasons:(unsigned long long)arg1;
- (oneway void)updateHostedWindowSize:(struct CGSize)arg1 animationType:(long long)arg2 initialSpringVelocity:(double)arg3 synchronizationFence:(BKSAnimationFenceHandle *)arg4;
- (oneway void)updatePictureInPicturePossible:(BOOL)arg1;
@end
