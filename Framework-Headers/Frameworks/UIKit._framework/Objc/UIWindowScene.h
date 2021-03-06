//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIScene.h>

#import <UIKitCore/_UIContextBinderContextCreationPolicyHolding-Protocol.h>
#import <UIKitCore/_UIFallbackEnvironment-Protocol.h>
#import <UIKitCore/_UISceneUIWindowHosting-Protocol.h>

@class FBSDisplayConfigurationRequest, FBSScene, NSArray, NSPointerArray, NSString, UIAlertControllerStackManager, UIInputResponderController, UISceneSizeRestrictions, UIScreen, UIScreenshotService, UIStatusBarManager, UITraitCollection, UIWindow, _UIBannerManager, _UICanvasDefinition, _UIContextBinder, _UISystemAppearanceManager;
@protocol UICoordinateSpace, _UIDisplayInfoProviding, _UISceneMetricsCalculating;

@interface UIWindowScene : UIScene <_UIFallbackEnvironment, _UISceneUIWindowHosting, _UIContextBinderContextCreationPolicyHolding>
{
    UIScreen *_screen;
    UITraitCollection *_traitCollection;
    _UIContextBinder *_contextBinder;
    NSPointerArray *_keyWindowHistory;
    BOOL _isPerformingSystemSnapshot;
    id<_UIDisplayInfoProviding> _displayEdgeInfoProvider;
    id<UICoordinateSpace> _coordinateSpace;
    BOOL _shouldDisableTouchCancellationOnRotation;
    BOOL _windowWasInitializedWithDefaultStoryboard;
    BOOL _didMakeKeyAndVisible;
    id<_UISceneMetricsCalculating> _metricsCalculator;
    BOOL __isKeyWindowScene;
    BOOL _excludedFromWindowsMenu;
    long long _screenRequestedOverscanCompensation;
    long long _avkitRequestedOverscanCompensation;
}

@property (readonly, nonatomic) UIAlertControllerStackManager *_alertControllerStackManager;
@property (nonatomic, getter=_avkitRequestedOverscanCompensation, setter=_setAVKitRequestedOverscanCompensation:) long long _avkitRequestedOverscanCompensation; // @synthesize _avkitRequestedOverscanCompensation;
@property (nonatomic, setter=_setBackgroundStyle:) long long _backgroundStyle;
@property (readonly, nonatomic, getter=_bannerManager) _UIBannerManager *_bannerManager;
@property (readonly, nonatomic) BOOL _canReceiveDeviceOrientationEvents;
@property (readonly, nonatomic) _UIContextBinder *_contextBinder;
@property (readonly, nonatomic) id<UICoordinateSpace> _coordinateSpace;
@property (readonly, nonatomic) _UICanvasDefinition *_definition;
@property (strong, nonatomic, getter=_displayConfigurationRequest, setter=_setDisplayConfigurationRequest:) FBSDisplayConfigurationRequest *_displayConfigurationRequest; // @dynamic _displayConfigurationRequest;
@property (readonly, nonatomic) id<_UIDisplayInfoProviding> _displayInfoProvider;
@property (readonly, nonatomic) long long _interfaceOrientation;
@property (nonatomic) BOOL _isKeyWindowScene; // @synthesize _isKeyWindowScene=__isKeyWindowScene;
@property (readonly, nonatomic) BOOL _isPerformingSystemSnapshot; // @synthesize _isPerformingSystemSnapshot;
@property (readonly, nonatomic) UIWindow *_keyWindow;
@property (readonly, nonatomic) struct UIEdgeInsets _peripheryInsets;
@property (readonly, nonatomic) UIScreen *_screen;
@property (nonatomic, getter=_screenRequestedDisplayNativePixelSize, setter=_setScreenRequestedDisplayNativePixelSize:) struct CGSize _screenRequestedDisplayNativePixelSize; // @dynamic _screenRequestedDisplayNativePixelSize;
@property (nonatomic, getter=_screenRequestedOverscanCompensation, setter=_setScreenRequestedOverscanCompensation:) long long _screenRequestedOverscanCompensation; // @synthesize _screenRequestedOverscanCompensation;
@property (readonly, nonatomic) UIStatusBarManager *_statusBarManager;
@property (readonly, nonatomic) _UISystemAppearanceManager *_systemAppearanceManager;
@property (readonly, nonatomic) UITraitCollection *_traitCollection;
@property (readonly, nonatomic) id<UICoordinateSpace> coordinateSpace;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isExcludedFromWindowsMenu) BOOL excludedFromWindowsMenu; // @synthesize excludedFromWindowsMenu=_excludedFromWindowsMenu;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UIInputResponderController *inputResponderController;
@property (readonly, nonatomic) long long interfaceOrientation;
@property (nonatomic, getter=_keepContextAssociationInBackground, setter=_setKeepContextAssociationInBackground:) BOOL keepContextAssociationInBackground;
@property (readonly, nonatomic, getter=isKeyCanvas) BOOL keyCanvas;
@property (readonly, nonatomic, getter=_scene) FBSScene *scene;
@property (readonly, nonatomic) UIScreen *screen;
@property (readonly, nonatomic) UIScreenshotService *screenshotService;
@property (readonly, nonatomic) UISceneSizeRestrictions *sizeRestrictions;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) UIStatusBarManager *statusBarManager;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITraitCollection *traitCollection;
@property (readonly, nonatomic) NSArray *windows;

