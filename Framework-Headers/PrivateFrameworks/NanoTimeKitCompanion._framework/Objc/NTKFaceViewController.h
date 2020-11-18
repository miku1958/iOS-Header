//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <NanoTimeKitCompanion/CLKSensitiveUIStateObserver-Protocol.h>
#import <NanoTimeKitCompanion/NTKClockHardwareInput-Protocol.h>
#import <NanoTimeKitCompanion/NTKClockIconZoomAnimator-Protocol.h>
#import <NanoTimeKitCompanion/NTKComplicationPickerViewDataSource-Protocol.h>
#import <NanoTimeKitCompanion/NTKFaceObserver-Protocol.h>
#import <NanoTimeKitCompanion/NTKFaceViewDelegate-Protocol.h>

@class NSCache, NSDate, NSMutableDictionary, NSObject, NSString, NTKComplicationController, NTKComplicationDisplayWrapperView, NTKDelayedBlock, NTKFace, NTKFaceEditView, NTKFaceView, NTKTritiumAnimationController, NTKTritiumViewController, UIView;
@protocol NTKClockStatusBarViewController, NTKFaceViewControllerDelegate, NTKFaceViewControllerStatusBarDelegate, OS_dispatch_source;

@interface NTKFaceViewController : UIViewController <NTKComplicationPickerViewDataSource, CLKSensitiveUIStateObserver, NTKClockIconZoomAnimator, NTKClockHardwareInput, NTKFaceViewDelegate, NTKFaceObserver>
{
    struct os_unfair_lock_s _normalComplicationControllersLock;
    NSMutableDictionary *_normalComplicationControllers;
    struct os_unfair_lock_s _detachedComplicationControllersLock;
    NSMutableDictionary *_detachedComplicationControllers;
    NTKFaceEditView *_editView;
    BOOL _editingComplications;
    NSCache *_appearanceVariantsCache;
    NSCache *_informationVariantsCache;
    BOOL _frozen;
    BOOL _becomeLiveOnUnfreeze;
    NTKDelayedBlock *_delayedFreezeBlock;
    BOOL _readyToApplyConfiguration;
    BOOL _animatingVariant;
    BOOL _newValueWhileAnimating;
    unsigned long long _delayedAnimationValue;
    BOOL _deviceLocked;
    BOOL _sensitiveUIHidden;
    UIView *_zoomingIconCircleView;
    UIView *_zoomingIconTimeView;
    UIView *_zoomingContainerView;
    double _zoomingDiagonalLength;
    NSDate *_scrubDate;
    NSObject<OS_dispatch_source> *_time_travel_update_timer;
    NTKComplicationDisplayWrapperView *_pptComplicationDisplay;
    NTKComplicationController *_pptComplicationController;
    BOOL _wantsRemoveUnadorned;
    BOOL _hasGoneLive;
    BOOL _hasUsedUnadornedSnapshot;
    BOOL _hasRemovedUnadornedSnapshot;
    NSString *_lastTappedSlotIdentifier;
    struct CGRect _faceLaunchRect;
    BOOL _isOrbDisabled;
    BOOL _shouldShowSnapshot;
    BOOL _supressesNonSnapshotUI;
    BOOL _shouldUseSampleTemplate;
    BOOL _showsCanonicalContent;
    BOOL _showContentForUnadornedSnapshot;
    BOOL _ignoreSnapshotImages;
    BOOL _showsLockedUI;
    id<NTKFaceViewControllerDelegate> _delegate;
    id<NTKFaceViewControllerStatusBarDelegate> _statusBarDelegate;
    long long _dataMode;
    NSDate *_pauseDate;
    UIViewController<NTKClockStatusBarViewController> *_statusBarViewController;
    NTKFace *_face;
    NTKFaceView *_faceView;
    NTKTritiumAnimationController *_tritiumAnimationController;
    NTKTritiumViewController *_tritiumViewController;
}

