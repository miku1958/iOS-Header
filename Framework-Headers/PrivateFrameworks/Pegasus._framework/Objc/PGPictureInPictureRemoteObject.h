//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Pegasus/PGPictureInPictureRemoteObjectInterface-Protocol.h>
#import <Pegasus/PGPictureInPictureViewControllerDelegate-Protocol.h>

@class BKSProcessAssertion, NSArray, NSString, NSXPCConnection, PGPictureInPictureApplication, PGPictureInPictureViewController, PGPlaybackProgress;
@protocol OS_dispatch_queue, PGPictureInPictureRemoteObjectDelegate;

@interface PGPictureInPictureRemoteObject : NSObject <PGPictureInPictureRemoteObjectInterface, PGPictureInPictureViewControllerDelegate>
{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    long long _controlsStyle;
    long long _currentState;
    BKSProcessAssertion *_processAssertion;
    PGPictureInPictureViewController *_pictureInPictureViewController;
    BOOL _isPictureInPicturePossible;
    long long _pictureInPictureInterruptionCounter;
    BOOL _pictureInPictureShouldStartWhenEnteringBackground;
    BOOL _shouldShowAlternateActionButtonImage;
    BOOL _shouldShowLoadingIndicator;
    PGPlaybackProgress *_playbackProgress;
    NSArray *_loadedTimeRanges;
    BOOL _isStartingStoppingOrCancellingPictureInPicture;
    id<PGPictureInPictureRemoteObjectDelegate> _delegate;
    struct {
        unsigned int pictureInPictureRemoteObject_shouldAcceptSetupRequest:1;
        unsigned int pictureInPictureRemoteObject_didCreatePictureInPictureViewController:1;
        unsigned int pictureInPictureRemoteObject_willShowPictureInPictureViewController:1;
        unsigned int pictureInPictureRemoteObject_didShowPictureInPictureViewController:1;
        unsigned int pictureInPictureRemoteObject_willHidePictureInPictureViewController:1;
        unsigned int pictureInPictureRemoteObject_didHidePictureInPictureViewController:1;
        unsigned int pictureInPictureRemoteObject_willDestroyPictureInPictureViewController:1;
    } _delegateRespondsTo;
    PGPictureInPictureApplication *_pictureInPictureApplication;
}

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PGPictureInPictureRemoteObjectDelegate> delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isStartingStoppingOrCancellingPictureInPicture;
@property (readonly, nonatomic) PGPictureInPictureApplication *pictureInPictureApplication; // @synthesize pictureInPictureApplication=_pictureInPictureApplication;
@property (nonatomic, getter=isPictureInPicturePossible) BOOL pictureInPicturePossible;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) BOOL shouldStartPictureInPictureEnteringBackground;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_processAssertionForProcessIdentifier:(int)arg1;
- (void)_tearDownAndNotifyClientAboutCancellation:(BOOL)arg1;
- (oneway void)activateApplicationIfNeededWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancel;
- (oneway void)cleanupWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithConnection:(id)arg1;
- (oneway void)initializePictureInPictureWithControlsStyle:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)invalidate;
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
- (oneway void)setLoadedTimeRanges:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (oneway void)setPictureInPictureShouldStartWhenEnteringBackground:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (oneway void)setPlaybackProgress:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (oneway void)setShouldShowAlternateActionButtonImage:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (oneway void)setShouldShowLoadingIndicator:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (oneway void)setupAnimated:(BOOL)arg1 withHostedWindowHostingHandle:(id)arg2 preferredContentSize:(struct CGSize)arg3 initialLayerFrame:(struct CGRect)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (oneway void)startPictureInPictureAnimated:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startPictureInPictureEnteringBackgroundAnimated:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (oneway void)stopPictureInPictureAnimated:(BOOL)arg1 withFinalLayerFrame:(struct CGRect)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)suspend;
- (oneway void)updatePreferredContentSize:(struct CGSize)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end

