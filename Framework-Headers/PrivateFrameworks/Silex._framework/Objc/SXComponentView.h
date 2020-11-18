//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Silex/STTextCanvasRenderSource-Protocol.h>
#import <Silex/SXAXAssistiveTechStatusChangeListener-Protocol.h>
#import <Silex/SXTransitionDataSource-Protocol.h>
#import <Silex/UIGestureRecognizerDelegate-Protocol.h>
#import <Silex/UIViewControllerPreviewingDelegate-Protocol.h>

@class NSString, SXColumnLayout, SXComponentExposureEvent, SXComponentExposureMonitor, SXComponentStyle, SXDocumentController, SXFillView, SXViewport;
@protocol SXAnalyticsReporting, SXComponent, SXComponentHosting, SXComponentLayout, SXComponentStyleRenderer, SXComponentStyleRendererFactory, SXPresentationDelegate;

@interface SXComponentView : UIView <UIGestureRecognizerDelegate, STTextCanvasRenderSource, SXAXAssistiveTechStatusChangeListener, SXTransitionDataSource, UIViewControllerPreviewingDelegate>
{
    BOOL _hasRenderedContents;
    BOOL _requiresThoroughFrameCalculations;
    BOOL _isDraggable;
    BOOL _animationsAndBehaviorsEnabled;
    BOOL _highlighted;
    BOOL _allowViewHierarchyRemoval;
    BOOL _hasComponentStyle;
    BOOL _hasAnimation;
    BOOL _hasBehaviors;
    CDStruct_1cc9d0d0 _presentationChanges;
    id<SXComponentLayout> _componentLayout;
    id<SXComponent> _component;
    SXDocumentController *_documentController;
    SXViewport *_viewport;
    id<SXPresentationDelegate> _presentationDelegate;
    id<SXAnalyticsReporting> _analyticsReporting;
    long long _visibilityState;
    long long _presentationState;
    SXFillView *_fillView;
    SXColumnLayout *_documentColumnLayout;
    UIView *_highlightView;
    id<SXComponentStyleRendererFactory> _componentStyleRendererFactory;
    id<SXComponentStyleRenderer> _componentStyleRenderer;
    SXComponentStyle *_componentStyle;
    SXComponentExposureMonitor *_componentExposureMonitor;
    SXComponentExposureEvent *_componentExposureEvent;
    id<SXComponentHosting> _componentHost;
    unsigned long long _componentIndex;
    struct CGRect _absoluteFrame;
    struct CGRect _contentFrame;
    struct CGRect _originalFrame;
    struct CGRect _presentationFrame;
}

