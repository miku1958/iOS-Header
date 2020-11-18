//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UICoordinateSpace-Protocol.h>
#import <UIKit/UIFocusContainer-Protocol.h>
#import <UIKit/UITraitEnvironment-Protocol.h>
#import <UIKit/_UIFocusEnvironmentInternal-Protocol.h>
#import <UIKit/_UIFocusEnvironmentPrivate-Protocol.h>
#import <UIKit/_UIFocusRegionContainer-Protocol.h>
#import <UIKit/_UITraitEnvironmentInternal-Protocol.h>

@class CADisplay, FBSDisplay, NSArray, NSDictionary, NSMutableArray, NSString, UIScreenMode, UISoftwareDimmingWindow, UITraitCollection, UIView, UIWindow, _UIScreenFixedCoordinateSpace, _UIScreenFocusSystem;
@protocol UICoordinateSpace, UIFocusContainer, UIFocusEnvironment, UIFocusItem, _UIFocusRegionContainer;

@interface UIScreen : NSObject <UICoordinateSpace, _UITraitEnvironmentInternal, _UIFocusEnvironmentInternal, _UIFocusRegionContainer, UIFocusContainer, _UIFocusEnvironmentPrivate, UITraitEnvironment>
{
    CADisplay *_display;
    struct CGRect _bounds;
    struct CGRect _unjailedReferenceBounds;
    struct CGRect _referenceBounds;
    struct CGRect _mainSceneReferenceBounds;
    long long _interfaceOrientation;
    double _scale;
    long long _gamut;
    double _touchScaleFactor;
    long long _userInterfaceIdiom;
    NSDictionary *_capabilities;
    UIWindow *_screenDisablingWindow;
    double _startedPausingWindows;
    NSMutableArray *_pausedWindows;
    NSArray *_availableDisplayModes;
    double _pointsPerInch;
    _UIScreenFixedCoordinateSpace *_fixedCoordinateSpace;
    UITraitCollection *_contentSizeCategoryTraits;
    struct {
        unsigned int bitsPerComponent:4;
        unsigned int initialized:1;
        unsigned int connected:1;
        unsigned int overscanCompensation:2;
        unsigned int screenUpdatesDisabled:1;
        unsigned int wantsWideContentMargins:1;
        unsigned int queriedDeviceContentMargins:1;
        unsigned int hasCalculatedPointsPerInch:1;
        unsigned int screenCreatedFBSDisplay:1;
        unsigned int rightHandDrive:1;
    } _screenFlags;
    BOOL _performingSystemSnapshot;
    BOOL _wantsSoftwareDimming;
    float _lastNotifiedBacklightLevel;
    UITraitCollection *_defaultTraitCollection;
    UITraitCollection *_overrideTraitCollection;
    UITraitCollection *_lastNotifiedTraitCollection;
    FBSDisplay *_fbsDisplay;
    UISoftwareDimmingWindow *_softwareDimmingWindow;
    _UIScreenFocusSystem *_focusSystem;
    UIWindow<UIFocusEnvironment> *__focusedWindow;
}

