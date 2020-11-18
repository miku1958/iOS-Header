//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <UserNotificationsUI/_UNNotificationContentExtensionLegacyDelegate-Protocol.h>
#import <UserNotificationsUI/_UNNotificationExtensionRemoteInterface-Protocol.h>

@class NSString, UIScrollViewDelayedTouchesBeganGestureRecognizer;
@protocol UNNotificationContentExtension, _UNNotificationExtensionHostInterface;

@interface _UNNotificationExtensionRemoteViewController : UIViewController <_UNNotificationContentExtensionLegacyDelegate, _UNNotificationExtensionRemoteInterface>
{
    struct atomic_flag _invalidationOnceFlag;
    UIScrollViewDelayedTouchesBeganGestureRecognizer *_touchDelayGestureRecognizer;
    BOOL _didCheckActionResponseDelegate;
    UIViewController<UNNotificationContentExtension> *_extensionViewController;
    id<_UNNotificationExtensionHostInterface> _hostService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didCheckActionResponseDelegate; // @synthesize didCheckActionResponseDelegate=_didCheckActionResponseDelegate;
@property (strong, nonatomic) UIViewController<UNNotificationContentExtension> *extensionViewController; // @synthesize extensionViewController=_extensionViewController;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) id<_UNNotificationExtensionHostInterface> hostService; // @synthesize hostService=_hostService;
@property (readonly) Class superclass;

+ (id)_exportedInterface;
+ (BOOL)_isSecureForRemoteViewService;
+ (id)_remoteViewControllerInterface;
- (void).cxx_destruct;
- (void)_didReceiveNotification:(id)arg1;
- (void)_didReceiveNotificationResponse:(id)arg1;
- (id)_extensionBundleIdentifier;
- (void)_invalidateExtensionContext;
- (void)_loadAudioAccessoryViewForNotification:(id)arg1;
- (void)_mediaPause;
- (void)_mediaPlay;
- (void)_performSelectorOnExtension:(SEL)arg1;
- (void)_preserveInputViews;
- (void)_restoreInputViews;
- (void)_setupExtensionViewController:(id)arg1;
- (BOOL)_shouldForwardSystemLayoutFittingSizeChanges;
- (void)_updateMediaPlayPauseButton;
- (void)_willAppearInRemoteViewController:(id)arg1;
- (void)addChildViewController:(id)arg1;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)dealloc;
- (void)delayed:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)notificationContentExtension:(id)arg1 setDismissEnabled:(BOOL)arg2;
- (void)notificationContentExtensionDefaultAction:(id)arg1;
- (void)notificationContentExtensionDismiss:(id)arg1;
- (id)notificationExtensionContext;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)willMoveToParentViewController:(id)arg1;

@end

