//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <QuickLook/QLPageViewControllerDataSource-Protocol.h>
#import <QuickLook/QLPageViewControllerDelegate-Protocol.h>
#import <QuickLook/QLPreviewCollectionProtocol-Protocol.h>
#import <QuickLook/QLPreviewItemViewControllerDelegate-Protocol.h>
#import <QuickLook/QLTransitionControllerProtocol-Protocol.h>
#import <QuickLook/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, QLAppearance, QLItemViewController, QLPageViewController, QLPinchRotationTracker, QLPreviewItemStore, QLSwipeDownTracker, QLTransitionContext, QLTransitionDriver, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer, UISwipeGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol QLPreviewControllerStateProtocol, QLTransitionControllerProtocol;

__attribute__((visibility("hidden")))
@interface QLPreviewCollection : UIViewController <QLTransitionControllerProtocol, QLPageViewControllerDataSource, QLPageViewControllerDelegate, QLPreviewItemViewControllerDelegate, UIGestureRecognizerDelegate, QLPreviewCollectionProtocol>
{
    struct _NSRange _previewItemRange;
    long long _currentItemIndex;
    QLPreviewItemStore *_itemStore;
    UIView *_localAccessoryViewContainer;
    UIView *_remoteAccessoryViewContainer;
    UITapGestureRecognizer *_tapGesture;
    UIPanGestureRecognizer *_verticalPanGesture;
    UISwipeGestureRecognizer *_pageSwipeGesture;
    UIPanGestureRecognizer *_pagePanGesture;
    QLAppearance *_appearance;
    NSString *_loadingString;
    unsigned long long _visibilityState;
    BOOL _isAvailable;
    BOOL _allowInteractiveTransitions;
    BOOL _fullScreen;
    QLPageViewController *_pageViewController;
    id<QLPreviewControllerStateProtocol> _stateManager;
    UIPanGestureRecognizer *_slideGesture;
    UIPinchGestureRecognizer *_pinchGesture;
    UIRotationGestureRecognizer *_rotationGesture;
    QLSwipeDownTracker *_swipeDownTracker;
    QLPinchRotationTracker *_pinchRotationTracker;
    QLTransitionContext *_transitionContext;
    id<QLTransitionControllerProtocol> _transitionController;
    QLTransitionDriver *_transitionDriver;
}

@property (nonatomic) BOOL allowInteractiveTransitions; // @synthesize allowInteractiveTransitions=_allowInteractiveTransitions;
@property (readonly) QLItemViewController *currentPreviewItemViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL fullScreen; // @synthesize fullScreen=_fullScreen;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isAvailable; // @synthesize isAvailable=_isAvailable;
@property (strong) QLPageViewController *pageViewController; // @synthesize pageViewController=_pageViewController;
@property (strong) UIPinchGestureRecognizer *pinchGesture; // @synthesize pinchGesture=_pinchGesture;
@property (strong) QLPinchRotationTracker *pinchRotationTracker; // @synthesize pinchRotationTracker=_pinchRotationTracker;
@property (strong) UIRotationGestureRecognizer *rotationGesture; // @synthesize rotationGesture=_rotationGesture;
@property (strong) UIPanGestureRecognizer *slideGesture; // @synthesize slideGesture=_slideGesture;
@property (strong) id<QLPreviewControllerStateProtocol> stateManager; // @synthesize stateManager=_stateManager;
@property (readonly) Class superclass;
@property (strong) QLSwipeDownTracker *swipeDownTracker; // @synthesize swipeDownTracker=_swipeDownTracker;
@property (strong) QLTransitionContext *transitionContext; // @synthesize transitionContext=_transitionContext;
@property (strong) id<QLTransitionControllerProtocol> transitionController; // @synthesize transitionController=_transitionController;
@property (strong) QLTransitionDriver *transitionDriver; // @synthesize transitionDriver=_transitionDriver;

