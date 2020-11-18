//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <HomeUI/HFItemManagerDelegate-Protocol.h>
#import <HomeUI/HUItemPresentationContainer-Protocol.h>
#import <HomeUI/HUPresentationDelegate-Protocol.h>
#import <HomeUI/HUPresentationDelegateHost-Protocol.h>
#import <HomeUI/PGPictureInPictureProxyDelegate-Protocol.h>

@class HFCameraAudioManager, HFCameraItem, HFItem, HFItemManager, HUCameraMicrophoneButton, HUCameraStreamContentViewController, MPVolumeSlider, NSArray, NSString, PGPictureInPictureProxy, UIBarButtonItem;
@protocol HUCameraStreamViewControllerDelegate, HUPresentationDelegate;

@interface HUCameraStreamViewController : UIViewController <HFItemManagerDelegate, HUPresentationDelegate, PGPictureInPictureProxyDelegate, HUItemPresentationContainer, HUPresentationDelegateHost>
{
    BOOL _navigationControllerSetup;
    BOOL _barsHidden;
    id<HUPresentationDelegate> _presentationDelegate;
    id<HUCameraStreamViewControllerDelegate> _delegate;
    HUCameraStreamContentViewController *_cameraStreamContentViewController;
    HFItemManager *_itemManager;
    PGPictureInPictureProxy *_pipProxy;
    UIViewController *_lastPresentingViewController;
    HFCameraAudioManager *_cameraAudioManager;
    MPVolumeSlider *_volumeSlider;
    NSArray *_volumeSliderConstraints;
    NSArray *_microphoneButtonConstraints;
    UIBarButtonItem *_volumeBarButtonItem;
    HUCameraMicrophoneButton *_microphoneButton;
    UIBarButtonItem *_microphoneBarButtonItem;
}

@property (nonatomic, getter=areBarsHidden) BOOL barsHidden; // @synthesize barsHidden=_barsHidden;
@property (strong, nonatomic) HFCameraAudioManager *cameraAudioManager; // @synthesize cameraAudioManager=_cameraAudioManager;
@property (readonly, nonatomic) HFCameraItem *cameraItem;
@property (readonly, nonatomic) HUCameraStreamContentViewController *cameraStreamContentViewController; // @synthesize cameraStreamContentViewController=_cameraStreamContentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUCameraStreamViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) HFItem *hu_presentedItem;
@property (readonly, nonatomic) HFItemManager *itemManager; // @synthesize itemManager=_itemManager;
@property (weak, nonatomic) UIViewController *lastPresentingViewController; // @synthesize lastPresentingViewController=_lastPresentingViewController;
@property (strong, nonatomic) UIBarButtonItem *microphoneBarButtonItem; // @synthesize microphoneBarButtonItem=_microphoneBarButtonItem;
@property (strong, nonatomic) HUCameraMicrophoneButton *microphoneButton; // @synthesize microphoneButton=_microphoneButton;
@property (strong, nonatomic) NSArray *microphoneButtonConstraints; // @synthesize microphoneButtonConstraints=_microphoneButtonConstraints;
@property (nonatomic, getter=isNavigationControllerSetup) BOOL navigationControllerSetup; // @synthesize navigationControllerSetup=_navigationControllerSetup;
@property (strong, nonatomic) PGPictureInPictureProxy *pipProxy; // @synthesize pipProxy=_pipProxy;
@property (weak, nonatomic) id<HUPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long viewAppearanceState;
@property (strong, nonatomic) UIBarButtonItem *volumeBarButtonItem; // @synthesize volumeBarButtonItem=_volumeBarButtonItem;
@property (strong, nonatomic) MPVolumeSlider *volumeSlider; // @synthesize volumeSlider=_volumeSlider;
@property (strong, nonatomic) NSArray *volumeSliderConstraints; // @synthesize volumeSliderConstraints=_volumeSliderConstraints;

- (void).cxx_destruct;
- (void)_attachCameraStreamViewController;
- (id)_barBackgroundView;
- (id)_cameraProfile;
- (void)_detailsButtonPressed;
- (void)_doneButtonPressed;
- (void)_handleApplicationDidBecomeActiveNotification;
- (void)_handleBarHideTapGesture:(id)arg1;
- (void)_microphoneButtonPressed;
- (void)_presentCameraDetailsWithViewController:(id)arg1;
- (void)_setupNavigationController;
- (unsigned long long)_streamState;
- (void)_updateCameraAudioManager;
- (void)_updateMicrophoneButton;
- (void)_updateNavigationItemTitle;
- (id)finishPresentation:(id)arg1 animated:(BOOL)arg2;
- (id)initWithCameraItem:(id)arg1;
- (void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2;
- (void)pictureInPictureProxy:(id)arg1 didStopPictureInPictureWithAnimationType:(long long)arg2 reason:(long long)arg3;
- (void)pictureInPictureProxy:(id)arg1 willStartPictureInPictureWithAnimationType:(long long)arg2;
- (void)pictureInPictureProxy:(id)arg1 willStopPictureInPictureWithAnimationType:(long long)arg2 reason:(long long)arg3;
- (void)pictureInPictureProxyPictureInPictureInterruptionBegan:(id)arg1;
- (void)pictureInPictureProxyPictureInPictureInterruptionEnded:(id)arg1;
- (struct CGRect)pictureInPictureProxyViewFrameForTransitionAnimation:(id)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (long long)preferredStatusBarUpdateAnimation;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (BOOL)prefersStatusBarHidden;
- (id)previewActionItems;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

@end

