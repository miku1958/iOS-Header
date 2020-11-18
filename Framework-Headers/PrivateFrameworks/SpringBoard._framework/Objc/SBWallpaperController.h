//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>
#import <SpringBoard/CSWallpaperOverlayHosting-Protocol.h>
#import <SpringBoard/SBFLegibilitySettingsProviderDelegate-Protocol.h>
#import <SpringBoard/SBFWallpaperConfigurationManagerDelegate-Protocol.h>
#import <SpringBoard/SBFWallpaperViewDelegate-Protocol.h>
#import <SpringBoard/SBFWallpaperViewInternalObserver-Protocol.h>
#import <SpringBoard/SBUIActiveOrientationObserver-Protocol.h>
#import <SpringBoard/SBWallpaperServerDelegate-Protocol.h>
#import <SpringBoard/SBWallpaperWindowDelegate-Protocol.h>
#import <SpringBoard/UIWindowDelegate-Protocol.h>
#import <SpringBoard/_UISettingsKeyObserver-Protocol.h>

@class NSHashTable, NSMapTable, NSMutableSet, NSString, PTSingleTestRecipe, SBFWallpaperConfigurationManager, SBFWallpaperView, SBRootSettings, SBWallpaperAggdLogger, SBWallpaperStyleInfo, UIGestureRecognizer, UIScreen, UITraitCollection, UIView, UIWindow;
@protocol BSInvalidatable, SBFIrisWallpaperView, SBUIWallpaperOverlay;

@interface SBWallpaperController : NSObject <SBFLegibilitySettingsProviderDelegate, SBFWallpaperViewInternalObserver, SBUIActiveOrientationObserver, _UISettingsKeyObserver, SBFWallpaperConfigurationManagerDelegate, BSDescriptionProviding, SBWallpaperServerDelegate, SBFWallpaperViewDelegate, SBWallpaperWindowDelegate, UIWindowDelegate, CSWallpaperOverlayHosting>
{
    UIWindow *_wallpaperWindow;
    UIView *_wallpaperContainerView;
    UIView *_wallpaperOverlayContainerView;
    long long _orientation;
    SBFWallpaperView *_lockscreenWallpaperView;
    SBFWallpaperView *_homescreenWallpaperView;
    SBFWallpaperView *_sharedWallpaperView;
    NSHashTable *_lockscreenObservers;
    NSHashTable *_homescreenObservers;
    NSHashTable *_suspendColorSamplingAssertions;
    NSHashTable *_suspendWallpaperAnimationAssertions;
    NSHashTable *_requireWallpaperAssertions;
    NSMutableSet *_hideHomescreenWallpaperReasons;
    NSMutableSet *_hideLockscreenWallpaperReasons;
    long long _displayedVariant;
    double _lockscreenOnlyWallpaperAlpha;
    NSHashTable *_lockscreenBlurViews;
    NSHashTable *_homescreenBlurViews;
    long long _disallowRasterizationBlockCount;
    NSMutableSet *_disallowRasterizationReasonsHomeVariant;
    NSMutableSet *_disallowRasterizationReasonsLockVariant;
    NSMutableSet *_homescreenStyleChangeDelayReasons;
    SBFWallpaperConfigurationManager *_wallpaperConfigurationManager;
    UIView<SBUIWallpaperOverlay> *_wallpaperOverlay;
    NSMutableSet *_activeOrientationSources;
    NSMapTable *_orientationProviders;
    PTSingleTestRecipe *_migrationTestRecipe;
    PTSingleTestRecipe *_reloadTestRecipe;
    UIScreen *_screen;
    NSString *_cachingIdentifier;
    double _homescreenWallpaperScale;
    double _lockscreenWallpaperScale;
    SBWallpaperStyleInfo *_homescreenStyleInfo;
    SBWallpaperStyleInfo *_lockscreenStyleInfo;
    SBWallpaperAggdLogger *_wallpaperAggdLogger;
    SBRootSettings *_rootSettings;
    UITraitCollection *_fakeBlurViewOverrideTraitCollection;
    id<BSInvalidatable> _batterySaverAnimationAssertion;
    id<BSInvalidatable> _wallpaperStyleAnimationAssertion;
}

