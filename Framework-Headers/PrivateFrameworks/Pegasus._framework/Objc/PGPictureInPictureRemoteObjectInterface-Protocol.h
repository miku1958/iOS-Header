//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Pegasus/NSObject-Protocol.h>

@class NSDictionary, NSString, PGHostedWindowHostingHandle;

@protocol PGPictureInPictureRemoteObjectInterface <NSObject>
- (oneway void)checkActivePictureInPictureCancellationPolicyWithCompletion:(void (^)(BOOL, NSError *, BOOL, BOOL))arg1;
- (oneway void)cleanupWithCompletionHandler:(void (^)(BOOL, NSError *))arg1;
- (oneway void)initializePictureInPictureWithControlsStyle:(long long)arg1 preferredContentSize:(struct CGSize)arg2 completionHandler:(void (^)(BOOL, NSError *))arg3;
- (oneway void)rotateContentContainer:(long long)arg1 withCompletionHandler:(void (^)(BOOL, NSError *, BKSAnimationFenceHandle *))arg2;
- (oneway void)setPictureInPictureShouldStartWhenEnteringBackground:(BOOL)arg1 completionHandler:(void (^)(BOOL, NSError *))arg2;
- (oneway void)setupStartAnimated:(BOOL)arg1 hostedWindowHostingHandle:(PGHostedWindowHostingHandle *)arg2 sceneSessionPersistentIdentifier:(NSString *)arg3 preferredContentSize:(struct CGSize)arg4 initialInterfaceOrientation:(long long)arg5 initialLayerFrame:(struct CGRect)arg6 playbackState:(NSDictionary *)arg7 completionHandler:(void (^)(BOOL, NSError *))arg8;
- (oneway void)setupStopAnimated:(BOOL)arg1 needsApplicationActivation:(BOOL)arg2 completionHandler:(void (^)(BOOL, NSError *))arg3;
- (oneway void)startPictureInPictureAnimated:(BOOL)arg1 completionHandler:(void (^)(BOOL, NSError *))arg2;
- (oneway void)stopPictureInPictureAndRestoreUserInterface;
- (oneway void)stopPictureInPictureAnimated:(BOOL)arg1 withFinalInterfaceOrientation:(long long)arg2 finalLayerFrame:(struct CGRect)arg3 completionHandler:(void (^)(BOOL, NSError *, BKSAnimationFenceHandle *))arg4;
- (oneway void)updateInitialLayerFrameForInteractiveTransitionAnimationUponBackgrounding:(struct CGRect)arg1 withCompletionHandler:(void (^)(BOOL, NSError *))arg2;
- (oneway void)updatePlaybackStateWithDiff:(NSDictionary *)arg1;
- (oneway void)updatePreferredContentSize:(struct CGSize)arg1 withCompletionHandler:(void (^)(BOOL, NSError *))arg2;
- (oneway void)updateSourceSceneSessionPersistentIdentifierForInteractiveTransitionAnimationUponBackgrounding:(NSString *)arg1 withCompletionHandler:(void (^)(BOOL, NSError *))arg2;
@end