@property (nonatomic, setter=_setFocusedWindow:) UIWindow<UIFocusEnvironment> *_focusedWindow; // @synthesize _focusedWindow=__focusedWindow;
@property (nonatomic, setter=_setLastNotifiedBacklightLevel:) float _lastNotifiedBacklightLevel; // @synthesize _lastNotifiedBacklightLevel;
@property (nonatomic, getter=_isPerformingSystemSnapshot, setter=_setPerformingSystemSnapshot:) BOOL _performingSystemSnapshot; // @synthesize _performingSystemSnapshot;
@property (readonly, nonatomic) UIWindow *_preferredFocusedWindow;
@property (readonly, nonatomic) struct CGRect _referenceBounds; // @synthesize _referenceBounds;
@property (strong, nonatomic, setter=_setSoftwareDimmingWindow:) UISoftwareDimmingWindow *_softwareDimmingWindow; // @synthesize _softwareDimmingWindow;
@property (readonly, nonatomic) struct CGRect applicationFrame;
@property (readonly, copy, nonatomic) NSArray *availableModes;
@property (readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property (nonatomic) double brightness;
@property (readonly) id<UICoordinateSpace> coordinateSpace;
@property (strong, nonatomic) UIScreenMode *currentMode;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic, getter=_defaultTraitCollection, setter=_setDefaultTraitCollection:) UITraitCollection *defaultTraitCollection; // @synthesize defaultTraitCollection=_defaultTraitCollection;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) FBSDisplay *fbsDisplay; // @synthesize fbsDisplay=_fbsDisplay;
@property (readonly) id<UICoordinateSpace> fixedCoordinateSpace;
@property (readonly, nonatomic, getter=_focusSystem) _UIScreenFocusSystem *focusSystem; // @synthesize focusSystem=_focusSystem;
@property (readonly, weak, nonatomic) id<UIFocusItem> focusedItem;
@property (readonly, weak, nonatomic, getter=_focusedItemRegionContainer) id<_UIFocusRegionContainer> focusedItemRegionContainer;
@property (readonly, weak, nonatomic) UIView *focusedView;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic, getter=_lastNotifiedTraitCollection, setter=_setLastNotifiedTraitCollection:) UITraitCollection *lastNotifiedTraitCollection; // @synthesize lastNotifiedTraitCollection=_lastNotifiedTraitCollection;
@property (readonly, copy, nonatomic, getter=_linearFocusMovementSequences) NSArray *linearFocusMovementSequences;
@property (readonly, nonatomic) UIScreen *mirroredScreen;
@property (readonly, nonatomic) struct CGRect nativeBounds;
@property (readonly, nonatomic) double nativeScale;
@property (strong, nonatomic, getter=_overrideTraitCollection, setter=_setOverrideTraitCollection:) UITraitCollection *overrideTraitCollection; // @synthesize overrideTraitCollection=_overrideTraitCollection;
@property (nonatomic) long long overscanCompensation;
@property (readonly, nonatomic) struct UIEdgeInsets overscanCompensationInsets;
@property (readonly, weak, nonatomic, getter=_parentFocusEnvironment) id<UIFocusEnvironment> parentFocusEnvironment;
@property (readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property (readonly, nonatomic, getter=_preferredFocusMovementStyle) long long preferredFocusMovementStyle;
@property (readonly, nonatomic) id<UIFocusContainer> preferredFocusedItem;
@property (readonly, weak, nonatomic) UIView *preferredFocusedView;
@property (readonly, nonatomic) UIScreenMode *preferredMode;
@property (readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsFocus;
@property (readonly, nonatomic) UITraitCollection *traitCollection;
@property (nonatomic) BOOL wantsSoftwareDimming; // @synthesize wantsSoftwareDimming=_wantsSoftwareDimming;

+ (void)_FBSDisplayDidPossiblyConnect:(id)arg1;
+ (void)_FBSDisplayDidPossiblyConnect:(id)arg1 withScene:(id)arg2;
+ (void)_FBSDisplayDidPossiblyConnect:(id)arg1 withScene:(id)arg2 andPost:(BOOL)arg3;
+ (void)_FBSDisplayDidPossiblyDisconnect:(id)arg1;
+ (void)_FBSDisplayDidPossiblyDisconnect:(id)arg1 forSceneDestruction:(id)arg2;
+ (id)__availableScenes;
+ (id)__connectedFBSDisplays;
+ (id)__createPlugInScreenForFBSDisplay:(id)arg1;
+ (id)__sceneTrackingQueue;
+ (void)_beginDisableScreenUpdatesForSnapshot;
+ (void)_beginDisableScreenUpdatesForSnapshotUsingSnapshotCover:(BOOL)arg1;
+ (id)_carScreen;
+ (void)_endDisableScreenUpdates;
+ (void)_enumerateScreensWithBlock:(CDUnknownBlockType)arg1;
+ (void)_prepareCarScreensForResume;
+ (void)_prepareScreensForAppResume;
+ (id)_screenForScene:(id)arg1;
+ (id)_screenWithDisplayID:(id)arg1;
+ (id)_screenWithDisplayName:(id)arg1;
+ (id)_screenWithIntegerDisplayID:(unsigned int)arg1;
+ (BOOL)_shouldDisableJail;
+ (id)_workspaceCapableScreens;
+ (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromView:(id)arg2;
+ (struct CGPoint)convertPoint:(struct CGPoint)arg1 toView:(id)arg2;
+ (struct CGRect)convertRect:(struct CGRect)arg1 fromView:(id)arg2;
+ (struct CGRect)convertRect:(struct CGRect)arg1 toView:(id)arg2;
+ (void)initialize;
+ (id)mainScreen;
+ (id)screens;
+ (struct CGAffineTransform)transformForScreenOriginRotation:(double)arg1;
+ (struct CGAffineTransform)transformToRotateScreen:(double)arg1;
- (void).cxx_destruct;
- (void)_accessibilityForceTouchEnabledChanged:(id)arg1;
- (struct CGRect)_applicationFrame;
- (struct CGRect)_applicationFrameForInterfaceOrientation:(long long)arg1;
- (struct CGRect)_applicationFrameForInterfaceOrientation:(long long)arg1 usingStatusbarHeight:(double)arg2;
- (struct CGRect)_applicationFrameForInterfaceOrientation:(long long)arg1 usingStatusbarHeight:(double)arg2 ignoreStatusBar:(BOOL)arg3;
- (struct CGRect)_applicationFrameWithoutOverscanForInterfaceOrientation:(long long)arg1 usingStatusbarHeight:(double)arg2 ignoreStatusBar:(BOOL)arg3;
- (BOOL)_areListsLimited;
- (BOOL)_areMusicListsLimited;
- (void)_beginObservingBacklightLevelNotifications;
- (struct CGRect)_boundsForInterfaceOrientation:(long long)arg1;
- (id)_capabilities;
- (id)_capabilityForKey:(id)arg1;
- (void)_computeMetrics;
- (void)_computeMetrics:(BOOL)arg1;
- (void)_connectScreen;
- (id)_defaultTraitCollectionForInterfaceOrientation:(long long)arg1;
- (id)_defaultTraitCollectionForInterfaceOrientation:(long long)arg1 inBounds:(struct CGRect)arg2;
- (void)_disableScreenUpdates:(BOOL)arg1;
- (void)_disconnectScreen;
- (id)_display;
- (id)_displayID;
- (long long)_effectiveUserInterfaceStyle;
- (void)_enableScreenUpdates;
- (void)_endObservingBacklightLevelNotifications;
- (void)_ensureConnectedIfPossible;
- (void)_enumerateWindowsWithBlock:(CDUnknownBlockType)arg1;
- (void)_focusEnvironmentWillDisappear:(id)arg1;
- (id)_focusedItem;
- (long long)_forceTouchCapability;
- (void)_handleEffectiveUserInterfaceStyleChanged:(id)arg1;
- (void)_handleForcedUserInterfaceLayoutDirectionChanged:(id)arg1;
- (BOOL)_hasStatusBar;
- (BOOL)_hasWindows;
- (long long)_imageOrientation;
- (unsigned int)_integerDisplayID;
- (long long)_interfaceOrientation;
- (struct CGRect)_interfaceOrientedMainSceneBounds;
- (BOOL)_isCarScreen;
- (BOOL)_isExternal;
- (BOOL)_isMainScreen;
- (BOOL)_isOverscanned;
- (BOOL)_isRightHandDrive;
- (BOOL)_isRotatable;
- (BOOL)_isUIElementLimited:(CDUnknownBlockType)arg1;
- (BOOL)_isValidInterfaceOrientation:(long long)arg1;
- (BOOL)_isWorkspaceCapable;
- (id)_launchImageTraitCollectionForInterfaceOrientation:(long long)arg1 inBounds:(struct CGRect)arg2;
- (id)_lazySoftwareDimmingWindow;
- (struct CGRect)_mainSceneBoundsForInterfaceOrientation:(long long)arg1;
- (struct CGRect)_mainSceneFrame;
- (struct CGRect)_mainSceneReferenceBounds;
- (struct CGRect)_mainSceneReferenceBoundsForSettings:(id)arg1;
- (id)_name;
- (struct CGRect)_nativeDisplayBounds;
- (void)_noteSceneOrientationUpdate:(long long)arg1;
- (void)_notifyOrientationWillChangeAndPropagateToAllWindows;
- (void)_notifyOrientationWillChangeAndPropagateToAllWindows:(BOOL)arg1;
- (void)_notifySceneBoundsChanged:(BOOL)arg1;
- (void)_notifyTraitsChangedAndPropagateToAllWindows;
- (BOOL)_orientedMainSceneReferenceBoundsEqualDestinationBounds:(struct CGRect)arg1 interfaceOrientation:(long long)arg2;
- (struct CGRect)_overrideReferenceBounds;
- (BOOL)_overscanAdjustmentNeedsUpdate;
- (double)_pointsPerInch;
- (void)_postBrightnessDidChangeNotificationIfAppropriate;
- (void)_prepareForWindow;
- (double)_refreshRate;
- (BOOL)_requestFocusUpdateToEnvironment:(id)arg1;
- (double)_rotation;
- (double)_scale;
- (void)_searchForFocusRegionsInContext:(id)arg1;
- (unsigned int)_seed;
- (void)_setCapability:(id)arg1 forKey:(id)arg2;
- (void)_setDefaultTraitCollection:(id)arg1 notify:(BOOL)arg2;
- (void)_setExternalDeviceShouldInputText:(BOOL)arg1;
- (void)_setInterfaceOrientation:(long long)arg1;
- (void)_setInterfaceOrientation:(long long)arg1 animated:(BOOL)arg2;
- (void)_setInterfaceOrientation:(long long)arg1 computeMetrics:(BOOL)arg2 animated:(BOOL)arg3;
- (void)_setMainSceneReferenceBounds:(struct CGRect)arg1;
- (void)_setMainSceneReferenceBounds:(struct CGRect)arg1 computingMetricsIfNecessary:(BOOL)arg2;
- (void)_setMainSceneReferenceBounds:(struct CGRect)arg1 computingMetricsIfNecessary:(BOOL)arg2 notify:(BOOL)arg3;
- (void)_setNeedsNonDeferredFocusUpdate;
- (void)_setScale:(double)arg1;
- (void)_setSpeed:(double)arg1 forWindow:(id)arg2;
- (void)_setUserInterfaceIdiom:(long long)arg1;
- (BOOL)_shouldSearchForFocusRegionsInContext:(id)arg1;
- (id)_snapshotExcludingWindows:(id)arg1 withRect:(struct CGRect)arg2;
- (BOOL)_supportsBrightness;
- (BOOL)_supportsDeferredFocus;
- (double)_touchRadiusScaleFactor;
- (double)_touchScaleFactor;
- (id)_traitCollectionForChildEnvironment:(id)arg1;
- (struct CGRect)_unjailedReferenceBounds;
- (struct CGRect)_unjailedReferenceBoundsForInterfaceOrientation:(long long)arg1;
- (struct CGRect)_unjailedReferenceBoundsInPixels;
- (void)_updateAvailableDisplayModes;
- (void)_updateCapabilities;
- (void)_updateFocusIfNeeded;
- (void)_updateOverscanCompensationAllowingBackgroundUpdate:(BOOL)arg1;
- (void)_updateReferenceBoundsToSceneReferenceBounds:(struct CGRect)arg1 fromInterfaceOrientation:(long long)arg2 animated:(BOOL)arg3;
- (void)_updateTraits;
- (void)_updateUserInterfaceIdiom;
- (void)_updateWithMainSceneSettings:(id)arg1 animated:(BOOL)arg2;
- (long long)_userInterfaceIdiom;
- (BOOL)_wantsWideContentMargins;
- (void)_willTransitionToTraitCollection:(id)arg1;
- (long long)_workspaceCapableScreenType;
- (int)bitsPerComponent;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromCoordinateSpace:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toCoordinateSpace:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromCoordinateSpace:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toCoordinateSpace:(id)arg2;
- (void)dealloc;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)displayLinkWithTarget:(id)arg1 selector:(SEL)arg2;
- (void)focusedViewDidChange;
- (void)focusedViewWillChange;
- (long long)gamut;
- (id)initWithDisplay:(id)arg1;
- (BOOL)isAncestorOfItem:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (float)rawBrightnessForBacklightLevel:(float)arg1;
- (int)screenType;
- (void)setBitsPerComponent:(int)arg1;
- (void)setFocusEnabled:(BOOL)arg1;
- (void)setNeedsFocusUpdate;
- (void)setNeedsPreferredFocusedItemUpdate;
- (BOOL)shouldChangeFocusedItem:(id)arg1;
- (BOOL)shouldChangeFocusedItem:(id)arg1 heading:(unsigned long long)arg2;
- (BOOL)shouldUpdateFocusFromView:(id)arg1 toView:(id)arg2 heading:(unsigned long long)arg3;
- (BOOL)shouldUpdateFocusInContext:(id)arg1;
- (id)snapshot;
- (id)snapshotView;
- (id)snapshotViewAfterScreenUpdates:(BOOL)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateFocusIfNeeded;
- (void)updatePreferredFocusedItemIfNeeded;

@end

