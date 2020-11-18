//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <MediaPlayer/MPMediaControlsClientController-Protocol.h>
#import <MediaPlayer/UIViewControllerAnimatedTransitioning-Protocol.h>
#import <MediaPlayer/UIViewControllerTransitioningDelegate-Protocol.h>

@class MPMediaControlsConfiguration, MPMediaControlsRemoteViewController, MTMaterialView, NSString, _UIAsyncInvocation;
@protocol MPMediaControlsViewControllerDelegate;

@interface MPMediaControlsViewController : UIViewController <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, MPMediaControlsClientController>
{
    _UIAsyncInvocation *_cancelRequest;
    BOOL _hasPresented;
    BOOL _shouldObserveRoutingContextUIDChanges;
    BOOL _shouldUseOverrideAudioSessionValues;
    CDUnknownBlockType _didDismissHandler;
    id<MPMediaControlsViewControllerDelegate> _delegate;
    MPMediaControlsRemoteViewController *_remoteViewController;
    MTMaterialView *_backgroundView;
    MPMediaControlsConfiguration *_configuration;
}

@property (strong, nonatomic) MTMaterialView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property (readonly, nonatomic) MPMediaControlsConfiguration *configuration; // @synthesize configuration=_configuration;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MPMediaControlsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) CDUnknownBlockType didDismissHandler; // @synthesize didDismissHandler=_didDismissHandler;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) MPMediaControlsRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property (nonatomic) BOOL shouldUseOverrideAudioSessionValues; // @synthesize shouldUseOverrideAudioSessionValues=_shouldUseOverrideAudioSessionValues;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addRemoteView;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillAddDeactivationReason:(id)arg1;
- (void)_audioSessionRoutingContextDidChange:(id)arg1;
- (void)_reloadAudioContextConfigurationOptions;
- (void)_requestRemoteViewController;
- (void)_updateConfigurationWithRouteSharingPolicy:(unsigned long long)arg1 routingContextUID:(id)arg2;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)dealloc;
- (void)didReceiveInteraction;
- (void)didSelectRoute:(id)arg1;
- (void)dismiss;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (BOOL)prefersStatusBarHidden;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)setOverrideRouteSharingPolicy:(unsigned long long)arg1 routingContextUID:(id)arg2;
- (BOOL)shouldAutorotate;
- (void)startPrewarming;
- (void)stopPrewarming;
- (void)tapGestureRecognized:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

