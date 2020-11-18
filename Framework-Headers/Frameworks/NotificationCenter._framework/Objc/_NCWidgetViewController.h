//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <NotificationCenter/NCSizeObservingViewDelegate-Protocol.h>
#import <NotificationCenter/_NCWidgetViewController_Service_IPC-Protocol.h>

@class NSMapTable, NSObject, NSString, UIScrollViewDelayedTouchesBeganGestureRecognizer, UIView;
@protocol NCWidgetProvidingPrivate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _NCWidgetViewController : UIViewController <_NCWidgetViewController_Service_IPC, NCSizeObservingViewDelegate>
{
    NSObject<OS_dispatch_queue> *_remoteViewControllerProxyQueue;
    NSMapTable *_wrappedAppearStatesToOpenTransactionIDs;
    UIScrollViewDelayedTouchesBeganGestureRecognizer *_touchDelayGestureRecognizer;
    struct CGRect _initialBounds;
    BOOL _snapshotTimestampsEnabled;
    BOOL _clientUsesAutolayout;
    struct {
        unsigned int implementsPerformUpdateWithCompletionHandler:1;
        unsigned int implementsMarginInsets:1;
        unsigned int implementsActiveDisplayModeDidChange:1;
        unsigned int implementsDidBecomeForeground:1;
        unsigned int implementsVisibleFrameDidChange:1;
    } _contentProvidingViewControllerFlags;
    UIViewController<NCWidgetProvidingPrivate> *_contentProvidingViewController;
    long long _visibilityState;
    UIView *_contentView;
    NSString *_widgetIdentifier;
    NSString *_containerIdentifier;
    struct UIEdgeInsets _clientMarginInsets;
}

@property (nonatomic, getter=_clientMarginInsets, setter=_setClientMarginInsets:) struct UIEdgeInsets clientMarginInsets; // @synthesize clientMarginInsets=_clientMarginInsets;
@property (copy, nonatomic, getter=_containerIdentifier) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
@property (strong, nonatomic, getter=_contentProvidingViewController) UIViewController<NCWidgetProvidingPrivate> *contentProvidingViewController; // @synthesize contentProvidingViewController=_contentProvidingViewController;
@property (strong, nonatomic, getter=_contentView, setter=_setContentView:) UIView *contentView; // @synthesize contentView=_contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, getter=_visibilityState, setter=_setVisibilityState:) long long visibilityState; // @synthesize visibilityState=_visibilityState;
@property (copy, nonatomic, getter=_widgetIdentifier) NSString *widgetIdentifier; // @synthesize widgetIdentifier=_widgetIdentifier;

+ (id)_exportedInterface;
+ (void)_reduceTransparencyDidChange:(id)arg1;
+ (id)_remoteViewControllerInterface;
+ (void)initialize;
- (void).cxx_destruct;
- (void)__openTransactionForAppearanceCallWithState:(int)arg1 withIdentifier:(id)arg2;
- (void)__performUpdateWithReplyHandler:(CDUnknownBlockType)arg1;
- (void)__requestEncodedLayerTreeToURL:(id)arg1 withCodingImageFormat:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;
- (void)__setActiveDisplayMode:(long long)arg1;
- (void)__setMaximumSize:(struct CGSize)arg1 forDisplayMode:(long long)arg2;
- (void)__updateVisibilityState:(long long)arg1;
- (void)__updateVisibleFrame:(struct CGRect)arg1 withReplyHandler:(CDUnknownBlockType)arg2;
- (long long)_clientLargestSupportedDisplayMode;
- (void)_clientLargestSupportedDisplayModeDidChange;
- (double)_clientPreferredContentHeight;
- (double)_clientPreferredContentHeightPermittingAutolayout:(BOOL)arg1 didUseFittingSize:(BOOL *)arg2;
- (void)_closeTransactionWithAppearState:(int)arg1;
- (BOOL)_disableAutomaticKeyboardBehavior;
- (struct UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL *)arg2;
- (double)_effectiveHeightForRequestedHeight:(double)arg1;
- (void)_encodeLayerTreeToURL:(id)arg1 withCodingImageFormat:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;
- (void)_enqueueProxyRequest:(CDUnknownBlockType)arg1;
- (void)_notifyContentProvidingViewControllerOfActiveDisplayModeChange;
- (void)_performUpdateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_processInputItems:(id)arg1 initialActiveDisplayMode:(long long *)arg2;
- (void)_requestMarginInsets;
- (void)_requestPreferredViewHeight:(double)arg1;
- (void)_setActiveDisplayMode:(long long)arg1 unconditionallyNotifyingContentProvidingViewController:(BOOL)arg2;
- (void)_setContentProvidingViewController:(id)arg1;
- (void)_setMaximumWidth:(double)arg1 forDisplayMode:(long long)arg2;
- (void)_setVisibilityState:(long long)arg1 force:(BOOL)arg2;
- (BOOL)_setVisibleFrame:(struct CGRect)arg1;
- (BOOL)_shouldRemoveViewFromHierarchyOnDisappear;
- (id)_widgetExtensionContext;
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
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

