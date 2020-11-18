//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUViewController.h>

@class NSMutableArray, SUMaskProvider, SUMaskedView, SUOverlayTransition, SUScriptFunction, SUScriptWindowContext, SUTouchCaptureView, UIViewController;

@interface SUOverlayViewController : SUViewController
{
    NSMutableArray *_actionQueue;
    UIViewController *_activeViewController;
    UIViewController *_backViewController;
    BOOL _canSwipeToDismiss;
    UIViewController *_frontViewController;
    SUOverlayTransition *_lastFlipTransition;
    struct CGSize _overlaySize;
    SUOverlayTransition *_presentationTransition;
    SUScriptWindowContext *_scriptWindowContext;
    double _shadowOpacity;
    double _shadowRadius;
    SUScriptFunction *_shouldDismissFunction;
    long long _state;
    SUMaskedView *_subviewContainerView;
    SUTouchCaptureView *_touchCaptureView;
}

@property (readonly, nonatomic, getter=isActiveOverlay) BOOL activeOverlay;
@property (readonly, nonatomic) UIViewController *activeViewController;
@property (strong, nonatomic) UIViewController *backViewController; // @synthesize backViewController=_backViewController;
@property (nonatomic) BOOL canSwipeToDismiss; // @synthesize canSwipeToDismiss=_canSwipeToDismiss;
@property (strong, nonatomic) UIViewController *frontViewController; // @synthesize frontViewController=_frontViewController;
@property (strong, nonatomic) SUMaskProvider *maskProvider;
@property (readonly, nonatomic, getter=isOnFront) BOOL onFront;
@property (nonatomic) struct CGSize overlaySize; // @synthesize overlaySize=_overlaySize;
@property (strong, nonatomic) SUOverlayTransition *presentationTransition; // @synthesize presentationTransition=_presentationTransition;
@property (nonatomic) double shadowOpacity; // @synthesize shadowOpacity=_shadowOpacity;
@property (nonatomic) double shadowRadius; // @synthesize shadowRadius=_shadowRadius;
@property (strong, nonatomic) SUScriptFunction *shouldDismissFunction; // @synthesize shouldDismissFunction=_shouldDismissFunction;

+ (struct CGSize)defaultOverlaySize;
- (id)_activeViewController;
- (void)_applyDisplayProperties;
- (void)_applyOverlayConfiguration:(id)arg1;
- (void)_enqueueAction:(id)arg1;
- (void)_finishFlipAction:(id)arg1;
- (id)_flipTransition;
- (BOOL)_isControllerLoaded:(id)arg1;
- (void)_overlayActionDidFinish;
- (void)_overlayAnimationDidFinish;
- (void)_performFlipAction:(id)arg1;
- (void)_performFlipTransitionAction:(id)arg1;
- (void)_performNextAction;
- (void)_setActiveViewController:(id)arg1 updateInterface:(BOOL)arg2;
- (void)_setShadowVisible:(BOOL)arg1;
- (id)_subviewContainerView;
- (void)_tearDownTouchCaptureView;
- (void)_touchCaptureAction:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)copyArchivableContext;
- (void)dealloc;
- (void)flipWithTransition:(id)arg1;
- (void)imagePageViewTapped:(id)arg1;
- (id)init;
- (id)initWithOverlayConfiguration:(id)arg1;
- (void)invalidateForMemoryPurge;
- (void)loadView;
- (void)restoreArchivableContext:(id)arg1;
- (id)scriptWindowContext;
- (void)setScriptWindowContext:(id)arg1;
- (BOOL)shouldExcludeFromNavigationHistory;
- (void)storePage:(id)arg1 finishedWithSuccess:(BOOL)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDismissWithTransition:(id)arg1;

@end