+ (void)previewCollectionUsingRemoteViewController:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)quickLookExtension;
+ (void)remotePreviewCollectionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)_cleanAccessoryViewContainer;
- (void)_installGestures;
- (BOOL)_isVisible;
- (void)_preloadAdjacentItemsForIndex:(unsigned long long)arg1;
- (void)_preloadPreviewForIndex:(long long)arg1;
- (void)_setUpTransitionDriverForPresenting:(BOOL)arg1 duration:(double)arg2;
- (void)_tapGestureRecognized;
- (void)_tearDownTransition:(BOOL)arg1;
- (void)_updateAccessoryViewWithPreviewItemViewController:(id)arg1;
- (void)_updatePreferredContentSize;
- (void)_updatePreviewVisibility:(BOOL)arg1;
- (void)_updatePrinter;
- (void)_updateWhitePointAdaptivityStyle;
- (id)accessoryView;
- (void)completeTransition:(BOOL)arg1 withDuration:(double)arg2;
- (void)configureWithNumberOfItems:(long long)arg1 currentPreviewItemIndex:(unsigned long long)arg2 itemProvider:(id)arg3 stateManager:(id)arg4;
- (void)expandContentOfPreviewItemViewController:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)gestureTracker;
- (void)hostViewControlerTransitionToState:(unsigned long long)arg1 animated:(BOOL)arg2;
- (id)init;
- (void)invalidatePreviewCollection;
- (BOOL)isRemote;
- (void)keyCommandWasPerformed:(id)arg1;
- (void)keyCommandsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadView;
- (id)loadingTextForPreviewItemViewController:(id)arg1;
- (void)pageViewController:(id)arg1 didCancelTransitionFromPage:(id)arg2 withIndex:(unsigned long long)arg3 toPage:(id)arg4 withIndex:(unsigned long long)arg5 animated:(BOOL)arg6;
- (void)pageViewController:(id)arg1 didTransitionFromPage:(id)arg2 withIndex:(unsigned long long)arg3 toPage:(id)arg4 withIndex:(unsigned long long)arg5 animated:(BOOL)arg6;
- (void)pageViewController:(id)arg1 isTransitioningFromPage:(id)arg2 withIndex:(unsigned long long)arg3 toPage:(id)arg4 withIndex:(unsigned long long)arg5 withProgress:(double)arg6;
- (id)pageViewController:(id)arg1 parallaxViewInPage:(id)arg2 withIndex:(unsigned long long)arg3;
- (id)pageViewController:(id)arg1 viewControllerAtIndex:(unsigned long long)arg2;
- (void)pageViewController:(id)arg1 willBeginInteractiveTransitionFromPage:(id)arg2 withIndex:(unsigned long long)arg3 toPage:(id)arg4 withIndex:(unsigned long long)arg5;
- (void)pageViewController:(id)arg1 willCancelTransitionFromPage:(id)arg2 withIndex:(unsigned long long)arg3 toPage:(id)arg4 withIndex:(unsigned long long)arg5 animated:(BOOL)arg6;
- (void)pageViewController:(id)arg1 willTransitionFromPage:(id)arg2 withIndex:(unsigned long long)arg3 toPage:(id)arg4 withIndex:(unsigned long long)arg5 animated:(BOOL)arg6;
- (void)previewItemViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)previewItemViewController:(id)arg1 wantsFullScreen:(BOOL)arg2;
- (void)previewItemViewController:(id)arg1 wantsToOpenURL:(id)arg2;
- (void)previewItemViewControllerDidEditPreview:(id)arg1;
- (void)previewItemViewControllerWantsToShowNoInternetConnectivityAlert:(id)arg1;
- (void)previewItemViewControllerWantsToUpdateRotation:(id)arg1;
- (void)previewItemViewControllerWantsUpdateKeyCommands:(id)arg1;
- (void)previewItemViewControllerWantsUpdatePrinter:(id)arg1;
- (void)previewItemViewControllerWantsUpdateToolbar:(id)arg1 animated:(BOOL)arg2;
- (void)rotationOrPinchGestureRecognized:(id)arg1;
- (void)setAppearance:(id)arg1 animated:(BOOL)arg2;
- (void)setCurrentPreviewItemIndex:(long long)arg1 animated:(BOOL)arg2;
- (void)setLoadingString:(id)arg1;
- (void)setRemoteAccessoryContainer:(id)arg1;
- (void)slideToDismissGestureRecognized:(id)arg1;
- (void)startNonInteractiveTransitionPresenting:(BOOL)arg1;
- (void)startTransitionWithSourceViewProvider:(id)arg1 transitionController:(id)arg2 presenting:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)tearDownTransition:(BOOL)arg1;
- (void)toolbarButtonPressedWithIdentifier:(id)arg1;
- (void)toolbarButtonsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateCurrentPreviewConfiguration;
- (void)updateTransitionWithProgress:(double)arg1;
- (void)viewDidAppear:(BOOL)arg1;

@end

