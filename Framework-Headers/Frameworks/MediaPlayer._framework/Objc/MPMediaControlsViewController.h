//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <MediaPlayer/UIViewControllerAnimatedTransitioning-Protocol.h>
#import <MediaPlayer/UIViewControllerTransitioningDelegate-Protocol.h>

@class MPMediaControls, MPMediaControlsConfiguration, NSString;
@protocol MPMediaControlsViewControllerDelegate;

@interface MPMediaControlsViewController : UIViewController <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning>
{
    MPMediaControlsConfiguration *_configuration;
    CDUnknownBlockType _didDismissHandler;
    id<MPMediaControlsViewControllerDelegate> _delegate;
    MPMediaControls *_mediaControls;
}

@property (readonly, nonatomic) MPMediaControlsConfiguration *configuration; // @synthesize configuration=_configuration;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MPMediaControlsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) CDUnknownBlockType didDismissHandler; // @synthesize didDismissHandler=_didDismissHandler;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) MPMediaControls *mediaControls; // @synthesize mediaControls=_mediaControls;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createMediaControlsIfNeeded;
- (void)_present;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)dismiss;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (BOOL)prefersStatusBarHidden;
- (void)prepareRemoteViewController;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)setOverrideRouteSharingPolicy:(unsigned long long)arg1 routingContextUID:(id)arg2;
- (void)startPrewarming;
- (void)stopPrewarming;
- (double)transitionDuration:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end