@property (nonatomic) long long dataMode; // @synthesize dataMode=_dataMode;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<NTKFaceViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NTKFace *face; // @synthesize face=_face;
@property (readonly, nonatomic) NTKFaceView *faceView; // @synthesize faceView=_faceView;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL ignoreSnapshotImages; // @synthesize ignoreSnapshotImages=_ignoreSnapshotImages;
@property (readonly, nonatomic) BOOL isOrbDisabled; // @synthesize isOrbDisabled=_isOrbDisabled;
@property (strong, nonatomic) NSDate *pauseDate; // @synthesize pauseDate=_pauseDate;
@property (nonatomic) BOOL shouldShowSnapshot; // @synthesize shouldShowSnapshot=_shouldShowSnapshot;
@property (nonatomic) BOOL shouldUseSampleTemplate; // @synthesize shouldUseSampleTemplate=_shouldUseSampleTemplate;
@property (nonatomic) BOOL showContentForUnadornedSnapshot; // @synthesize showContentForUnadornedSnapshot=_showContentForUnadornedSnapshot;
@property (nonatomic) BOOL showsCanonicalContent; // @synthesize showsCanonicalContent=_showsCanonicalContent;
@property (nonatomic) BOOL showsLockedUI; // @synthesize showsLockedUI=_showsLockedUI;
@property (weak, nonatomic) id<NTKFaceViewControllerStatusBarDelegate> statusBarDelegate; // @synthesize statusBarDelegate=_statusBarDelegate;
@property (strong, nonatomic) UIViewController<NTKClockStatusBarViewController> *statusBarViewController; // @synthesize statusBarViewController=_statusBarViewController;
@property (readonly) Class superclass;
@property (nonatomic) BOOL supressesNonSnapshotUI; // @synthesize supressesNonSnapshotUI=_supressesNonSnapshotUI;
@property (readonly, nonatomic) NTKTritiumAnimationController *tritiumAnimationController; // @synthesize tritiumAnimationController=_tritiumAnimationController;
@property (readonly, nonatomic) NTKTritiumViewController *tritiumViewController; // @synthesize tritiumViewController=_tritiumViewController;

