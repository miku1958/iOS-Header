//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Silex/STScrollViewDelegate-Protocol.h>
#import <Silex/SXAdControllerPresentationDelegate-Protocol.h>
#import <Silex/SXComponentHosting-Protocol.h>
#import <Silex/SXDocumentSectionHosting-Protocol.h>
#import <Silex/SXFormatInteractorDelegate-Protocol.h>
#import <Silex/SXKeyboardSupport-Protocol.h>
#import <Silex/SXPresentationDelegate-Protocol.h>
#import <Silex/SXPresentationEnvironment-Protocol.h>
#import <Silex/SXPreviewViewControllerManagerDelegate-Protocol.h>
#import <Silex/SXScrollPositionRestoring-Protocol.h>
#import <Silex/SXTangierControllerDelegate-Protocol.h>
#import <Silex/SXViewportChangeListener-Protocol.h>
#import <Silex/UIGestureRecognizerDelegate-Protocol.h>

@class NSMutableArray, NSOrderedSet, NSString, SXComponentAnimationController, SXComponentBehaviorController, SXComponentView, SXContext, SXDocumentProvider, SXFontIndex, SXFullscreenCanvasController, SXFullscreenCanvasViewController, SXFullscreenVideoPlaybackManager, SXMediaPlaybackController, SXPresentationAttributes, SXScrollPosition, SXTangierController, SXVideoPlayerViewControllerManager, SXViewControllerPresentingManager, SXViewport, SXViewportDebugger, UIScrollView, UITraitCollection;
@protocol SXActionManager, SXAdControllerContainer, SXAdDocumentStateManager, SXAnalyticsReportingContainer, SXAppStateMonitor, SXComponentController, SXDocumentControllerContainer, SXDocumentSectionBlueprint, SXDocumentSectionManager, SXDocumentStyleRenderer, SXFormatInteractor, SXMediaSharingPolicyProvider, SXPresentationAttributesManager, SXPresentationDelegateContainer, SXPreviewViewControllerManager, SXResourceDataSourceContainer, SXScrollPositionManager, SXScrollReporting, SXScrollViewControllerDelegate, SXTextSelectionManager, SXTransitionDataSourceProvider, UIViewControllerPreviewing;

@interface SXScrollViewController : UIViewController <SXFormatInteractorDelegate, SXDocumentSectionHosting, SXPresentationDelegate, STScrollViewDelegate, SXComponentHosting, UIGestureRecognizerDelegate, SXTangierControllerDelegate, SXViewportChangeListener, SXAdControllerPresentationDelegate, SXPreviewViewControllerManagerDelegate, SXPresentationEnvironment, SXKeyboardSupport, SXScrollPositionRestoring>
{
    BOOL _restoreScrollPositionOnNextLayout;
    BOOL _isPreviewing;
    BOOL _transitioning;
    SXComponentAnimationController *_animationController;
    SXComponentBehaviorController *_behaviorController;
    id<SXComponentController> _componentController;
    SXMediaPlaybackController *_mediaPlaybackController;
    SXFullscreenVideoPlaybackManager *_fullscreenVideoPlaybackManager;
    id<SXAdDocumentStateManager> _adDocumentStateManager;
    id<SXTextSelectionManager> _textSelectionManager;
    SXContext *_context;
    UIScrollView *_scrollView;
    id<SXScrollViewControllerDelegate> _delegate;
    SXPresentationAttributes *_presentationAttributes;
    id<SXTransitionDataSourceProvider> _transitionDataSourceProvider;
    id<SXDocumentControllerContainer> _documentControllerContainer;
    id<SXResourceDataSourceContainer> _resourceDataSourceContainer;
    id<SXAnalyticsReportingContainer> _analyticsReportingContainer;
    id<SXPresentationDelegateContainer> _presentationDelegateContainer;
    id<SXAdControllerContainer> _adControllerContainer;
    id<SXAppStateMonitor> _appStateMonitor;
    id<SXPresentationAttributesManager> _presentationAttributesManager;
    id<SXActionManager> _actionManager;
    SXViewControllerPresentingManager *_viewControllerPresentingManager;
    id<SXScrollPositionManager> _scrollPositionManager;
    id<SXPreviewViewControllerManager> _previewViewControllerManager;
    id<SXMediaSharingPolicyProvider> _mediaSharingPolicyProvider;
    id<SXFormatInteractor> _interactor;
    id<SXDocumentSectionManager> _documentSectionManager;
    id<SXDocumentSectionBlueprint> _headerBlueprint;
    id<SXDocumentSectionBlueprint> _footerBlueprint;
    SXViewport *_viewport;
    SXViewportDebugger *_viewportDebugger;
    SXComponentView *_focussedComponentView;
    SXFullscreenCanvasViewController *_fullscreenCanvasViewController;
    SXFullscreenCanvasController *_currentCanvasController;
    SXScrollPosition *_restoredScrollPosition;
    NSOrderedSet *_snapLines;
    id<SXDocumentStyleRenderer> _documentStyleRenderer;
    SXTangierController *_tangierController;
    NSMutableArray *_articleScrollEvents;
    id<UIViewControllerPreviewing> _previewingContext;
    id<SXScrollReporting> _scrollReporter;
    SXVideoPlayerViewControllerManager *_videoPlayerViewControllerManager;
    SXFontIndex *_fontIndex;
    SXDocumentProvider *_documentProvider;
    double _headerHeight;
}

