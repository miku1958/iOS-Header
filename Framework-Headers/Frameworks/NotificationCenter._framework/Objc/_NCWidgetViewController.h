//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <NotificationCenter/SBUISizeObservingViewDelegate-Protocol.h>
#import <NotificationCenter/_NCWidgetViewController_Service_IPC-Protocol.h>

@class NSMapTable, NSMutableArray, NSObject, NSString, UIScrollViewDelayedTouchesBeganGestureRecognizer, UIView;
@protocol NCWidgetProvidingPrivate, OS_dispatch_queue, UIViewControllerAnimatedTransitioning;

__attribute__((visibility("hidden")))
@interface _NCWidgetViewController : UIViewController <_NCWidgetViewController_Service_IPC, SBUISizeObservingViewDelegate>
{
    UIView *_contentView;
    double _lastRequestedHeight;
    struct UIEdgeInsets _clientMarginInsets;
    NSObject<OS_dispatch_queue> *_remoteViewControllerProxyQueue;
    id<UIViewControllerAnimatedTransitioning> _transitionController;
    NSMutableArray *_activeTransitionContexts;
    NSMapTable *_wrappedAppearStatesToOpenTransactionIDs;
    UIScrollViewDelayedTouchesBeganGestureRecognizer *_touchDelayGestureRecognizer;
    struct CGRect _initialBounds;
    struct {
        unsigned int implementsPerformUpdateWithCompletionHandler:1;
        unsigned int implementsMarginInsets:1;
        unsigned int implementsActiveDisplayModeDidChange:1;
        unsigned int implementsDidBecomeForeground:1;
    } _contentProvidingViewControllerFlags;
    UIViewController<NCWidgetProvidingPrivate> *_contentProvidingViewController;
    long long _visibilityState;
    NSString *_widgetIdentifier;
    NSString *_containerIdentifier;
    NSMapTable *_activeTransitionContextsByRequestID;
    NSMutableArray *_pendingSizeTransitionUUIDStack;
}

@property (strong, nonatomic, getter=_activeTransitionContextsByRequestID) NSMapTable *activeTransitionContextsByRequestID; // @synthesize activeTransitionContextsByRequestID=_activeTransitionContextsByRequestID;
@property (copy, nonatomic, getter=_containerIdentifier) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
@property (strong, nonatomic, getter=_contentProvidingViewController) UIViewController<NCWidgetProvidingPrivate> *contentProvidingViewController; // @synthesize contentProvidingViewController=_contentProvidingViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=_pendingSizeTransitionUUIDStack) NSMutableArray *pendingSizeTransitionUUIDStack; // @synthesize pendingSizeTransitionUUIDStack=_pendingSizeTransitionUUIDStack;
@property (readonly) Class superclass;
@property (nonatomic, getter=_visibilityState, setter=_setVisibilityState:) long long visibilityState; // @synthesize visibilityState=_visibilityState;
@property (copy, nonatomic, getter=_widgetIdentifier) NSString *widgetIdentifier; // @synthesize widgetIdentifier=_widgetIdentifier;

+ (id)_exportedInterface;
+ (void)_reduceTransparencyDidChange:(id)arg1;
+ (id)_remoteViewControllerInterface;
+ (void)initialize;
- (void).cxx_destruct;
- (void)__closeTransactionForPreferredHeightChangeWithIdentifier:(id)arg1;
- (void)__openTransactionForAppearanceCallWithState:(int)arg1 withIdentifier:(id)arg2;
- (void)__performOutstandingCompletionForRequestWithIdentifier:(id)arg1;
- (void)__performUpdateWithReplyHandler:(CDUnknownBlockType)arg1;
- (void)__prepareForAnimationsForRequestWithIdentifier:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;
- (void)__requestEncodedLayerTreeToURL:(id)arg1 withCodingImageFormat:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;
- (void)__setActiveDisplayMode:(long long)arg1 requestIdentifier:(id)arg2;
- (void)__setMaximumSize:(struct CGSize)arg1 forDisplayMode:(long long)arg2;
- (void)__updateVisibilityState:(long long)arg1;
- (void)__viewWillTransitionToSize:(struct CGSize)arg1 requestIdentifier:(id)arg2;
- (long long)_clientLargestSupportedDisplayMode;
- (void)_clientLargestSupportedDisplayModeDidChange;
- (double)_clientPreferredContentHeightPermittingAutolayout:(BOOL)arg1;
- (void)_closeTransactionForActiveDisplayModeChangeWithIdentifier:(id)arg1;
- (void)_closeTransactionWithAppearState:(int)arg1;
- (void)_configureAnimatorForTransitionContext:(id)arg1;
- (id)_customAnimator:(BOOL)arg1;
- (BOOL)_disableAutomaticKeyboardBehavior;
- (struct UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL *)arg2;
- (double)_effectiveHeightForRequestedHeight:(double)arg1;
- (void)_encodeLayerTreeToURL:(id)arg1 withCodingImageFormat:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;
- (void)_enqueueProxyRequest:(CDUnknownBlockType)arg1;
- (id)_existingTransitionContextForRequestIdentifier:(id)arg1;
- (void)_performUpdateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_processInputItems:(id)arg1 initialActiveDisplayMode:(long long *)arg2;
- (void)_requestMarginInsets;
- (void)_requestPreferredViewHeight:(double)arg1 usingAutolayout:(BOOL)arg2;
- (void)_requestPreferredViewHeight:(double)arg1 usingAutolayout:(BOOL)arg2 force:(BOOL)arg3;
- (void)_setActiveDisplayMode:(long long)arg1 requestIdentifier:(id)arg2 force:(BOOL)arg3;
- (void)_setContentProvidingViewController:(id)arg1;
- (void)_setMaximumWidth:(double)arg1 forDisplayMode:(long long)arg2;
- (void)_setVisibilityState:(long long)arg1 force:(BOOL)arg2;
- (BOOL)_shouldRemoveViewFromHierarchyOnDisappear;
- (id)_transitionContextForRequestIdentifier:(id)arg1 usingAutolayout:(BOOL)arg2 createIfNecessary:(BOOL)arg3;
- (id)_widgetExtensionContext;
- (void)_willAppearInRemoteViewController;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)dealloc;
- (void)delayed:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)sizeObservingView:(id)arg1 didChangeSize:(struct CGSize)arg2;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