+ (id)_controllerForComplication:(id)arg1 face:(id)arg2 slot:(id)arg3;
+ (id)_createNormalDisplayForComplicationController:(id)arg1 slot:(id)arg2 face:(id)arg3 faceView:(id)arg4;
+ (void)initialize;
- (void).cxx_destruct;
- (void)PPTCleanupLastComplication;
- (void)PPTCreateComplication:(id)arg1 forSlot:(id)arg2 synchronously:(BOOL)arg3;
- (id)PPTDescriptionForComplication:(id)arg1;
- (void)PPTPrepareComplicationTest;
- (id)PPTUniqueComplicationsToSlotForCurrentFace;
- (void)_applyConfigurationWithDuration:(double)arg1;
- (void)_clearFaceLaunchRect;
- (void)_clearLastTappedComplication;
- (void)_configureBackgroundFillAlpha:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (id)_dailySnapshot;
- (void)_defaultCleanupAfterZoom;
- (void)_defaultPrepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3;
- (void)_defaultSetZoomFraction:(double)arg1 iconDiameter:(double)arg2;
- (void)_ensureComplication:(id)arg1 forSlot:(id)arg2;
- (void)_ensureDetachedComplication:(id)arg1;
- (void)_ensureNormalComplication:(id)arg1 forSlot:(id)arg2;
- (void)_ensureNotLive;
- (void)_ensurePauseDate;
- (void)_faceSnapshotDidChange:(id)arg1;
- (void)_handleDeviceLockChange;
- (BOOL)_handlePhysicalButton:(unsigned long long)arg1 event:(unsigned long long)arg2;
- (void)_handleStatusBarChange;
- (void)_insertDetachedComplicationDisplay:(id)arg1 controller:(id)arg2 forSlot:(id)arg3;
- (void)_insertNormalComplicationDisplay:(id)arg1 controller:(id)arg2 forSlot:(id)arg3;
- (BOOL)_isCollectionPickerViewEnabled;
- (void)_loadInitialComplicationVisibilityFromFace;
- (id)_newNormalDisplayForComplicationController:(id)arg1 slot:(id)arg2;
- (void)_removeComplicationForSlot:(id)arg1;
- (void)_removeDetachedComplicationForSlot:(id)arg1 andDisconnectDisplay:(BOOL)arg2;
- (void)_removeNormalComplicationForSlot:(id)arg1 andDisconnectDisplay:(BOOL)arg2;
- (id)_selectedVisibleSlotForEditMode:(long long)arg1;
- (void)_setDataMode:(long long)arg1 becomeLiveOnUnfreeze:(BOOL)arg2;
- (void)_setFaceViewResourceDirectoryFromFace;
- (BOOL)_shouldHideFaceUI;
- (void)_showStatusBarAfterWake;
- (void)_simplifiedCleanupAfterZoom;
- (void)_simplifiedSetZoomFraction:(double)arg1 iconDiameter:(double)arg2;
- (id)_unadornedSnapshot;
- (void)_updateInteractivityOfComplicationDisplays;
- (BOOL)_wheelChangedWithEvent:(id)arg1;
- (void)_wrapperViewTapped:(id)arg1;
- (BOOL)becomeFirstResponder;
- (id)blurSourceImage;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canStopEditing;
- (void)cleanupAfterOrb:(BOOL)arg1;
- (void)cleanupAfterZoom;
- (void)complicationPickerView:(id)arg1 getDisplay:(id *)arg2 controller:(id *)arg3 forComplication:(id)arg4;
- (id)complicationPickerView:(id)arg1 layoutRuleForComplicationDisplay:(id)arg2;
- (void)configureWithDuration:(double)arg1 block:(CDUnknownBlockType)arg2;
- (id)currentOrderedClockComplicationCounts;
- (id)customEditOptionContainerViewForComplicationPickerView:(id)arg1;
- (BOOL)dailySnapshotShowsComplication:(id)arg1 forSlot:(id)arg2;
- (void)dealloc;
- (void)disableSlowMode;
- (void)enableSlowMode;
- (void)enumerateComplicationControllersAndDisplaysWithBlock:(CDUnknownBlockType)arg1;
- (void)face:(id)arg1 didChangeOptionsForEditMode:(long long)arg2;
- (void)faceConfigurationDidChange:(id)arg1;
- (void)faceConfigurationsDidChangeInTritiumViewController:(id)arg1;
- (void)faceResourceDirectoryDidChange:(id)arg1;
- (BOOL)faceView:(id)arg1 wantsToDismissPresentedViewControllerAnimated:(BOOL)arg2;
- (id)faceViewAllVisibleComplicationsForCurrentConfiguration;
- (id)faceViewComplicationAppIdentifierForSlot:(id)arg1;
- (id)faceViewComplicationForSlot:(id)arg1;
- (BOOL)faceViewComplicationIsEmptyForSlot:(id)arg1;
- (id)faceViewComplicationSlots;
- (id)faceViewComplicationSlotsHiddenByEditOption:(id)arg1;
- (void)faceViewDidChangePaddingForStatusBar;
- (void)faceViewDidChangeWantsStatusBarIconShadow;
- (void)faceViewDidHideOrShowComplicationSlot;
- (void)faceViewDidReloadSnapshotContentViews;
- (id)faceViewDidRequestCustomDataForKey:(id)arg1;
- (void)faceViewDidScrubToDate:(id)arg1 forced:(BOOL)arg2;
- (void)faceViewDidUpdateCustomData:(id)arg1 forKey:(id)arg2;
- (id)faceViewEditOptionThatHidesAllComplications;
- (void)faceViewRequestedLaunchFromRect:(struct CGRect)arg1;
- (BOOL)faceViewShouldIgnoreSnapshotImages;
- (void)faceViewUpdatedResourceDirectory:(id)arg1 wantsToTransferOwnership:(BOOL)arg2;
- (void)faceViewWantsComplicationKeylineFramesReloaded;
- (void)faceViewWantsCustomKeylineFramesReloadedForEditMode:(long long)arg1;
- (void)faceViewWantsStatusBarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)faceViewWantsToPresentViewController:(id)arg1;
- (void)faceViewWantsUnadornedSnapshotViewRemoved;
- (void)faceViewWillEnterTimeTravel;
- (void)faceViewWillExitTimeTravel;
- (void)faceViewWillUnloadSnapshotContentViews;
- (void)finalizeForSnapshotting:(CDUnknownBlockType)arg1;
- (void)freeze;
- (void)freezeAfterDelay:(double)arg1;
- (void)getComplicationController:(id *)arg1 andDisplay:(id *)arg2 forSlot:(id)arg3;
- (void)handleOrdinaryScreenWake;
- (void)handleScreenBlanked;
- (void)handleWristRaiseScreenWake;
- (void)hideFaceEditingUIAnimated:(BOOL)arg1;
- (void)hideFaceEditingUIAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithFace:(id)arg1 configuration:(CDUnknownBlockType)arg2;
- (void)invalidateFramesInTritiumViewController:(id)arg1 withReason:(id)arg2;
- (struct CGRect)launchRectForComplicationApplicationIdentifier:(id)arg1;
- (void)loadView;
- (void)performComplicationBackgroundDataRefresh;
- (void)performWristRaiseAnimation;
- (void)prepareForOrb;
- (void)prepareForSnapshotting;
- (void)prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3;
- (void)prepareWristRaiseAnimation;
- (id)removeStatusBarViewController;
- (void)sensitiveUIStateChanged;
- (void)setZoomFraction:(double)arg1 iconDiameter:(double)arg2;
- (BOOL)shouldLoadLiveFaceAtNextScreenOff;
- (void)showEditingUIAnimated:(BOOL)arg1;
- (void)statusBarDidChange;
- (void)traitCollectionDidChange:(id)arg1;
- (void)unfreeze;
- (void)viewDidLayoutSubviews;

@end
