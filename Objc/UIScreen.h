//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UICoordinateSpace-Protocol.h>
#import <UIKitCore/UIFocusItemContainer-Protocol.h>
#import <UIKitCore/UITraitEnvironment-Protocol.h>
#import <UIKitCore/_UIFallbackEnvironment-Protocol.h>
#import <UIKitCore/_UIFocusEnvironmentInternal-Protocol.h>
#import <UIKitCore/_UIFocusEnvironmentPrivate-Protocol.h>
#import <UIKitCore/_UIFocusRegionContainer-Protocol.h>
#import <UIKitCore/_UITraitEnvironmentInternal-Protocol.h>

@class CARSessionStatus, FBSDisplayConfiguration, NSArray, NSDictionary, NSString, UIFocusSystem, UISDisplayContext, UIScreenMode, UISoftwareDimmingWindow, UITraitCollection, UIView, UIWindow, _UIDragManager, _UIFocusMovementPerformer, _UIFocusScrollManager, _UIInteractiveHighlightEnvironment, _UIScreenBoundingPathUtilities, _UIScreenFixedCoordinateSpace, _UIScreenFocusSystemManager;
@protocol UICoordinateSpace, UIFocusEnvironment, UIFocusItem, UIFocusItemContainer, _UIDisplayInfoProviding, _UIFocusRegionContainer;

@interface UIScreen : NSObject <_UIFallbackEnvironment, UICoordinateSpace, _UITraitEnvironmentInternal, _UIFocusEnvironmentInternal, _UIFocusRegionContainer, UIFocusItemContainer, _UIFocusEnvironmentPrivate, UITraitEnvironment>
{
    struct CGRect _unjailedReferenceBounds;
    struct CGRect _referenceBounds;
    long long _interfaceOrientation;
    double _scale;
    long long _gamut;
    long long _userInterfaceIdiom;
    UISDisplayContext *_initialDisplayContext;
    NSDictionary *_capabilities;
    NSArray *_availableDisplayModes;
    double _pointsPerInch;
    _UIScreenFixedCoordinateSpace *_fixedCoordinateSpace;
    id<_UIDisplayInfoProviding> _displayInfoProvider;
    FBSDisplayConfiguration *__displayConfiguration;
    CARSessionStatus *_currentCarSessionStatus;
    long long _lastUpdatedCanvasUserInterfaceStyle;
    struct {
        unsigned int bitsPerComponent:4;
        unsigned int initialized:1;
        unsigned int connected:1;
        unsigned int hasSetOverscanCompensation:1;
        unsigned int overscanCompensation:2;
        unsigned int wantsWideContentMargins:1;
        unsigned int queriedDeviceContentMargins:1;
        unsigned int hasCalculatedPointsPerInch:1;
        unsigned int rightHandDrive:1;
        unsigned int carPlayNightModeEnabled:1;
    } _screenFlags;
    struct {
        unsigned int isKnown:1;
        unsigned int isSupported:1;
        unsigned int isInRange:1;
    } _carPlayHumanPresenceStatus;
    BOOL _performingSystemSnapshot;
    BOOL _wantsSoftwareDimming;
    BOOL _captured;
    BOOL __UIIBAlwaysProvidePeripheryInsets;
    BOOL _mainScreen;
    float _lastNotifiedBacklightLevel;
    UITraitCollection *_defaultTraitCollection;
    UITraitCollection *_overrideTraitCollection;
    UITraitCollection *_lastNotifiedTraitCollection;
    UISoftwareDimmingWindow *_softwareDimmingWindow;
    _UIFocusScrollManager *_focusScrollManager;
    _UIFocusMovementPerformer *_focusMovementPerformer;
    _UIScreenFocusSystemManager *_focusSystemManager;
    UIFocusSystem *_focusSystem;
    _UIDragManager *_dragManager;
    _UIInteractiveHighlightEnvironment *_interactiveHighlightEnvironment;
    _UIScreenBoundingPathUtilities *_boundingPathUtilities;
    UIWindow<UIFocusEnvironment> *__focusedWindow;
}