@property (nonatomic) struct CGRect absoluteFrame; // @synthesize absoluteFrame=_absoluteFrame;
@property (nonatomic) BOOL allowViewHierarchyRemoval; // @synthesize allowViewHierarchyRemoval=_allowViewHierarchyRemoval;
@property (readonly, weak, nonatomic) id<SXAnalyticsReporting> analyticsReporting; // @synthesize analyticsReporting=_analyticsReporting;
@property (nonatomic) BOOL animationsAndBehaviorsEnabled; // @synthesize animationsAndBehaviorsEnabled=_animationsAndBehaviorsEnabled;
@property (readonly, nonatomic) id<SXComponent> component; // @synthesize component=_component;
@property (strong, nonatomic) SXComponentExposureEvent *componentExposureEvent; // @synthesize componentExposureEvent=_componentExposureEvent;
@property (strong, nonatomic) SXComponentExposureMonitor *componentExposureMonitor; // @synthesize componentExposureMonitor=_componentExposureMonitor;
@property (weak, nonatomic) id<SXComponentHosting> componentHost; // @synthesize componentHost=_componentHost;
@property (nonatomic) unsigned long long componentIndex; // @synthesize componentIndex=_componentIndex;
@property (readonly, nonatomic) id<SXComponentLayout> componentLayout; // @synthesize componentLayout=_componentLayout;
@property (strong, nonatomic) SXComponentStyle *componentStyle; // @synthesize componentStyle=_componentStyle;
@property (readonly, nonatomic) id<SXComponentStyleRenderer> componentStyleRenderer; // @synthesize componentStyleRenderer=_componentStyleRenderer;
@property (readonly, nonatomic) id<SXComponentStyleRendererFactory> componentStyleRendererFactory; // @synthesize componentStyleRendererFactory=_componentStyleRendererFactory;
@property (nonatomic) struct CGRect contentFrame; // @synthesize contentFrame=_contentFrame;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) SXColumnLayout *documentColumnLayout; // @synthesize documentColumnLayout=_documentColumnLayout;
@property (readonly, nonatomic) SXDocumentController *documentController; // @synthesize documentController=_documentController;
@property (weak, nonatomic) SXFillView *fillView; // @synthesize fillView=_fillView;
@property (nonatomic) BOOL hasAnimation; // @synthesize hasAnimation=_hasAnimation;
@property (nonatomic) BOOL hasBehaviors; // @synthesize hasBehaviors=_hasBehaviors;
@property (nonatomic) BOOL hasComponentStyle; // @synthesize hasComponentStyle=_hasComponentStyle;
@property (readonly, nonatomic) BOOL hasRenderedContents; // @synthesize hasRenderedContents=_hasRenderedContents;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property (readonly, nonatomic) BOOL isDraggable; // @synthesize isDraggable=_isDraggable;
@property (readonly, nonatomic) BOOL isTransitionable;
@property (nonatomic) struct CGRect originalFrame; // @synthesize originalFrame=_originalFrame;
@property (nonatomic) CDStruct_1cc9d0d0 presentationChanges; // @synthesize presentationChanges=_presentationChanges;
@property (readonly, weak, nonatomic) id<SXPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
@property (nonatomic) struct CGRect presentationFrame; // @synthesize presentationFrame=_presentationFrame;
@property (nonatomic) long long presentationState; // @synthesize presentationState=_presentationState;
@property (nonatomic) BOOL requiresThoroughFrameCalculations; // @synthesize requiresThoroughFrameCalculations=_requiresThoroughFrameCalculations;
@property (readonly) Class superclass;
@property (readonly, nonatomic) struct CGRect transitionContainerFrame;
@property (readonly, nonatomic) UIView *transitionContainerView;
@property (readonly, nonatomic) struct CGRect transitionContentFrame;
@property (readonly, nonatomic) UIView *transitionContentView;
@property (readonly, nonatomic) BOOL transitionViewIsVisible;
@property (readonly, nonatomic) BOOL transitionViewShouldFadeInContent;
@property (readonly, nonatomic) BOOL transitionViewUsesThumbnail;
@property (readonly, nonatomic) struct CGRect transitionVisibleFrame;
@property (readonly, nonatomic) SXViewport *viewport; // @synthesize viewport=_viewport;
@property (nonatomic) long long visibilityState; // @synthesize visibilityState=_visibilityState;

- (void).cxx_destruct;
- (BOOL)allowHierarchyRemoval;
- (void)animationDidFinish:(id)arg1;
- (void)animationDidStart:(id)arg1;
- (void)assistiveTechnologyStatusDidChange;
- (id)classification;
- (void)configure;
- (id)contentViewForBehavior:(id)arg1;
- (void)dealloc;
- (void)didApplyBehavior:(id)arg1;
- (void)didMoveToWindow;
- (void)discardContents;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureShouldBegin:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocumentController:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 analyticsReporting:(id)arg4 componentStyleRendererFactory:(id)arg5;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)loadComponent:(id)arg1;
- (void)monitorComponentExposureIfNeeded;
- (struct CGRect)originalFrameForContentView:(id)arg1 behavior:(id)arg2;
- (void)prepareForTransitionType:(unsigned long long)arg1;
- (void)presentComponentWithChanges:(CDStruct_1cc9d0d0)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)provideInfosLayoutTo:(id)arg1;
- (void)receivedInfo:(id)arg1 fromLayoutingPhaseWithIdentifier:(id)arg2;
- (void)renderContents;
- (void)reportComponentExposureEvent;
- (void)restoreBehavior;
- (void)updateAllowHierarchyRemovalWithComponent:(id)arg1 componentStyle:(id)arg2;
- (void)visibilityStateDidChangeFromState:(long long)arg1;
- (void)willPresentComponent;

@end