@property (readonly, nonatomic) id<SXActionManager> actionManager; // @synthesize actionManager=_actionManager;
@property (readonly, nonatomic) id<SXAdControllerContainer> adControllerContainer; // @synthesize adControllerContainer=_adControllerContainer;
@property (readonly, nonatomic) id<SXAdDocumentStateManager> adDocumentStateManager; // @synthesize adDocumentStateManager=_adDocumentStateManager;
@property (readonly, nonatomic) id<SXAnalyticsReportingContainer> analyticsReportingContainer; // @synthesize analyticsReportingContainer=_analyticsReportingContainer;
@property (readonly, nonatomic) SXComponentAnimationController *animationController; // @synthesize animationController=_animationController;
@property (readonly, nonatomic) id<SXAppStateMonitor> appStateMonitor; // @synthesize appStateMonitor=_appStateMonitor;
@property (strong, nonatomic) NSMutableArray *articleScrollEvents; // @synthesize articleScrollEvents=_articleScrollEvents;
@property (readonly, nonatomic) SXComponentBehaviorController *behaviorController; // @synthesize behaviorController=_behaviorController;
@property (readonly, nonatomic) id<SXComponentController> componentController; // @synthesize componentController=_componentController;
@property (readonly, nonatomic) SXContext *context; // @synthesize context=_context;
@property (strong, nonatomic) SXFullscreenCanvasController *currentCanvasController; // @synthesize currentCanvasController=_currentCanvasController;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SXScrollViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id<SXDocumentControllerContainer> documentControllerContainer; // @synthesize documentControllerContainer=_documentControllerContainer;
@property (readonly, nonatomic) SXDocumentProvider *documentProvider; // @synthesize documentProvider=_documentProvider;
@property (readonly, nonatomic) id<SXDocumentSectionManager> documentSectionManager; // @synthesize documentSectionManager=_documentSectionManager;
@property (readonly, nonatomic) id<SXDocumentStyleRenderer> documentStyleRenderer; // @synthesize documentStyleRenderer=_documentStyleRenderer;
@property (strong, nonatomic) SXComponentView *focussedComponentView; // @synthesize focussedComponentView=_focussedComponentView;
@property (readonly, nonatomic) SXFontIndex *fontIndex; // @synthesize fontIndex=_fontIndex;
@property (readonly, nonatomic) id<SXDocumentSectionBlueprint> footerBlueprint; // @synthesize footerBlueprint=_footerBlueprint;
@property (strong, nonatomic) SXFullscreenCanvasViewController *fullscreenCanvasViewController; // @synthesize fullscreenCanvasViewController=_fullscreenCanvasViewController;
@property (readonly, nonatomic) SXFullscreenVideoPlaybackManager *fullscreenVideoPlaybackManager; // @synthesize fullscreenVideoPlaybackManager=_fullscreenVideoPlaybackManager;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<SXDocumentSectionBlueprint> headerBlueprint; // @synthesize headerBlueprint=_headerBlueprint;
@property (nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
@property (readonly, nonatomic) id<SXFormatInteractor> interactor; // @synthesize interactor=_interactor;
@property (readonly, nonatomic) BOOL isPresentingFullscreenCanvas;
@property (nonatomic) BOOL isPreviewing; // @synthesize isPreviewing=_isPreviewing;
@property (readonly, nonatomic) SXMediaPlaybackController *mediaPlaybackController; // @synthesize mediaPlaybackController=_mediaPlaybackController;
@property (readonly, nonatomic) id<SXMediaSharingPolicyProvider> mediaSharingPolicyProvider; // @synthesize mediaSharingPolicyProvider=_mediaSharingPolicyProvider;
@property (readonly, nonatomic) SXPresentationAttributes *presentationAttributes; // @synthesize presentationAttributes=_presentationAttributes;
@property (readonly, nonatomic) id<SXPresentationAttributesManager> presentationAttributesManager; // @synthesize presentationAttributesManager=_presentationAttributesManager;
@property (readonly, nonatomic) id<SXPresentationDelegateContainer> presentationDelegateContainer; // @synthesize presentationDelegateContainer=_presentationDelegateContainer;
@property (readonly, nonatomic) id<SXPreviewViewControllerManager> previewViewControllerManager; // @synthesize previewViewControllerManager=_previewViewControllerManager;
@property (strong, nonatomic) id<UIViewControllerPreviewing> previewingContext; // @synthesize previewingContext=_previewingContext;
@property (readonly, nonatomic) id<SXResourceDataSourceContainer> resourceDataSourceContainer; // @synthesize resourceDataSourceContainer=_resourceDataSourceContainer;
@property (nonatomic) BOOL restoreScrollPositionOnNextLayout; // @synthesize restoreScrollPositionOnNextLayout=_restoreScrollPositionOnNextLayout;
@property (strong, nonatomic) SXScrollPosition *restoredScrollPosition; // @synthesize restoredScrollPosition=_restoredScrollPosition;
@property (readonly, nonatomic) struct UIEdgeInsets safeAreaInsets;
@property (readonly, nonatomic) id<SXScrollPositionManager> scrollPositionManager; // @synthesize scrollPositionManager=_scrollPositionManager;
@property (readonly, nonatomic) id<SXScrollReporting> scrollReporter; // @synthesize scrollReporter=_scrollReporter;
@property (readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property (strong, nonatomic) NSOrderedSet *snapLines; // @synthesize snapLines=_snapLines;
@property (readonly) Class superclass;
@property (strong, nonatomic) SXTangierController *tangierController; // @synthesize tangierController=_tangierController;
@property (readonly, nonatomic) id<SXTextSelectionManager> textSelectionManager; // @synthesize textSelectionManager=_textSelectionManager;
@property (readonly, nonatomic) UITraitCollection *traitCollection;
@property (readonly, nonatomic) id<SXTransitionDataSourceProvider> transitionDataSourceProvider; // @synthesize transitionDataSourceProvider=_transitionDataSourceProvider;
@property (nonatomic) BOOL transitioning; // @synthesize transitioning=_transitioning;
@property (readonly, nonatomic) SXVideoPlayerViewControllerManager *videoPlayerViewControllerManager; // @synthesize videoPlayerViewControllerManager=_videoPlayerViewControllerManager;
@property (readonly, nonatomic) SXViewControllerPresentingManager *viewControllerPresentingManager; // @synthesize viewControllerPresentingManager=_viewControllerPresentingManager;
@property (readonly, nonatomic) unsigned long long viewingLocation;
@property (strong, nonatomic) SXViewport *viewport; // @synthesize viewport=_viewport;
@property (strong, nonatomic) SXViewportDebugger *viewportDebugger; // @synthesize viewportDebugger=_viewportDebugger;
@property (readonly, nonatomic) struct CGSize viewportSize;

- (void).cxx_destruct;
- (void)_applicationWillEnterForeground:(id)arg1;
- (BOOL)accessibilityShouldScrollForScrollView:(id)arg1 defaultValue:(BOOL)arg2;
- (void)addComponentView:(id)arg1;
- (BOOL)addInteractivityFocusForComponent:(id)arg1;
- (BOOL)allowInteractivityFocusForComponent:(id)arg1;
- (void)applyFooterBlueprint:(id)arg1;
- (void)applyHeaderBlueprint:(id)arg1;
- (void)assistiveTechnologyStatusDidChange:(id)arg1;
- (id)canvasViewController;
- (void)dealloc;
- (void)dictionaryWithComponentOffsets:(id)arg1 forComponentViews:(id)arg2;
- (void)didTouchScrollView:(id)arg1 withEvent:(id)arg2;
- (void)dismissFullscreenCanvasForComponent:(id)arg1;
- (void)displayContentsAfterLayoutWithInteractor:(id)arg1;
- (void)finishArticleScrollEvents;
- (struct CGRect)frameOfComponentWithVideoPlayerViewController:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)headlineAccessibilityElement;
- (void)hideContentsForLayoutWithInteractor:(id)arg1;
- (id)initWithScrollView:(id)arg1 documentControllerContainer:(id)arg2 resourceDataSourceContainer:(id)arg3 analyticsReportingContainer:(id)arg4 presentationDelegateContainer:(id)arg5 adControllerContainer:(id)arg6 presentationAttributeManager:(id)arg7 viewport:(id)arg8 tangierController:(id)arg9 componentController:(id)arg10 interactor:(id)arg11 appStateMonitor:(id)arg12 viewControllerPresentingManager:(id)arg13 scrollPositionManager:(id)arg14 documentStyleRenderer:(id)arg15 previewViewControllerManager:(id)arg16 scrollReporter:(id)arg17 videoPlayerViewControllerManager:(id)arg18 mediaSharingPolicyProvider:(id)arg19 fontIndex:(id)arg20 documentProvider:(id)arg21 transitionDataSourceProvider:(id)arg22;
- (id)interactiveCanvasController;
- (void)interactor:(id)arg1 didIntegrateBlueprint:(id)arg2;
- (void)interactor:(id)arg1 willIntegrateBlueprint:(id)arg2;
- (void)interactor:(id)arg1 willLayoutWithOptions:(id)arg2;
- (BOOL)isScrolling;
- (BOOL)isValidBlueprintForCurrentSize:(id)arg1;
- (void)loadContext:(id)arg1 analyticsReporting:(id)arg2 adControllerFactory:(id)arg3;
- (void)presentFullscreenGalleryWithComponentIdentifier:(id)arg1;
- (id)presentingContentViewController;
- (id)presentingViewControllerForAdController:(id)arg1;
- (void)removeComponentView:(id)arg1;
- (void)removeInteractivityFocusForComponent:(id)arg1;
- (id)requestFullScreenCanvasViewControllerForComponent:(id)arg1 canvasController:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (id)requestFullScreenCanvasViewControllerForComponent:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)scrollPosition;
- (id)scrollPositionForComponentViews:(id)arg1;
- (id)scrollPositionForPlayingVideoComponentInComponentViews:(id)arg1;
- (void)scrollToRect:(struct CGRect)arg1 animated:(BOOL)arg2;
- (BOOL)scrollView:(id)arg1 shouldOccludeAccessibilityElement:(id)arg2;
- (id)scrollViewForFullscreenGalleryWithComponentIdentifier:(id)arg1;
- (id)scrollViewForStripGalleryWithComponentIdentifier:(id)arg1;
- (id)sectionHostingView;
- (id)sectionHostingViewController;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)shouldPreventDraggingForScrollView:(id)arg1;
- (BOOL)shouldRestoreScrollPositionForLayoutBlueprint:(id)arg1;
- (BOOL)shouldStartPreviewForPreviewViewControllerManager:(id)arg1;
- (void)showScrollViewIfNeeded;
- (double)snaplineForContentOffset:(double)arg1 velocity:(double)arg2;
- (void)spacebarPressedWithModifierFlags:(long long)arg1;
- (void)tangierController:(id)arg1 scrollViewDidEndDragging:(id)arg2 willDecelerate:(BOOL)arg3;
- (void)tangierController:(id)arg1 scrollViewWillBeginDragging:(id)arg2;
- (void)tangierController:(id)arg1 scrollViewWillEndDragging:(id)arg2 withVelocity:(struct CGPoint)arg3 targetContentOffset:(inout struct CGPoint *)arg4;
- (void)tangierControllerDidScroll:(id)arg1;
- (void)tangierControllerDidStopScrolling:(id)arg1;
- (void)tangierControllerWillStartScrolling:(id)arg1;
- (id)textScrollPositionForComponentViews:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateBehaviorForComponentView:(id)arg1;
- (void)updatePresentationWithAttributes:(id)arg1;
- (void)updateScrollPosition:(id)arg1 animated:(BOOL)arg2;
- (void)updateStickyHeaders;
- (void)updateViewportForBlueprint:(id)arg1;
- (id)videoComponentViewForVideoPlayerViewController:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (void)willEndPreviewingForPreviewViewControllerManager:(id)arg1;
- (void)willStartPreviewingForPreviewViewControllerManager:(id)arg1;

@end