@property (readonly, nonatomic, getter=_WallpaperOrientationNotForYou) long long _orientation; // @synthesize _orientation;
@property (readonly, nonatomic) long long activeOrientationSource;
@property (strong, nonatomic) id<BSInvalidatable> batterySaverAnimationAssertion; // @synthesize batterySaverAnimationAssertion=_batterySaverAnimationAssertion;
@property (readonly, copy, nonatomic) NSString *cachingIdentifier; // @synthesize cachingIdentifier=_cachingIdentifier;
@property (readonly, nonatomic) CDStruct_059c2b36 currentHomescreenStyleTransitionState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UITraitCollection *fakeBlurViewOverrideTraitCollection; // @synthesize fakeBlurViewOverrideTraitCollection=_fakeBlurViewOverrideTraitCollection;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) SBWallpaperStyleInfo *homescreenStyleInfo; // @synthesize homescreenStyleInfo=_homescreenStyleInfo;
@property (nonatomic) double homescreenWallpaperScale; // @synthesize homescreenWallpaperScale=_homescreenWallpaperScale;
@property (strong, nonatomic) SBFWallpaperView *homescreenWallpaperView; // @synthesize homescreenWallpaperView=_homescreenWallpaperView;
@property (readonly, nonatomic) id<SBFIrisWallpaperView> irisWallpaperView;
@property (readonly, nonatomic) SBWallpaperStyleInfo *lockscreenStyleInfo; // @synthesize lockscreenStyleInfo=_lockscreenStyleInfo;
@property (nonatomic) double lockscreenWallpaperScale; // @synthesize lockscreenWallpaperScale=_lockscreenWallpaperScale;
@property (strong, nonatomic) SBFWallpaperView *lockscreenWallpaperView; // @synthesize lockscreenWallpaperView=_lockscreenWallpaperView;
@property (strong, nonatomic) SBRootSettings *rootSettings; // @synthesize rootSettings=_rootSettings;
@property (readonly, nonatomic) UIScreen *screen; // @synthesize screen=_screen;
@property (strong, nonatomic) SBFWallpaperView *sharedWallpaperView; // @synthesize sharedWallpaperView=_sharedWallpaperView;
@property (readonly) Class superclass;
@property (nonatomic) long long variant;
@property (strong, nonatomic) SBWallpaperAggdLogger *wallpaperAggdLogger; // @synthesize wallpaperAggdLogger=_wallpaperAggdLogger;
@property (readonly, nonatomic) SBFWallpaperConfigurationManager *wallpaperConfigurationManager; // @synthesize wallpaperConfigurationManager=_wallpaperConfigurationManager;
@property (readonly, nonatomic) UIGestureRecognizer *wallpaperGestureRecognizer;
@property (strong, nonatomic) id<BSInvalidatable> wallpaperStyleAnimationAssertion; // @synthesize wallpaperStyleAnimationAssertion=_wallpaperStyleAnimationAssertion;
@property (nonatomic) double windowLevel;

