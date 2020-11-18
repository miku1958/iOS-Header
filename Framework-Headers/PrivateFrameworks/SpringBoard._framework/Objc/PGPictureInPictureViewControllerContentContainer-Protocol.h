//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@protocol PGPictureInPictureViewControllerContentContainer <NSObject>
- (void)performStartAnimationWithAnimationHandler:(void (^)(void))arg1 completionHandler:(void (^)(void))arg2;
- (void)performStopAnimationWithFinalInterfaceOrientation:(long long)arg1 finalLayerFrame:(struct CGRect)arg2 animationHandler:(void (^)(void))arg3 completionHandler:(void (^)(void))arg4;
- (void)preferredContentSizeDidChangeForPictureInPictureViewController;
- (void)prepareStartAnimationWithInitialInterfaceOrientation:(long long)arg1 initialLayerFrame:(struct CGRect)arg2 completionHandler:(void (^)(void))arg3;

@optional
- (void)acquireInterfaceOrientationLock;
- (BOOL)handleDoubleTapGesture;
- (BOOL)handleTapGesture;
- (void)performRotateAnimationWithRotation:(long long)arg1 completionHandler:(void (^)(void))arg2;
- (void)prepareStopAnimationWithCompletionHandler:(void (^)(void))arg1;
- (void)relinquishInterfaceOrientationLock;
@end
