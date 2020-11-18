//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXDebugHierarchyProvider-Protocol.h>
#import <PhotosUICore/PXDiagnosticsEnvironment-Protocol.h>
#import <PhotosUICore/PXGAXResponder-Protocol.h>
#import <PhotosUICore/PXGDiagnosticsProvider-Protocol.h>
#import <PhotosUICore/PXGEngineDelegate-Protocol.h>
#import <PhotosUICore/PXScrollViewControllerObserver-Protocol.h>
#import <PhotosUICore/PXSettingsKeyObserver-Protocol.h>
#import <PhotosUICore/UIGestureRecognizerDelegate-Protocol.h>

@class MTKView, NSArray, NSDictionary, NSString, PXGAXCoalescingResponder, PXGAnchor, PXGDebugHUDLayer, PXGEngine, PXGLayout, PXGRectDiagnosticsLayer, PXScrollViewController, PXScrollViewSpeedometer, UIColor;
@protocol PXGAXResponder, PXGViewAccessibilityDelegate, PXGViewDiagnosticsSource;

@interface PXGView : UIView <PXDiagnosticsEnvironment, PXGEngineDelegate, PXScrollViewControllerObserver, PXSettingsKeyObserver, UIGestureRecognizerDelegate, PXGAXResponder, PXGDiagnosticsProvider, PXDebugHierarchyProvider>
{
    PXGDebugHUDLayer *_debugHUDLayer;
    PXGRectDiagnosticsLayer *_rectDiagnosticsLayer;
    PXGAXCoalescingResponder *_coalescingAXResponder;
    UIColor *_backgroundColor;
    BOOL _lowMemoryModeEnabled;
    BOOL _isScrolling;
    BOOL _isAnimatingScroll;
    BOOL _isAccessibilityEnabled;
    BOOL _isSceneBackgrounded;
    BOOL _showDebugHUD;
    BOOL _showPerspectiveDebug;
    BOOL _shouldWorkaround18475431;
    id<PXGAXResponder> axNextResponder;
    id<PXGViewAccessibilityDelegate> _accessibilityDelegate;
    PXScrollViewController *_scrollViewController;
    PXScrollViewSpeedometer *_scrollingSpeedometer;
    MTKView *_metalView;
    PXGAnchor *_scrollingAnimationAnchor;
    NSDictionary *_ppt_currentTestOptions;
    CDUnknownBlockType _nextDidLayoutHandler;
    id<PXGViewDiagnosticsSource> _diagnosticsSource;
    PXGEngine *_engine;
    struct UIEdgeInsets _hitTestPadding;
}

@property (weak, nonatomic) id<PXGViewAccessibilityDelegate> accessibilityDelegate; // @synthesize accessibilityDelegate=_accessibilityDelegate;
@property (weak, nonatomic) id<PXGAXResponder> axNextResponder; // @synthesize axNextResponder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *debugHierarchyIdentifiers;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *diagnosticDescription;
@property (strong, nonatomic) id<PXGViewDiagnosticsSource> diagnosticsSource; // @synthesize diagnosticsSource=_diagnosticsSource;
@property (readonly, nonatomic) PXGEngine *engine; // @synthesize engine=_engine;
@property (readonly, nonatomic) BOOL hasExtendedColorDisplay;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) struct UIEdgeInsets hitTestPadding; // @synthesize hitTestPadding=_hitTestPadding;
@property (nonatomic) BOOL isAccessibilityEnabled; // @synthesize isAccessibilityEnabled=_isAccessibilityEnabled;
@property (nonatomic) BOOL isAnimatingScroll; // @synthesize isAnimatingScroll=_isAnimatingScroll;
@property (nonatomic) BOOL isSceneBackgrounded; // @synthesize isSceneBackgrounded=_isSceneBackgrounded;
@property (nonatomic) BOOL isScrolling; // @synthesize isScrolling=_isScrolling;
@property (nonatomic) BOOL lowMemoryModeEnabled; // @synthesize lowMemoryModeEnabled=_lowMemoryModeEnabled;
@property (readonly, nonatomic) MTKView *metalView; // @synthesize metalView=_metalView;
@property (copy, nonatomic) CDUnknownBlockType nextDidLayoutHandler; // @synthesize nextDidLayoutHandler=_nextDidLayoutHandler;
@property (copy, nonatomic, setter=ppt_setCurrentTestOptions:) NSDictionary *ppt_currentTestOptions; // @synthesize ppt_currentTestOptions=_ppt_currentTestOptions;
@property (readonly, nonatomic) NSDictionary *ppt_extraResults;
@property (readonly, nonatomic) NSString *preferredFileNameForExportingDebugHierarchy;
@property (strong, nonatomic) PXGLayout *rootLayout;
@property (readonly, nonatomic) PXScrollViewController *scrollViewController; // @synthesize scrollViewController=_scrollViewController;
@property (strong, nonatomic) PXGAnchor *scrollingAnimationAnchor; // @synthesize scrollingAnimationAnchor=_scrollingAnimationAnchor;
@property (readonly, nonatomic) PXScrollViewSpeedometer *scrollingSpeedometer; // @synthesize scrollingSpeedometer=_scrollingSpeedometer;
@property (nonatomic) BOOL shouldWorkaround18475431; // @synthesize shouldWorkaround18475431=_shouldWorkaround18475431;
@property (nonatomic) BOOL showDebugHUD; // @synthesize showDebugHUD=_showDebugHUD;
@property (nonatomic) BOOL showPerspectiveDebug; // @synthesize showPerspectiveDebug=_showPerspectiveDebug;
@property (nonatomic) BOOL slowAnimationsEnabled;
@property (readonly) Class superclass;
@property (readonly) Class superclass;

