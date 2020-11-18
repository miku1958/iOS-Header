//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <QuickLook/QLPreviewItemInteractionDelegate-Protocol.h>
#import <QuickLook/QLSwippableItemProtocol-Protocol.h>
#import <QuickLook/UIDocumentPasswordViewDelegate-Protocol.h>

@class NSLayoutConstraint, NSString, NSTimer, QLDisplayBundle, QLGenericView, QLProgressView, UIDocumentPasswordView, UIView;
@protocol QLPreviewItem, QLPreviewItemInteractionDelegate;

__attribute__((visibility("hidden")))
@interface QLPreviewViewController : UIViewController <QLPreviewItemInteractionDelegate, UIDocumentPasswordViewDelegate, QLSwippableItemProtocol>
{
    id<QLPreviewItemInteractionDelegate> _displayBundleDelegate;
    id<QLPreviewItem> _previewItem;
    long long _index;
    CDStruct_0109ef53 _clientContext;
    int _previewMode;
    BOOL _needsReload;
    BOOL _swiping;
    BOOL _shouldSwapDisplayBundles;
    UIView *_scalingView;
    UIView *_contentContainerView;
    UIView *_accessoryContainerView;
    double _aspectRatio;
    double _scaleFactor;
    double _navigationBarVerticalOffset;
    QLDisplayBundle *_displayBundle;
    QLDisplayBundle *_newDisplayBundle;
    NSLayoutConstraint *_bundleTopConstraint;
    NSTimer *_progressTimer;
    QLProgressView *_progressView;
    NSString *_loadingTextForMissingFiles;
    BOOL _overlayHidden;
    UIDocumentPasswordView *_documentPasswordView;
    NSLayoutConstraint *_documentPasswordViewKeyboardConstraint;
    QLGenericView *_airPlayPasswordView;
    BOOL _loadedWithPassword;
    BOOL _visible;
    struct CGRect _initialFrame;
    unsigned long long _orbMode;
    NSString *_contentType;
}

@property (readonly) int airPlayMode;
@property (readonly) UIView *airPlayView;
@property CDStruct_0109ef53 clientContext;
@property (strong, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) QLDisplayBundle *displayBundle;
@property id<QLPreviewItemInteractionDelegate> displayBundleDelegate; // @synthesize displayBundleDelegate=_displayBundleDelegate;
@property (readonly) unsigned long long hash;
@property long long index; // @synthesize index=_index;
@property (nonatomic) struct CGRect initialFrame; // @synthesize initialFrame=_initialFrame;
@property (nonatomic) unsigned long long orbMode; // @synthesize orbMode=_orbMode;
@property (strong) id<QLPreviewItem> previewItem;
@property int previewMode;
@property (readonly) UIView *snapshotView;
@property (readonly) Class superclass;
@property (nonatomic) BOOL visible; // @synthesize visible=_visible;

- (void)_cancelScheduledShowProgressiveUI;
- (void)_hidePasswordView;
- (void)_hideProgressiveUI;
- (void)_keyboardVisibilityChanged:(id)arg1;
- (void)_layoutViews;
- (void)_prepareDisplayBundle:(id)arg1 preload:(BOOL)arg2 withHints:(id)arg3;
- (void)_refreshPreviewItem:(BOOL)arg1 withPassword:(id)arg2;
- (void)_removeDisplayBundles;
- (void)_scheduleShowProgressiveUI;
- (void)_showGenericDisplayBundleForPreviewItem:(id)arg1;
- (void)_showPasswordView;
- (void)_showProgressUI;
- (void)_swapDisplayBundles;
- (void)_updateProgressUIWithDuration:(double)arg1;
- (void)_updateTopConstraintWithDuration:(double)arg1;
- (void)beginTrackingViewUpdates;
- (BOOL)canHideOverlay;
- (void)cancelLoadIfNeeded;
- (id)clientProcessAlertViewForPreviewItem:(id)arg1;
- (void)dealloc;
- (void)didBeginEditingPassword:(id)arg1 inView:(id)arg2;
- (void)didEndEditingPassword:(id)arg1 inView:(id)arg2;
- (void)didFinishSwiping;
- (void)discardAirPlayView;
- (void)endTrackingViewUpdates;
- (id)init;
- (void)loadView;
- (void)overlayWasInteractedWithOnPreviewItem:(id)arg1;
- (void)preloadIfNeeded;
- (void)previewItem:(id)arg1 atIndex:(long long)arg2 didFailPresentingWithError:(id)arg3;
- (void)previewItem:(id)arg1 receivedTapOnURL:(id)arg2;
- (void)previewItem:(id)arg1 requiresDisplayBundle:(id)arg2 withHints:(id)arg3;
- (void)previewItem:(id)arg1 setAVState:(id)arg2;
- (void)previewItem:(id)arg1 willEnterFullScreenWithHostedWindow:(id)arg2;
- (void)previewItem:(id)arg1 willHideOverlayWithDuration:(double)arg2;
- (id)previewItem:(id)arg1 willSendRequest:(id)arg2;
- (void)previewItem:(id)arg1 willShowOverlayWithDuration:(double)arg2;
- (void)previewItemDidExitFullScreen:(id)arg1;
- (void)previewItemDidLoad:(id)arg1 atIndex:(long long)arg2 withError:(id)arg3;
- (void)previewItemWillLoad:(id)arg1;
- (void)refreshPreviewItem;
- (void)setAspectRatio:(double)arg1 scaleFactor:(double)arg2;
- (void)setLoadingTextForMissingFiles:(id)arg1;
- (void)setNavigationBarVerticalOffset:(double)arg1;
- (void)setOverlayHidden:(BOOL)arg1 duration:(double)arg2;
- (void)setupAirPlayView;
- (void)showContentsWasTappedForPreviewItem:(id)arg1;
- (void)userDidEnterPassword:(id)arg1 forPasswordView:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidUpdateForPreviewItem:(id)arg1;
- (void)viewWasTappedOnPreviewItem:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)willStartSwiping:(BOOL)arg1;

@end

