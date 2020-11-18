//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Pegasus/PGPictureInPictureRemoteObjectInterface-Protocol.h>
#import <Pegasus/PGPictureInPictureViewControllerDelegate-Protocol.h>

@class BKSProcessAssertion, NSArray, NSString, NSUUID, NSXPCConnection, PGPictureInPictureApplication, PGPictureInPictureViewController, PGPlaybackProgress;
@protocol OS_dispatch_queue, PGPictureInPictureRemoteObjectDelegate;

__attribute__((visibility("hidden")))
@interface PGPictureInPictureRemoteObject : NSObject <PGPictureInPictureRemoteObjectInterface, PGPictureInPictureViewControllerDelegate>
{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    long long _controlsStyle;
    long long _currentState;
    BKSProcessAssertion *_processAssertion;
    BKSProcessAssertion *_interruptionBeganFinishTaskAssertion;
    NSUUID *_finishTaskInvalidationUUID;
    PGPictureInPictureViewController *_pictureInPictureViewController;
    BOOL _isPictureInPicturePossible;
    long long _pictureInPictureInterruptionCounter;
    BOOL _pictureInPictureShouldStartWhenEnteringBackground;
    BOOL _shouldShowAlternateActionButtonImage;
    BOOL _shouldShowLoadingIndicator;
    PGPlaybackProgress *_playbackProgress;
    NSArray *_loadedTimeRanges;
    unsigned long long _transitioningState;
    id<PGPictureInPictureRemoteObjectDelegate> _delegate;
    struct {
        unsigned int pictureInPictureRemoteObject_shouldAcceptSetupRequest:1;
        unsigned int pictureInPictureRemoteObject_shouldCancelActivePictureInPictureOnStart:1;
        unsigned int pictureInPictureRemoteObject_shouldUpdateCancellationPolicyOnStart:1;
        unsigned int pictureInPictureRemoteObject_didCreatePictureInPictureViewController:1;
        unsigned int pictureInPictureRemoteObject_willShowPictureInPictureViewController:1;
        unsigned int pictureInPictureRemoteObject_didShowPictureInPictureViewController:1;
        unsigned int pictureInPictureRemoteObject_willHidePictureInPictureViewController:1;
        unsigned int pictureInPictureRemoteObject_didHidePictureInPictureViewController:1;
        unsigned int pictureInPictureRemoteObject_willDestroyPictureInPictureViewController:1;
    } _delegateRespondsTo;
    PGPictureInPictureApplication *_pictureInPictureApplication;
    NSString *_sourceSceneSessionPersistentIdentifier;
    struct CGSize _preferredContentSize;
    struct CGRect _initialLayerFrame;
}

@property (readonly, nonatomic) BOOL canCancelPictureInPicture;
@property (readonly, nonatomic) BOOL canStopPictureInPicture;
@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PGPictureInPictureRemoteObjectDelegate> delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) struct CGRect initialLayerFrame; // @synthesize initialLayerFrame=_initialLayerFrame;
@property (readonly, nonatomic) BOOL isStartingStoppingOrCancellingPictureInPicture;
@property (readonly, nonatomic) PGPictureInPictureApplication *pictureInPictureApplication; // @synthesize pictureInPictureApplication=_pictureInPictureApplication;
@property (nonatomic, getter=isPictureInPicturePossible) BOOL pictureInPicturePossible;
@property (readonly, nonatomic) struct CGSize preferredContentSize; // @synthesize preferredContentSize=_preferredContentSize;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) BOOL shouldStartPictureInPictureEnteringBackground;
@property (readonly, nonatomic) NSString *sourceSceneSessionPersistentIdentifier; // @synthesize sourceSceneSessionPersistentIdentifier=_sourceSceneSessionPersistentIdentifier;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long transitioningState;

- (void).cxx_destruct;
- (id)_finishTaskAssertionForProcessIdentifier:(int)arg1;
- (void)_invalidateInterruptionBeganFinishTaskAssertion;
- (id)_processAssertionForProcessIdentifier:(int)arg1;
- (void)_tearDownAndNotifyClientAboutCancellation:(BOOL)arg1;
- (void)cancel;
- (oneway void)checkActivePictureInPictureCancellationPolicyWithCompletion:(CDUnknownBlockType)arg1;
- (oneway void)cleanupWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithConnection:(id)arg1;
- (oneway void)initializePictureInPictureWithControlsStyle:(long long)arg1 preferredContentSize:(struct CGSize)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)invalidate;
- (BOOL)matchesSceneSessionIdentifier:(id)arg1;
- (void)pictureInPictureInterruptionBegan;
- (void)pictureInPictureInterruptionEnded;
- (void)pictureInPictureViewController:(id)arg1 updateHostedWindowSize:(struct CGSize)arg2 animationType:(long long)arg3 initialSpringVelocity:(double)arg4;
- (void)pictureInPictureViewControllerActionButtonTapped:(id)arg1;
- (void)pictureInPictureViewControllerCancelButtonTapped:(id)arg1;
- (void)pictureInPictureViewControllerHostedWindowSizeChangeBegan:(id)arg1;
- (void)pictureInPictureViewControllerHostedWindowSizeChangeEnded:(id)arg1;
- (void)pictureInPictureViewControllerStopButtonTapped:(id)arg1;
- (void)resume;
- (oneway void)rotateContentContainer:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (oneway void)setControlsStyle:(long long)arg1 animated:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (oneway void)setLoadedTimeRanges:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (oneway void)setPictureInPictureShouldStartWhenEnteringBackground:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (oneway void)setPlaybackProgress:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (oneway void)setShouldShowAlternateActionButtonImage:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (oneway void)setShouldShowLoadingIndicator:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (oneway void)setupStartAnimated:(BOOL)arg1 hostedWindowHostingHandle:(id)arg2 sceneSessionPersistentIdentifier:(id)arg3 preferredContentSize:(struct CGSize)arg4 initialInterfaceOrientation:(long long)arg5 initialLayerFrame:(struct CGRect)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (oneway void)setupStopAnimated:(BOOL)arg1 activateApplicationIfNeeded:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (oneway void)startPictureInPictureAnimated:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startPictureInPictureEnteringBackgroundAnimated:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)stopPictureInPictureAnimated:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (oneway void)stopPictureInPictureAnimated:(BOOL)arg1 withFinalInterfaceOrientation:(long long)arg2 finalLayerFrame:(struct CGRect)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)suspend;
- (oneway void)updateInitialLayerFrameForInteractiveTransitionAnimationUponBackgrounding:(struct CGRect)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (oneway void)updatePreferredContentSize:(struct CGSize)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (oneway void)updateSourceSceneSessionPersistentIdentifierForInteractiveTransitionAnimationUponBackgrounding:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end
