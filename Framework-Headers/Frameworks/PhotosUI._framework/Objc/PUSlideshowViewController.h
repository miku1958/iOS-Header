//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUI/OKPresentationViewControllerDelegate-Protocol.h>
#import <PhotosUI/PUAirPlayControllerContentProvider-Protocol.h>
#import <PhotosUI/PUAirPlayControllerRouteObserver-Protocol.h>
#import <PhotosUI/PUSlideshowDisplayContext-Protocol.h>
#import <PhotosUI/PUSlideshowSettingsViewControllerDelegate-Protocol.h>
#import <PhotosUI/PUSlideshowViewModelChangeObserver-Protocol.h>
#import <PhotosUI/PUViewControllerSpecChangeObserver-Protocol.h>
#import <PhotosUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, OKPresentationViewController, PUPlaceholderView, PUSlideshowSession, PUSlideshowViewControllerSpec, UITapGestureRecognizer;
@protocol PUSlideshowViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUSlideshowViewController : UIViewController <UIGestureRecognizerDelegate, PUSlideshowViewModelChangeObserver, PUSlideshowSettingsViewControllerDelegate, OKPresentationViewControllerDelegate, PUAirPlayControllerContentProvider, PUAirPlayControllerRouteObserver, PUViewControllerSpecChangeObserver, PUSlideshowDisplayContext>
{
    OKPresentationViewController *_currentPresentationController;
    PUSlideshowViewControllerSpec *_spec;
    UITapGestureRecognizer *_tapGestureRecognizer;
    unsigned long long _playerStateButtonItemIndex;
    BOOL __needsUpdateSpec;
    PUSlideshowSession *_session;
    unsigned long long _mode;
    id<PUSlideshowViewControllerDelegate> _delegate;
    PUSlideshowViewController *__secondScreenBrowser;
    PUPlaceholderView *__slideshowPlaceholderView;
    UIViewController *__slideshowSettingsViewController;
}

@property (nonatomic, setter=_setNeedsUpdateSpec:) BOOL _needsUpdateSpec; // @synthesize _needsUpdateSpec=__needsUpdateSpec;
@property (strong, nonatomic, setter=_setSecondScreenBrowser:) PUSlideshowViewController *_secondScreenBrowser; // @synthesize _secondScreenBrowser=__secondScreenBrowser;
@property (strong, nonatomic, setter=_setSlideshowPlaceHolderView:) PUPlaceholderView *_slideshowPlaceholderView; // @synthesize _slideshowPlaceholderView=__slideshowPlaceholderView;
@property (strong, nonatomic, setter=_setSlideshowSettingsViewController:) UIViewController *_slideshowSettingsViewController; // @synthesize _slideshowSettingsViewController=__slideshowSettingsViewController;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PUSlideshowViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property (readonly, nonatomic) PUSlideshowSession *session; // @synthesize session=_session;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_airplayButtonTapped:(id)arg1;
- (void)_dismissSlideshow;
- (void)_doneButtonTapped:(id)arg1;
- (void)_handleAppWillResignActiveNotification:(id)arg1;
- (void)_handleStateChange;
- (void)_installPresentationController:(id)arg1;
- (void)_invalidateSpec;
- (BOOL)_needsUpdate;
- (void)_playerStateButtonTapped:(id)arg1;
- (void)_removeCurrentPresentationController;
- (void)_removeSlideshowSettingsViewController;
- (void)_setNeedsUpdate;
- (void)_settingsButtonTapped:(id)arg1;
- (void)_setupChromeBar;
- (void)_setupTapGesture;
- (void)_tapGesture:(id)arg1;
- (void)_updateAirplayButton;
- (void)_updateChromeVisibility;
- (void)_updateIfNeeded;
- (void)_updatePlaceholder;
- (void)_updatePlayerButton;
- (void)_updateRouteObservation;
- (void)_updateSpecIfNeeded;
- (void)airPlayControllerRouteAvailabilityChanged:(id)arg1;
- (void)airPlayControllerScreenAvailabilityChanged:(id)arg1;
- (id)ancestorViewOfInstance:(id)arg1;
- (id)contentViewControllerForAirPlayController:(id)arg1;
- (void)couchPotatoPlaybackFinished;
- (void)dealloc;
- (void)finishSession;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithSession:(id)arg1;
- (id)initWithSession:(id)arg1 mode:(unsigned long long)arg2;
- (void)loadView;
- (BOOL)prefersStatusBarHidden;
- (BOOL)pu_wantsNavigationBarVisible;
- (BOOL)pu_wantsTabBarVisible;
- (BOOL)pu_wantsToolbarVisible;
- (void)settingsDidFinished:(id)arg1;
- (void)slideshowSession:(id)arg1 startDisplayingPresentationViewController:(id)arg2;
- (void)slideshowSession:(id)arg1 stopDisplayingPresentationViewController:(id)arg2;
- (void)viewControllerSpec:(id)arg1 didChange:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (id)visibleAssets;

@end

