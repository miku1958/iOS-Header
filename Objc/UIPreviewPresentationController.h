//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIPresentationController.h>

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSHashTable, NSString, UIResponder, UITapGestureRecognizer, UIView, UIVisualEffectView, UIWindow;
@protocol UIPreviewPresentationControllerDelegate;

@interface UIPreviewPresentationController : UIPresentationController <UIGestureRecognizerDelegate>
{
    BOOL _appliesVisualEffectsToPresentingView;
    id<UIPreviewPresentationControllerDelegate> _previewPresentationDelegate;
    UITapGestureRecognizer *_dismissGestureRecognizer;
    UIVisualEffectView *_presentationContainerEffectView;
    UIWindow *_statusBarWindow;
    UIView *_statusBarSnapshotView;
    NSArray *_keyboardSnapshotters;
    NSHashTable *_keyboardWindows;
    UIResponder *_currentPinnedResponder;
    UIWindow *_presentationWindow;
    CDUnknownBlockType _containerSuperviewFactoryBlock;
    CDUnknownBlockType _containerViewConfigurationBlock;
    CDUnknownBlockType _dismissalTransitionDidEndBlock;
}

@property (nonatomic) BOOL appliesVisualEffectsToPresentingView; // @synthesize appliesVisualEffectsToPresentingView=_appliesVisualEffectsToPresentingView;
@property (copy, nonatomic) CDUnknownBlockType containerSuperviewFactoryBlock; // @synthesize containerSuperviewFactoryBlock=_containerSuperviewFactoryBlock;
@property (copy, nonatomic) CDUnknownBlockType containerViewConfigurationBlock; // @synthesize containerViewConfigurationBlock=_containerViewConfigurationBlock;
@property (weak, nonatomic) UIResponder *currentPinnedResponder; // @synthesize currentPinnedResponder=_currentPinnedResponder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UITapGestureRecognizer *dismissGestureRecognizer; // @synthesize dismissGestureRecognizer=_dismissGestureRecognizer;
@property (copy, nonatomic) CDUnknownBlockType dismissalTransitionDidEndBlock; // @synthesize dismissalTransitionDidEndBlock=_dismissalTransitionDidEndBlock;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSArray *keyboardSnapshotters; // @synthesize keyboardSnapshotters=_keyboardSnapshotters;
@property (copy, nonatomic) NSHashTable *keyboardWindows; // @synthesize keyboardWindows=_keyboardWindows;
@property (strong, nonatomic) UIVisualEffectView *presentationContainerEffectView; // @synthesize presentationContainerEffectView=_presentationContainerEffectView;
@property (weak, nonatomic) UIWindow *presentationWindow; // @synthesize presentationWindow=_presentationWindow;
@property (weak, nonatomic) id<UIPreviewPresentationControllerDelegate> previewPresentationDelegate; // @synthesize previewPresentationDelegate=_previewPresentationDelegate;
@property (strong, nonatomic) UIView *statusBarSnapshotView; // @synthesize statusBarSnapshotView=_statusBarSnapshotView;
@property (strong, nonatomic) UIWindow *statusBarWindow; // @synthesize statusBarWindow=_statusBarWindow;
@property (readonly) Class superclass;

+ (id)_backgroundEffectForTraitCollection:(id)arg1 interactive:(BOOL)arg2;
+ (BOOL)_shouldApplyVisualEffectsToPresentingView;
+ (BOOL)_shouldInterdictServiceViewTouches;
- (void).cxx_destruct;
- (void)_animatePreviewTransitionIfNeeded:(id)arg1;
- (void)_applyVisualEffectsForPresentationPhase:(unsigned long long)arg1;
- (void)_cancelTransitionDidEnd:(BOOL)arg1;
- (void)_finalizeAfterDismissalTransition;
- (struct CGRect)_frameForTransitionViewInPresentationSuperview:(id)arg1;
- (id)_fullscreenPresentationSuperview;
- (void)_handleDismissGestureRecognizer:(id)arg1;
- (void)_interactiveHighlightTransitionDidEnd:(BOOL)arg1;
- (BOOL)_keyboardShouldAnimateAlongsideForInteractiveTransitions;
- (void)_layoutForCancel;
- (void)_layoutForInteractiveHighlight;
- (void)_layoutForPreview;
- (void)_prepareContainerViewForPresentationTransition;
- (void)_prepareDismissAnimationsForTransitionCoordinator:(id)arg1;
- (void)_prepareDismissGestureRecognizersIfNeeded;
- (void)_prepareKeyboardForPresentationTransition;
- (void)_preparePresentationAnimationsForTransitionCoordinator:(id)arg1;
- (void)_prepareStatusBarForPresentationTransition;
- (id)_presentationContainerView;
- (BOOL)_presentationPotentiallyUnderlapsStatusBar;
- (void)_presentationTransitionWillBeginForContainerEffectView:(id)arg1;
- (void)_previewTransitionDidEnd:(BOOL)arg1;
- (BOOL)_shouldBlurStatusBar;
- (BOOL)_shouldDisableInteractionDuringTransitions;
- (BOOL)_shouldKeepCurrentFirstResponder;
- (BOOL)_shouldSavePresentedViewControllerForStateRestoration;
- (void)dismissalTransitionDidEnd:(BOOL)arg1;
- (void)dismissalTransitionWillBegin;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (void)presentationTransitionDidEnd:(BOOL)arg1;
- (void)presentationTransitionWillBegin;

@end