+ (id)allDescriptions;
+ (id)debugHierarchyChildGroupingID;
+ (id)debugHierarchyObjectsInGroupWithID:(id)arg1 onObject:(id)arg2 outOptions:(id *)arg3;
+ (void)enumerateAllViewsUsingBlock:(CDUnknownBlockType)arg1;
+ (BOOL)forceAccessibilityEnabled;
+ (BOOL)isAvailable;
+ (long long)screenPixelCount;
+ (void)setForceAccessibilityEnabled:(BOOL)arg1;
- (void).cxx_destruct;
- (void)_ensureEndAnimatedScroll;
- (struct CGImage *)_fallbackImageForAssetReference:(id)arg1 mediaProvider:(id)arg2;
- (void)_handleSceneDidEnterBackground:(id)arg1;
- (void)_handleSceneWillEnterForeground:(id)arg1;
- (void)_installNextDidLayoutHandler:(CDUnknownBlockType)arg1;
- (void)_updateAccessibility;
- (void)_updateDebugHUD;
- (void)_updateEngineLowMemoryMode;
- (void)_updateFocusItemProvider;
- (void)_updateIsVisible;
- (void)_updateLayoutScreenScale;
- (void)_updateLayoutViewEnvironment;
- (void)_updateMetalView;
- (void)_updateRectDiagnosticsLayer;
- (void)_updateUserInterfaceDirection;
- (void)_willChangeBoundsSizeFrom:(struct CGRect)arg1 toBounds:(struct CGRect)arg2;
- (id)axContainingViewForAXGroup:(id)arg1;
- (void)axGroup:(id)arg1 didChange:(unsigned long long)arg2 userInfo:(id)arg3;
- (BOOL)axGroup:(id)arg1 didRequestToPerformAction:(long long)arg2 userInfo:(id)arg3;
- (id)backgroundColor;
- (id)curatedLibraryHitTestResultsInRect:(struct CGRect)arg1 withControl:(long long)arg2;
- (void)didMoveToWindow;
- (void)disablePreheating;
- (id)dropTargetObjectReferenceForLocation:(struct CGPoint)arg1;
- (void)engine:(id)arg1 updateDebugHUDWithStats:(CDStruct_58b866b9 *)arg2;
- (void)enumerateCuratedLibraryHitTestResultsAtPoint:(struct CGPoint)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateCuratedLibraryHitTestResultsAtPoint:(struct CGPoint)arg1 withControls:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateCuratedLibraryHitTestResultsInDirection:(unsigned long long)arg1 fromSpriteReference:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateCuratedLibraryHitTestResultsInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateDebugHierarchyWithIdentifier:(id)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (BOOL)exportDebugHierarchyToURL:(id)arg1 error:(id *)arg2;
- (id)firstCuratedLibraryHitTestResultsAtPoint:(struct CGPoint)arg1 withControl:(long long)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handlePan:(id)arg1;
- (id)hitTestResultAtPoint:(struct CGPoint)arg1;
- (id)hitTestResultAtPoint:(struct CGPoint)arg1 padding:(struct UIEdgeInsets)arg2 passingTest:(CDUnknownBlockType)arg3;
- (id)hitTestResultsAtPoint:(struct CGPoint)arg1;
- (id)hitTestResultsAtPoint:(struct CGPoint)arg1 padding:(struct UIEdgeInsets)arg2 passingTest:(CDUnknownBlockType)arg3;
- (id)hitTestResultsAtPoint:(struct CGPoint)arg1 withIdentifiers:(id)arg2;
- (id)hitTestResultsInDirection:(unsigned long long)arg1 fromSpriteReference:(id)arg2;
- (id)hitTestResultsInRect:(struct CGRect)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)installAnimationRenderingCompletionHandler:(CDUnknownBlockType)arg1;
- (void)installLayoutCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)isObjectReference:(id)arg1 visuallyBeforeObjectReference:(id)arg2;
- (BOOL)isVisible;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)ppt_cleanUpAfterTest:(id)arg1 isScrollTest:(BOOL)arg2;
- (void)ppt_prepareForTest:(id)arg1 withOptions:(id)arg2 isScrollTest:(BOOL)arg3;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (id)regionOfInterestForAssetReference:(id)arg1 image:(struct CGImage **)arg2 fallbackMediaProvider:(id)arg3;
- (id)regionOfInterestForHitTestResult:(id)arg1;
- (id)regionOfInterestForObjectReference:(id)arg1;
- (id)regionOfInterestForSpriteReference:(id)arg1;
- (void)registerAllTextureProvidersWithMediaProvider:(id)arg1;
- (void)registerAllTextureProvidersWithMediaProvider:(id)arg1 pixelBufferSourcesProvider:(id)arg2 namedImagesBundle:(id)arg3;
- (void)registerTextureProvider:(id)arg1 forMediaKind:(int)arg2;
- (void)safeAreaInsetsDidChange;
- (void)scrollViewControllerDidEndScrolling:(id)arg1;
- (void)scrollViewControllerDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewControllerDidLayoutSubviews:(id)arg1;
- (void)scrollViewControllerDidScroll:(id)arg1;
- (void)scrollViewControllerWillBeginScrolling:(id)arg1;
- (void)scrollViewControllerWillBeginScrollingAnimation:(id)arg1 towardsContentEdges:(unsigned long long)arg2;
- (void)setBackgroundColor:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)test_installRenderSnapshotHandler:(CDUnknownBlockType)arg1;
- (struct CGImage *)textureSnapshotForSpriteReference:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)viewForSpriteIndex:(unsigned int)arg1;
- (id)viewForSpriteReference:(id)arg1;

@end
