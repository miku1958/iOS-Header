//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIPreviewPresentationController.h>

@class UIViewPropertyAnimator, _UIPreviewPresentationPlatterView;
@protocol UIViewControllerPreviewing_Internal, _UIPreviewInteractionHighlighting;

__attribute__((visibility("hidden")))
@interface _UIPreviewPresentationController2 : UIPreviewPresentationController
{
    BOOL _hasPerformedInitialLayout;
    BOOL _shouldScaleContentViewToAspectFitPlatter;
    BOOL _shouldEnableUserInteractionOnPlatter;
    id<UIViewControllerPreviewing_Internal> _previewingContext;
    _UIPreviewPresentationPlatterView *_revealPlatterView;
    id<_UIPreviewInteractionHighlighting> _currentHighlighter;
    UIViewPropertyAnimator *_currentTransitionAnimator;
    double _interactiveTransitionFraction;
    _UIPreviewPresentationPlatterView *_contentPlatterView;
    struct CGAffineTransform _preferredContentPlatterTransform;
}

@property (readonly, nonatomic) struct CGRect _computedPlatterFrame;
@property (strong, nonatomic) _UIPreviewPresentationPlatterView *contentPlatterView; // @synthesize contentPlatterView=_contentPlatterView;
@property (weak, nonatomic) id<_UIPreviewInteractionHighlighting> currentHighlighter; // @synthesize currentHighlighter=_currentHighlighter;
@property (weak, nonatomic) UIViewPropertyAnimator *currentTransitionAnimator; // @synthesize currentTransitionAnimator=_currentTransitionAnimator;
@property (nonatomic) BOOL hasPerformedInitialLayout; // @synthesize hasPerformedInitialLayout=_hasPerformedInitialLayout;
@property (nonatomic) double interactiveTransitionFraction; // @synthesize interactiveTransitionFraction=_interactiveTransitionFraction;
@property (nonatomic) struct CGAffineTransform preferredContentPlatterTransform; // @synthesize preferredContentPlatterTransform=_preferredContentPlatterTransform;
@property (weak, nonatomic) id<UIViewControllerPreviewing_Internal> previewingContext; // @synthesize previewingContext=_previewingContext;
@property (strong, nonatomic) _UIPreviewPresentationPlatterView *revealPlatterView; // @synthesize revealPlatterView=_revealPlatterView;
@property (nonatomic) BOOL shouldEnableUserInteractionOnPlatter; // @synthesize shouldEnableUserInteractionOnPlatter=_shouldEnableUserInteractionOnPlatter;
@property (nonatomic) BOOL shouldScaleContentViewToAspectFitPlatter; // @synthesize shouldScaleContentViewToAspectFitPlatter=_shouldScaleContentViewToAspectFitPlatter;

- (void).cxx_destruct;
- (void)_layoutContentViews;
- (void)_performDismissAnimationsWithTransitionContext:(id)arg1;
- (void)_performPresentationAnimationsWithTransitionContext:(id)arg1;
- (void)_performReducedMotionDismissAnimationsWithTransitionContext:(id)arg1;
- (void)_performReducedMotionPresentationAnimationsWithTransitionContext:(id)arg1;
- (void)_performTransitionAnimations:(CDUnknownBlockType)arg1;
- (struct CGRect)_preferredContentPlatterRectForContainerRect:(struct CGRect)arg1;
- (void)_prepareContentPlatterViewForPresentationTransitionIfNeeded:(id)arg1;
- (void)_prepareContentViewsForPresentationAnimationsIfNeeded;
- (void)_preparePresentationAnimationsForTransitionCoordinator:(id)arg1;
- (void)_prepareRevealPlatterViewForPresentationTransitionIfNeeded:(id)arg1;
- (void)_presentationTransitionWillBeginForContainerEffectView:(id)arg1;
- (BOOL)_shouldDisableInteractionDuringTransitions;
- (BOOL)_shouldReduceMotion;
- (void)_updateFromInteractionEffect:(id)arg1;
- (void)containerViewDidLayoutSubviews;
- (void)dismissalTransitionDidEnd:(BOOL)arg1;
- (void)dismissalTransitionWillBegin;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 previewingContext:(id)arg3;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)presentationTransitionDidEnd:(BOOL)arg1;
- (void)presentationTransitionWillBegin;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1;

@end