+ (id)_canvasForScene:(id)arg1;
+ (id)_findNewKeyWindowSceneOnScreen:(id)arg1;
+ (BOOL)_hostsWindows;
+ (id)_keyWindowScene;
+ (id)_keyboardWindowSceneForScreen:(id)arg1 create:(BOOL)arg2;
+ (id)_placeholderWindowSceneForScreen:(id)arg1 create:(BOOL)arg2;
+ (void)_registerComponentClass:(Class)arg1 withKey:(id)arg2 predicate:(id)arg3;
+ (void)_setShouldRestoreKeyWindowSceneOnActivation:(BOOL)arg1;
+ (BOOL)_shouldRestoreKeyWindowSceneOnActivation;
+ (id)_unassociatedWindowSceneForScreen:(id)arg1 create:(BOOL)arg2;
+ (void)_updateVisibleSceneAndWindowOrderWithTest:(CDUnknownBlockType)arg1;
+ (void)initialize;
- (void).cxx_destruct;
- (id)_allWindows;
- (id)_allWindowsIncludingInternalWindows:(BOOL)arg1 onlyVisibleWindows:(BOOL)arg2;
- (void)_applySnapshotSettings:(id)arg1 forActions:(CDUnknownBlockType)arg2;
- (void)_attachWindow:(id)arg1;
- (id)_componentForKey:(id)arg1;
- (void)_computeMetrics:(BOOL)arg1;
- (void)_computeMetricsForWindows:(id)arg1 animated:(BOOL)arg2;
- (unsigned long long)_currentlySupportedInterfaceOrientations;
- (void)_detachWindow:(id)arg1;
- (id)_disableTouchCancellationOnRotation;
- (void)_enumerateWindowsIncludingInternalWindows:(BOOL)arg1 onlyVisibleWindows:(BOOL)arg2 asCopy:(BOOL)arg3 stopped:(BOOL *)arg4 withBlock:(CDUnknownBlockType)arg5;
- (id)_fallbackTraitCollection;
- (id)_fbsSceneLayerForWindow:(id)arg1;
- (id)_inheritingWindowsIncludingInvisible:(BOOL)arg1;
- (void)_invalidate;
- (void)_loadWindowWithStoryboardIfNeeded:(id)arg1;
- (void)_makeKeyAndVisibleIfNeeded;
- (BOOL)_needsMakeKeyAndVisible;
- (void)_noteDisplayIdentityDidChangeWithConfiguration:(id)arg1;
- (BOOL)_permitContextCreationForBindingDescription:(CDStruct_a002d41c)arg1;
- (void)_prepareForResume;
- (void)_prepareForSuspend;
- (void)_readySceneForConnection;
- (void)_recycleAttachmentForWindow:(id)arg1;
- (struct CGRect)_referenceBounds;
- (struct CGRect)_referenceBoundsForOrientation:(long long)arg1;
- (void)_registerComponent:(id)arg1 forKey:(id)arg2;
- (void)_registerSceneActionsHandler:(id)arg1 forKey:(id)arg2;
- (void)_registerSettingsDiffActions:(id)arg1 forKey:(id)arg2;
- (long long)_resolvedOverscanCompensation;
- (struct UIEdgeInsets)_safeAreaInsetsForInterfaceOrientation:(long long)arg1;
- (void)_screenDidChangeFromScreen:(id)arg1 toScreen:(id)arg2;
- (id)_screenshotServiceIfPresent;
- (void)_setAVKitRequestedRefreshRate:(double)arg1 HDRMode:(long long)arg2 overscanCompensation:(long long)arg3;
- (void)_setShouldDisableTouchCancellationOnRotation:(BOOL)arg1;
- (void)_setSystemVolumeHUDEnabled:(BOOL)arg1;
- (void)_setSystemVolumeHUDEnabled:(BOOL)arg1 forAudioCategory:(id)arg2;
- (BOOL)_shouldLoadStoryboard;
- (void)_showProgressWhenFetchingUserActivityForTypes:(id)arg1;
- (double)_systemMinimumMargin;
- (id)_topVisibleWindowPassingTest:(CDUnknownBlockType)arg1;
- (void)_unregisterComponentForKey:(id)arg1;
- (void)_unregisterSceneActionsHandler:(id)arg1;
- (void)_unregisterSettingsDiffActionsForKey:(id)arg1;
- (void)_updateClientSettingsToInterfaceOrientation:(long long)arg1 withAnimationDuration:(double)arg2;
- (void)_updateTraitCollection;
- (void)_updateVisibleWindowOrderWithTest:(CDUnknownBlockType)arg1;
- (id)_visibleWindows;
- (void)_windowDidBecomeKey:(id)arg1;
- (BOOL)_windowIsFront:(id)arg1;
- (id)_windowSceneDelegate;
- (void)_windowUpdatedProperties:(id)arg1;
- (void)_windowUpdatedVisibility:(id)arg1;
- (BOOL)_windowsIgnoreSceneClientOrientation;
- (id)canvasToolbar;
- (id)initWithSession:(id)arg1 connectionOptions:(id)arg2;

@end

