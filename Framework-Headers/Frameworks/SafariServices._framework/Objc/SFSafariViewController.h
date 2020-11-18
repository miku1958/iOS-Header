//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SafariServices/SFBrowserRemoveViewControllerDelegate-Protocol.h>
#import <SafariServices/SFInteractiveDismissControllerDelegate-Protocol.h>
#import <SafariServices/_SFQueueingBrowserServiceViewControllerProxyDelegate-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, NSURL, SFBrowserRemoteViewController, SFInteractiveDismissController, _SFQueueingBrowserServiceViewControllerProxy, _UIAsyncInvocation, _WKActivatedElementInfo;
@protocol SFSafariViewControllerDelegate;

@interface SFSafariViewController : UIViewController <SFBrowserRemoveViewControllerDelegate, SFInteractiveDismissControllerDelegate, _SFQueueingBrowserServiceViewControllerProxyDelegate>
{
    SFBrowserRemoteViewController *_remoteViewController;
    _UIAsyncInvocation *_cancelViewServiceRequest;
    long long _preferredStatusBarStyle;
    BOOL _showingLinkPreview;
    NSArray *_previewActions;
    _WKActivatedElementInfo *_activatedElementInfo;
    NSArray *_customActivities;
    NSMutableDictionary *_activitiesMap;
    BOOL _swipeGestureEnabled;
    SFInteractiveDismissController *_interactiveDismissController;
    id<SFSafariViewControllerDelegate> _delegate;
    _SFQueueingBrowserServiceViewControllerProxy *_serviceProxy;
    NSURL *_initialURL;
}

@property (strong, nonatomic, setter=_setActivatedElementInfo:) _WKActivatedElementInfo *_activatedElementInfo;
@property (strong, nonatomic, setter=_setPreviewActions:) NSArray *_previewActions;
@property (nonatomic, setter=_setShowingLinkPreview:) BOOL _showingLinkPreview;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SFSafariViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSURL *initialURL; // @synthesize initialURL=_initialURL;
@property (readonly, nonatomic) _SFQueueingBrowserServiceViewControllerProxy *serviceProxy; // @synthesize serviceProxy=_serviceProxy;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addRemoteView;
- (void)_connectToService;
- (void)_forwardNotificationToViewService:(id)arg1;
- (void)_removeRemoteView;
- (void)_setEdgeSwipeDismissalEnabled:(BOOL)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 entersReaderIfAvailable:(BOOL)arg2;
- (void)interactiveDismissControllerDidBegin:(id)arg1;
- (void)interactiveDismissControllerDidCancel:(id)arg1;
- (void)interactiveDismissControllerDidEnd:(id)arg1;
- (void)loadView;
- (long long)preferredStatusBarStyle;
- (id)previewActions;
- (void)remoteViewController:(id)arg1 didFinishInitialLoad:(BOOL)arg2;
- (void)remoteViewController:(id)arg1 executeCustomActivityProxyID:(id)arg2;
- (void)remoteViewController:(id)arg1 fetchHostAppCustomActivitiesForURL:(id)arg2 title:(id)arg3;
- (void)remoteViewController:(id)arg1 setSwipeGestureEnabled:(BOOL)arg2;
- (void)remoteViewController:(id)arg1 viewServiceDidTerminateWithError:(id)arg2;
- (void)remoteViewController:(id)arg1 willUpdateStatusBarStyle:(long long)arg2;
- (void)remoteViewControllerDidLoadWebView:(id)arg1;
- (void)remoteViewControllerWillDismiss:(id)arg1;
- (void)serviceProxyWillQueueInvocation:(id)arg1;
- (void)setModalPresentationStyle:(long long)arg1;
- (void)setTransitioningDelegate:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