+ (id)accessAuthenticator;
+ (id)sharedInstance;
+ (id)substitutionFlatColorForWallpaperName:(id)arg1;
- (void).cxx_destruct;
- (void)_accessibilityReduceTransparencyChanged:(id)arg1;
- (id)_activeWallpaperView;
- (void)_batterySaverModeChanged:(id)arg1;
- (void)_beginDisallowRasterizationBlock;
- (void)_beginSuspendingMotionEffectsForStyleIfNeeded;
- (unsigned long long)_bestWallpaperViewInitializationOptionsForVariant:(long long)arg1 shared:(BOOL)arg2 wallpaperOptions:(id)arg3 options:(unsigned long long)arg4;
- (id)_blurViewsForVariant:(long long)arg1;
- (void)_clearWallpaperEffectView:(id)arg1;
- (void)_clearWallpaperView:(id)arg1;
- (void)_endDisallowRasterizationBlock;
- (void)_endSuspendingMotionEffectsForStyleIfNeeded;
- (void)_forceUpdateToSpringBoardInterfaceOrientationWithAnimationDuration:(double)arg1;
- (id)_getImageInRect:(struct CGRect)arg1 withZoomFactor:(double)arg2 forVariant:(long long)arg3 style:(inout long long *)arg4;
- (void)_handleWallpaperChangedForVariant:(long long)arg1;
- (void)_handleWallpaperLegibilitySettingsChanged:(id)arg1 forVariant:(long long)arg2;
- (BOOL)_isAcceptingOrientationChangesFromSource:(long long)arg1;
- (BOOL)_isRasterizationDisallowedForCurrentVariant;
- (BOOL)_isWallpaperHiddenForVariant:(long long)arg1;
- (BOOL)_isWallpaperView:(id)arg1 displayingWallpaperWithConfiguration:(id)arg2 forVariant:(long long)arg3;
- (id)_makeWallpaperViewWithConfiguration:(id)arg1 forVariant:(long long)arg2 shared:(BOOL)arg3 options:(unsigned long long)arg4;
- (void)_motionEffectsChanged;
- (id)_newFakeBlurViewForVariant:(long long)arg1 style:(long long)arg2 transformOptions:(unsigned long long)arg3;
- (id)_newWallpaperEffectViewForVariant:(long long)arg1 transitionState:(CDStruct_059c2b36)arg2;
- (void)_noteSignificantTimeChanged:(id)arg1;
- (id)_observersForVariant:(long long)arg1;
- (void)_precacheStyles:(id)arg1 usingTraitCollection:(id)arg2;
- (void)_reconfigureBlurViewsForVariant:(long long)arg1;
- (void)_registerFakeBlurView:(id)arg1;
- (void)_reloadWallpaperAndFlushCaches:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_saveWallpaperAggdKeysForLocations:(long long)arg1 withConfiguration:(id)arg2;
- (BOOL)_setDisallowRasterization:(BOOL)arg1 withReason:(id)arg2 reasons:(id)arg3;
- (void)_setWallpaperHidden:(BOOL)arg1 variant:(long long)arg2 reason:(id)arg3;
- (BOOL)_shouldSuspendMotionEffectsForState:(CDStruct_059c2b36)arg1;
- (BOOL)_shouldSuspendMotionEffectsForStyle:(long long)arg1;
- (id)_sourceForFakeBlurView:(id)arg1;
- (void)_suspendOrResumeColorSampling;
- (void)_suspendOrResumeWallpaperAnimation;
- (void)_unregisterFakeBlurView:(id)arg1;
- (void)_updateAndPrewarmWallpapers;
- (void)_updateBlurGeneration;
- (void)_updateBlurImagesForVariant:(long long)arg1;
- (BOOL)_updateEffectViewForVariant:(long long)arg1 oldState:(CDStruct_059c2b36 *)arg2 newState:(CDStruct_059c2b36 *)arg3 oldEffectView:(id *)arg4 newEffectView:(id *)arg5;
- (BOOL)_updateEffectViewForVariant:(long long)arg1 withFactory:(id)arg2;
- (void)_updateMotionEffectsForState:(CDStruct_059c2b36)arg1;
- (void)_updateRasterizationState;
- (void)_updateScreenBlanked;
- (void)_updateSeparateWallpaperForVariants:(long long)arg1 options:(unsigned long long)arg2 wallpaperMode:(long long)arg3;
- (void)_updateSharedWallpaperWithOptions:(unsigned long long)arg1 wallpaperMode:(long long)arg2;
- (void)_updateWallpaperForLocations:(long long)arg1 options:(unsigned long long)arg2 wallpaperMode:(long long)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)_updateWallpaperForLocations:(long long)arg1 options:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_updateWallpaperHidden;
- (void)_updateWallpaperParallax;
- (Class)_wallpaperViewClassForType:(long long)arg1;
- (id)_wallpaperViewForVariant:(long long)arg1;
- (id)_window;
- (void)activateOrientationSource:(long long)arg1;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3;
- (id)activeInterfaceOrientationSourcesDescriptions;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1;
- (void)addObserver:(id)arg1 forVariant:(long long)arg2;
- (id)averageColorForVariant:(long long)arg1;
- (id)averageColorInRect:(struct CGRect)arg1 forVariant:(long long)arg2;
- (id)averageColorInRect:(struct CGRect)arg1 forVariant:(long long)arg2 withSmudgeRadius:(double)arg3;
- (void)beginDelayingHomescreenStyleChangesForReason:(id)arg1;
- (id)beginRequiringWithReason:(id)arg1;
- (void)cancelInProcessAnimations;
- (void)cleanupOldSharedWallpaper:(id)arg1 lockSreenWallpaper:(id)arg2 homeScreenWallpaper:(id)arg3;
- (double)contrastForVariant:(long long)arg1;
- (double)contrastInRect:(struct CGRect)arg1 contrastWithinBoxes:(double *)arg2 contrastBetweenBoxes:(double *)arg3 forVariant:(long long)arg4;
- (double)contrastInRect:(struct CGRect)arg1 forVariant:(long long)arg2;
- (void)deactivateOrientationSource:(long long)arg1;
- (void)dealloc;
- (long long)defaultInterfaceOrientationForSource:(long long)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)endDelayingHomescreenStyleChangesForReason:(id)arg1 animationFactory:(id)arg2;
- (id)init;
- (id)initWithScreen:(id)arg1 orientation:(long long)arg2 variant:(long long)arg3 wallpaperConfigurationManager:(id)arg4 cachingIdentifier:(id)arg5 rootSettings:(id)arg6;
- (id)initWithWallpaperConfigurationManager:(id)arg1;
- (id)initWithWallpaperConfigurationManager:(id)arg1 cachingIdentifier:(id)arg2 rootSettings:(id)arg3;
- (void)invalidateWallpaperAssertion:(id)arg1;
- (id)legibilitySettingsForVariant:(long long)arg1;
- (void)orientationSource:(long long)arg1 didRotateFromInterfaceOrientation:(long long)arg2;
- (void)orientationSource:(long long)arg1 willAnimateRotationToInterfaceOrientation:(long long)arg2 duration:(double)arg3;
- (void)orientationSource:(long long)arg1 willRotateToInterfaceOrientation:(long long)arg2 duration:(double)arg3;
- (void)preheatWallpaperForVariant:(long long)arg1;
- (void)providerLegibilitySettingsChanged:(id)arg1;
- (id)relinquishHostingOfWallpaperOverlay;
- (void)removeColorSamplingAssertion:(id)arg1;
- (void)removeObserver:(id)arg1 forVariant:(long long)arg2;
- (void)removeWallpaperAnimationAssertion:(id)arg1;
- (void)removeWallpaperRequiredAssertion:(id)arg1;
- (BOOL)removeWallpaperStyleForPriority:(long long)arg1 forVariant:(long long)arg2 withAnimationFactory:(id)arg3;
- (void)setAlpha:(double)arg1 forWallpaperVariant:(long long)arg2;
- (void)setDisallowsRasterization:(BOOL)arg1 forVariant:(long long)arg2 withReason:(id)arg3;
- (void)setHomescreenWallpaperScale:(double)arg1 withAnimationFactory:(id)arg2;
- (void)setLockscreenOnlyWallpaperAlpha:(double)arg1;
- (void)setLockscreenWallpaperContentsRect:(struct CGRect)arg1;
- (void)setLockscreenWallpaperScale:(double)arg1 withAnimationFactory:(id)arg2;
- (void)setOrientationProvider:(id)arg1 forSource:(long long)arg2;
- (void)setVariant:(long long)arg1 withOutAnimationFactory:(id)arg2 inAnimationFactory:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)setWallpaperStyle:(long long)arg1 forPriority:(long long)arg2 forVariant:(long long)arg3 withAnimationFactory:(id)arg4;
- (BOOL)setWallpaperStyleTransitionState:(CDStruct_059c2b36)arg1 forPriority:(long long)arg2 forVariant:(long long)arg3 withAnimationFactory:(id)arg4;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (BOOL)shouldDelayHomescreenStyleUpdates;
- (void)startHostingWallpaperOverlay:(id)arg1;
- (id)substitutionWallpaperConfigurationForWallpaperConfiguration:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)suspendColorSamplingForReason:(id)arg1;
- (id)suspendWallpaperAnimationForReason:(id)arg1;
- (void)updateIrisWallpaperForInteractiveMode;
- (BOOL)updateIrisWallpaperForStaticMode;
- (void)updateOrientationAfterSourceChange;
- (void)updateWallpaper:(id)arg1 forWallpaperDimming:(BOOL)arg2;
- (void)updateWallpaper:(id)arg1 forWallpaperMode:(long long)arg2;
- (BOOL)variantsShareWallpaper;
- (id)vendWallpaperViewForConfiguration:(id)arg1 forVariant:(long long)arg2 shared:(BOOL)arg3 options:(unsigned long long)arg4;
- (id)wallpaperConfigurationForUpdatingWallpaperViewsForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (id)wallpaperConfigurationForVariant:(long long)arg1 includingValuesForTypes:(unsigned long long)arg2 wallpaperMode:(long long)arg3;
- (void)wallpaperConfigurationManager:(id)arg1 didChangeWallpaperConfigurationForVariants:(long long)arg2;
- (unsigned long long)wallpaperDataTypesToRequestForUpdatingWallpaperViews;
- (void)wallpaperServer:(id)arg1 fetchThumbnailDataForVariant:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)wallpaperServer:(id)arg1 restoreDefaultWallpaperWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)wallpaperServer:(id)arg1 setWallpaperColorName:(id)arg2 forVariants:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)wallpaperServer:(id)arg1 setWallpaperGradient:(id)arg2 forVariants:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)wallpaperServer:(id)arg1 setWallpaperVideoWithWallpaperMode:(id)arg2 cropRect:(struct CGRect)arg3 wallpaperMode:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)wallpaperStyleInfoForVariant:(long long)arg1;
- (void)wallpaperView:(id)arg1 didChangeZoomFactor:(double)arg2;
- (id)wallpaperView:(id)arg1 wallpaperConfigurationIncludingValueTypes:(unsigned long long)arg2;
- (void)wallpaperViewDidChangeWantsRasterization:(id)arg1;
- (void)wallpaperViewDidInvalidateBlurs:(id)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end