@property (nonatomic, setter=_setUIIBAlwaysProvidePeripheryInsets:) BOOL _UIIBAlwaysProvidePeripheryInsets; // @synthesize _UIIBAlwaysProvidePeripheryInsets=__UIIBAlwaysProvidePeripheryInsets;
@property (nonatomic, setter=_setFocusedWindow:) UIWindow<UIFocusEnvironment> *_focusedWindow; // @synthesize _focusedWindow=__focusedWindow;
@property (nonatomic, setter=_setLastNotifiedBacklightLevel:) float _lastNotifiedBacklightLevel; // @synthesize _lastNotifiedBacklightLevel;
@property (nonatomic, getter=_isPerformingSystemSnapshot, setter=_setPerformingSystemSnapshot:) BOOL _performingSystemSnapshot; // @synthesize _performingSystemSnapshot;
@property (readonly, nonatomic) UIWindow *_preferredFocusedWindow;
@property (readonly, nonatomic) struct CGRect _referenceBounds; // @synthesize _referenceBounds;
@property (strong, nonatomic, setter=_setSoftwareDimmingWindow:) UISoftwareDimmingWindow *_softwareDimmingWindow; // @synthesize _softwareDimmingWindow;
@property (readonly, nonatomic) struct CGRect applicationFrame;
@property (nonatomic) BOOL areChildrenFocused;
@property (readonly, copy, nonatomic) NSArray *availableModes;
@property (strong, nonatomic, getter=_boundingPathUtilities, setter=_setBoundingPathUtilities:) _UIScreenBoundingPathUtilities *boundingPathUtilities; // @synthesize boundingPathUtilities=_boundingPathUtilities;
@property (readonly, nonatomic) struct CGRect bounds;
@property (nonatomic) double brightness;
@property (readonly, nonatomic) double calibratedLatency;
@property (nonatomic, getter=isCaptured, setter=_setCaptured:) BOOL captured; // @synthesize captured=_captured;
@property (readonly) id<UICoordinateSpace> coordinateSpace;
@property (strong, nonatomic) UIScreenMode *currentMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic, getter=_defaultTraitCollection, setter=_setDefaultTraitCollection:) UITraitCollection *defaultTraitCollection; // @synthesize defaultTraitCollection=_defaultTraitCollection;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property (readonly, nonatomic, getter=_dragManager) _UIDragManager *dragManager; // @synthesize dragManager=_dragManager;
@property (readonly, nonatomic, getter=_isEligibleForFocusInteraction) BOOL eligibleForFocusInteraction;
@property (readonly) id<UICoordinateSpace> fixedCoordinateSpace;
@property (readonly, nonatomic) id<UIFocusItemContainer> focusItemContainer;
@property (readonly, weak, nonatomic, getter=_focusMapContainer) id<_UIFocusRegionContainer> focusMapContainer;
@property (readonly, nonatomic, getter=_focusMovementPerformer) _UIFocusMovementPerformer *focusMovementPerformer; // @synthesize focusMovementPerformer=_focusMovementPerformer;
@property (readonly, nonatomic, getter=_focusScrollManager) _UIFocusScrollManager *focusScrollManager; // @synthesize focusScrollManager=_focusScrollManager;
@property (readonly, nonatomic, getter=_focusSystem) UIFocusSystem *focusSystem; // @synthesize focusSystem=_focusSystem;
@property (readonly, nonatomic, getter=_focusSystemManager) _UIScreenFocusSystemManager *focusSystemManager; // @synthesize focusSystemManager=_focusSystemManager;
@property (readonly, weak, nonatomic) id<UIFocusItem> focusedItem;
@property (readonly, weak, nonatomic) UIView *focusedView;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=_interactiveHighlightEnvironment) _UIInteractiveHighlightEnvironment *interactiveHighlightEnvironment; // @synthesize interactiveHighlightEnvironment=_interactiveHighlightEnvironment;
@property (strong, nonatomic, getter=_lastNotifiedTraitCollection, setter=_setLastNotifiedTraitCollection:) UITraitCollection *lastNotifiedTraitCollection; // @synthesize lastNotifiedTraitCollection=_lastNotifiedTraitCollection;
@property (readonly, copy, nonatomic, getter=_linearFocusMovementSequences) NSArray *linearFocusMovementSequences;
@property (nonatomic, getter=_isMainScreen, setter=_setMainScreen:) BOOL mainScreen; // @synthesize mainScreen=_mainScreen;
@property (readonly) long long maximumFramesPerSecond;
@property (readonly, nonatomic) UIScreen *mirroredScreen;
@property (readonly, nonatomic) struct CGRect nativeBounds;
@property (readonly, nonatomic) double nativeScale;
@property (strong, nonatomic, getter=_overrideTraitCollection, setter=_setOverrideTraitCollection:) UITraitCollection *overrideTraitCollection; // @synthesize overrideTraitCollection=_overrideTraitCollection;
@property (nonatomic) long long overscanCompensation;
@property (readonly, nonatomic) struct UIEdgeInsets overscanCompensationInsets;
@property (readonly, weak, nonatomic) id<UIFocusEnvironment> parentFocusEnvironment;
@property (readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property (readonly, nonatomic, getter=_preferredFocusMovementStyle) long long preferredFocusMovementStyle;
@property (readonly, weak, nonatomic) UIView *preferredFocusedView;
@property (readonly, nonatomic) UIScreenMode *preferredMode;
@property (readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsFocus;
@property (readonly, nonatomic) UITraitCollection *traitCollection;
@property (nonatomic) BOOL wantsSoftwareDimming; // @synthesize wantsSoftwareDimming=_wantsSoftwareDimming;

+ (void)_FBSDisplayConfigurationConnected:(id)arg1 andNotify:(BOOL)arg2;
+ (void)_FBSDisplayConfigurationConnected:(id)arg1 andNotify:(BOOL)arg2 forceMain:(BOOL)arg3;
+ (void)_FBSDisplayConfigurationConnected:(id)arg1 forInitialDisplayContext:(id)arg2 andNotify:(BOOL)arg3 forceMain:(BOOL)arg4;
+ (void)_FBSDisplayDidPossiblyConnect:(id)arg1;
+ (void)_FBSDisplayDidPossiblyConnect:(id)arg1 withScene:(id)arg2;
+ (void)_FBSDisplayDidPossiblyConnect:(id)arg1 withScene:(id)arg2 andPost:(BOOL)arg3;
+ (void)_FBSDisplayDidPossiblyDisconnect:(id)arg1;
+ (void)_FBSDisplayDidPossiblyDisconnect:(id)arg1 forSceneDestruction:(id)arg2;
+ (void)_FBSDisplayIdentityDisconnected:(id)arg1;
+ (id)__displayConfigurationsIncludingMain:(BOOL)arg1;
+ (id)_carScreen;
+ (void)_enumerateScreensWithBlock:(CDUnknownBlockType)arg1;
+ (BOOL)_isProbablyBeingRecorded;
+ (void)_prepareCarScreensForResume;
+ (void)_prepareScreensForAppResume;
+ (id)_screenForScene:(id)arg1;
+ (id)_screenWithDisplayID:(id)arg1;
+ (id)_screenWithDisplayName:(id)arg1;
+ (id)_screenWithFBSDisplayIdentity:(id)arg1;
+ (id)_screenWithIntegerDisplayID:(unsigned int)arg1;
+ (BOOL)_shouldDisableJail;
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
- (void)_accessibilityBoldTextChanged:(id)arg1;
- (void)_accessibilityForceTouchEnabledChanged:(id)arg1;
- (void)_accessibilityTraitFlagsChanged:(id)arg1;
- (struct CGRect)_applicationFrame;
- (struct CGRect)_applicationFrameForInterfaceOrientation:(long long)arg1;
- (struct CGRect)_applicationFrameForInterfaceOrientation:(long long)arg1 usingStatusbarHeight:(double)arg2;
- (struct CGRect)_applicationFrameForInterfaceOrientation:(long long)arg1 usingStatusbarHeight:(double)arg2 ignoreStatusBar:(BOOL)arg3;
- (struct CGRect)_applicationFrameWithoutOverscanForInterfaceOrientation:(long long)arg1 usingStatusbarHeight:(double)arg2 ignoreStatusBar:(BOOL)arg3;
- (BOOL)_areListsLimited;
- (BOOL)_areMusicListsLimited;
- (unsigned long long)_artworkSubtype;
- (void)_beginObservingBacklightLevelNotifications;
- (struct CGRect)_boundsForInterfaceOrientation:(long long)arg1;
- (id)_capabilities;
- (id)_capabilityForKey:(id)arg1;
- (void)_clearCarPlayHumanPresenceState;
- (void)_computeMetrics;
- (void)_computeMetrics:(BOOL)arg1;
- (void)_connectScreen;
- (id)_defaultTraitCollectionForInterfaceOrientation:(long long)arg1;
- (id)_defaultTraitCollectionForInterfaceOrientation:(long long)arg1 inBounds:(struct CGRect)arg2;
- (void)_disconnectScreen;
- (id)_display;
- (double)_displayCornerRadius;
- (id)_displayID;
- (id)_displayInfoProvider;
- (struct UIEdgeInsets)_displayPeripheryInsets;
- (long long)_effectiveUserInterfaceStyle;
- (void)_endObservingBacklightLevelNotifications;
- (void)_ensureFocusSystemIsLoaded;
- (BOOL)_expectsSecureRendering;
- (void)_externalDeviceNightModeDidChange:(id)arg1;
- (id)_fallbackTraitCollection;
- (void)_fetchInitialCarPlayHumanPresenceStatusIfNeeded;
- (long long)_forceTouchCapability;
- (void)_handleEffectiveUserInterfaceStyleChanged:(id)arg1;
- (void)_handleForcedUserInterfaceLayoutDirectionChanged:(id)arg1;
- (BOOL)_hasStatusBar;
- (BOOL)_hasWindows;
- (long long)_imageOrientation;
- (unsigned int)_integerDisplayID;
- (long long)_interfaceOrientation;
- (struct CGRect)_interfaceOrientedMainSceneBounds;
- (void)_invalidate;
- (BOOL)_isCarInstrumentsScreen;
- (BOOL)_isCarPlayHumanPresenceInRange;
- (BOOL)_isCarPlayNightModeEnabled;
- (BOOL)_isCarScreen;
- (BOOL)_isExternal;
- (BOOL)_isFocusSystemLoaded;
- (BOOL)_isForceTouchCapable;
- (BOOL)_isMainScreenPointer;
- (BOOL)_isOverscanned;
- (BOOL)_isRightHandDrive;
- (BOOL)_isRotatable;
- (BOOL)_isSoftKeyboardLimited;
- (BOOL)_isUserInterfaceLimited:(unsigned long long)arg1;
- (BOOL)_isValidInterfaceOrientation:(long long)arg1;
- (BOOL)_isWorkspaceCapable;
- (double)_latency;
- (id)_launchImageTraitCollectionForInterfaceOrientation:(long long)arg1 inBounds:(struct CGRect)arg2;
- (id)_lazySoftwareDimmingWindow;
- (void)_limitedUIDidChange:(id)arg1;
- (struct CGRect)_mainSceneBoundsForInterfaceOrientation:(long long)arg1;
- (struct CGRect)_mainSceneFrame;
- (struct CGPoint)_mainSceneOrigin;
- (struct CGRect)_mainSceneReferenceBounds;
- (double)_maximumSupportedScale;
- (id)_name;
- (struct CGRect)_nativeDisplayBounds;
- (double)_nativeScale;
- (double)_nativeScaleWithLevel:(unsigned long long)arg1;
- (void)_notifyTraitsChangedAndPropagateToAllWindows;
- (struct CGRect)_overrideReferenceBounds;
- (struct UIEdgeInsets)_peripheryInsets;
- (double)_pointsPerInch;
- (void)_postBrightnessDidChangeNotificationIfAppropriate;
- (id)_preferredFocusRegionCoordinateSpace;
- (void)_prepareForWindow;
- (double)_refreshRate;
- (id)_regionForFocusedItem:(id)arg1 inCoordinateSpace:(id)arg2;
- (void)_resetUserInterfaceIdiom;
- (double)_rotation;
- (double)_scale;
- (void)_searchForFocusRegionsInContext:(id)arg1;
- (unsigned int)_seed;
- (void)_setCapability:(id)arg1 forKey:(id)arg2;
- (void)_setCarPlayHumanPresenceInRange:(BOOL)arg1;
- (void)_setExternalDeviceShouldInputText:(BOOL)arg1;
- (void)_setInitialDisplayContext:(id)arg1;
- (void)_setInterfaceOrientation:(long long)arg1;
- (void)_setNeedsNonDeferredFocusUpdate;
- (void)_setScale:(double)arg1;
- (void)_setUserInterfaceIdiom:(long long)arg1;
- (void)_setUserInterfaceStyleIfNecessary:(long long)arg1 firstTimeOnly:(BOOL)arg2;
- (id)_snapshotExcludingWindows:(id)arg1 withRect:(struct CGRect)arg2;
- (BOOL)_supportsBrightness;
- (BOOL)_supportsCarPlayHumanPresence;
- (BOOL)_supportsDeferredFocus;
- (BOOL)_supportsDragging;
- (double)_touchRadiusScaleFactor;
- (double)_traitCollectionDisplayCornerRadius;
- (id)_traitCollectionForChildEnvironment:(id)arg1;
- (struct CGRect)_unjailedReferenceBounds;
- (struct CGRect)_unjailedReferenceBoundsForInterfaceOrientation:(long long)arg1;
- (struct CGRect)_unjailedReferenceBoundsInPixels;
- (void)_updateAvailableDisplayModes;
- (void)_updateCapabilities;
- (void)_updateDisplayConfiguration:(id)arg1;
- (void)_updateTraits;
- (void)_updateUserInterfaceIdiom;
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
- (id)displayIdentity;
- (id)displayLinkWithTarget:(id)arg1 selector:(SEL)arg2;
- (id)fbsDisplay;
- (id)focusItemsInRect:(struct CGRect)arg1;
- (long long)gamut;
- (id)initWithDisplayConfiguration:(id)arg1;
- (id)initWithDisplayConfiguration:(id)arg1 forceMainScreen:(BOOL)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (float)rawBrightnessForBacklightLevel:(float)arg1;
- (int)screenType;
- (void)setBitsPerComponent:(int)arg1;
- (void)setFocusEnabled:(BOOL)arg1;
- (void)setNeedsFocusUpdate;
- (BOOL)shouldUpdateFocusInContext:(id)arg1;
- (id)snapshot;
- (id)snapshotView;
- (id)snapshotViewAfterScreenUpdates:(BOOL)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateFocusIfNeeded;

@end

