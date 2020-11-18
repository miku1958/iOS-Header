//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVKit/AVPictureInPictureViewControllerDelegate-Protocol.h>
#import <AVKit/PGPictureInPictureProxyDelegate-Protocol.h>

@class AVPictureInPictureViewController, AVPlayerController, AVPlayerLayer, NSString, PGPictureInPictureProxy, __AVPlayerLayerView;
@protocol AVPictureInPictureControllerDelegate, OS_dispatch_source;

@interface AVPictureInPictureController : NSObject <AVPictureInPictureViewControllerDelegate, PGPictureInPictureProxyDelegate>
{
    AVPlayerLayer *_playerLayer;
    __AVPlayerLayerView *_playerLayerView;
    AVPlayerController *_playerController;
    PGPictureInPictureProxy *_pictureInPictureProxy;
    AVPictureInPictureViewController *_pictureInPictureViewController;
    NSObject<OS_dispatch_source> *_fullScreenCheckTimer;
    BOOL _isPlaying;
    BOOL _isFullScreen;
    id<AVPictureInPictureControllerDelegate> _delegate;
    struct {
        BOOL pictureInPictureControllerWillStartPictureInPicture;
        BOOL pictureInPictureControllerDidStartPictureInPicture;
        BOOL pictureInPictureController_failedToStartPictureInPictureWithError;
        BOOL pictureInPictureControllerWillStopPictureInPicture;
        BOOL pictureInPictureControllerDidStopPictureInPicture;
        BOOL pictureInPictureController_restoreUserInterfaceForPictureInPictureStopWithCompletionHandler;
    } _delegateRespondsTo;
    BOOL _allowsPictureInPicturePlayback;
}

@property (nonatomic) BOOL allowsPictureInPicturePlayback; // @synthesize allowsPictureInPicturePlayback=_allowsPictureInPicturePlayback;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AVPictureInPictureControllerDelegate> delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isPictureInPictureActive) BOOL pictureInPictureActive;
@property (readonly, nonatomic, getter=isPictureInPicturePossible) BOOL pictureInPicturePossible;
@property (readonly, nonatomic, getter=isPictureInPictureSuspended) BOOL pictureInPictureSuspended;
@property (readonly, nonatomic) BOOL pictureInPictureWasStartedWhenEnteringBackground;
@property (strong, nonatomic) AVPlayerController *playerController;
@property (readonly, nonatomic) AVPlayerLayer *playerLayer;
@property (readonly) Class superclass;

+ (void)initialize;
+ (BOOL)isPictureInPictureSupported;
+ (id)keyPathsForValuesAffectingPictureInPictureActive;
+ (id)keyPathsForValuesAffectingPictureInPicturePossible;
+ (id)keyPathsForValuesAffectingPictureInPictureSuspended;
+ (id)keyPathsForValuesAffectingPictureInPictureWasStartedWhenEnteringBackground;
+ (id)pictureInPictureButtonStartImageCompatibleWithTraitCollection:(id)arg1;
+ (id)pictureInPictureButtonStopImageCompatibleWithTraitCollection:(id)arg1;
- (void).cxx_destruct;
- (void)_checkIsFullScreenAndUpdatePictureInPictureShouldStartWhenEnteringBackground;
- (struct CGRect)_playerLayerVideoRectInScreen;
- (void)_updatePictureInPictureShouldStartWhenEnteringBackground;
- (void)_updatePlaybackProgress;
- (id)_window;
- (void)dealloc;
- (id)init;
- (id)initWithPlayerLayer:(id)arg1;
- (id)initWithPlayerLayerView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)pictureInPictureProxy:(id)arg1 didStartPictureInPictureWithAnimationType:(long long)arg2;
- (void)pictureInPictureProxy:(id)arg1 didStopPictureInPictureWithAnimationType:(long long)arg2 reason:(long long)arg3;
- (void)pictureInPictureProxy:(id)arg1 failedToStartPictureInPictureWithAnimationType:(long long)arg2 error:(id)arg3;
- (void)pictureInPictureProxy:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)pictureInPictureProxy:(id)arg1 willStartPictureInPictureWithAnimationType:(long long)arg2;
- (void)pictureInPictureProxy:(id)arg1 willStopPictureInPictureWithAnimationType:(long long)arg2 reason:(long long)arg3;
- (void)pictureInPictureProxyPictureInPictureInterruptionBegan:(id)arg1;
- (void)pictureInPictureProxyPictureInPictureInterruptionEnded:(id)arg1;
- (struct CGRect)pictureInPictureProxyViewFrameForTransitionAnimation:(id)arg1;
- (void)pictureInPictureViewControllerViewDidAppear:(id)arg1;
- (void)pictureInPictureViewControllerViewWillDisappear:(id)arg1;
- (void)playerLayerLayoutDidChange;
- (void)startPictureInPicture;
- (void)stopPictureInPicture;
- (void)stopPictureInPictureEvenWhenInBackground;

@end

