//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <LinkPresentation/UIGestureRecognizerDelegate-Protocol.h>

@class AVPlayer, AVPlayerController, CALayer, LPControlsSuppressingAVPlayerViewController, LPSwipeDownTracker, LPVideoView, NSString, UIPanGestureRecognizer, __AVPlayerLayerView;

__attribute__((visibility("hidden")))
@interface LPFullScreenVideoViewController : UIViewController <UIGestureRecognizerDelegate>
{
    LPVideoView *_sourceView;
    LPControlsSuppressingAVPlayerViewController *_playerViewController;
    UIPanGestureRecognizer *_slideGesture;
    LPSwipeDownTracker *_swipeDownTracker;
    CALayer *_videoMaskLayer;
    __AVPlayerLayerView *_playerLayerView;
    AVPlayerController *_playerController;
    AVPlayer *_player;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)animateIn;
- (void)beginSlideToDismissTransitionWithRecognizer:(id)arg1;
- (void)cancelDismissalGestures;
- (void)completeSlideToDismissTransition;
- (void)completeTransitionWithInitialVelocity:(struct PHDisplayVelocity)arg1 damping:(double)arg2 duration:(double)arg3 didComplete:(BOOL)arg4;
- (void)dismissNonInteractively;
- (void)fadeBackgroundToColor:(id)arg1 withDuration:(double)arg2 damping:(double)arg3;
- (id)initWithPlayer:(id)arg1 sourceView:(id)arg2;
- (void)installCornerMaskLayer;
- (void)installGestureRecognizers;
- (void)prepareForDisplayWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setUpFullScreenVideoViewControllerIfNeeded;
- (void)slideToDismissGestureRecognized:(id)arg1;
- (void)updateSlideToDismissTransitionWithRecognizer:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

