//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <UserNotificationsUIKit/NCNotificationCustomContent-Protocol.h>
#import <UserNotificationsUIKit/_UNNotificationExtensionHostDelegate-Protocol.h>

@class NCMediaPlayPauseButton, NCNotificationAction, NCNotificationRequest, NSExtension, NSMutableArray, NSString, UIView, _UNNotificationExtensionHostViewController;
@protocol NCNotificationCustomContentDelegate, _UNNotificationExtensionRemoteInterface;

@interface NCNotificationExtensionContainerViewController : UIViewController <_UNNotificationExtensionHostDelegate, NCNotificationCustomContent>
{
    BOOL _userInteractionEnabled;
    BOOL _allowManualDismiss;
    id<NCNotificationCustomContentDelegate> _delegate;
    NSExtension *_extension;
    NCNotificationRequest *_notificationRequest;
    _UNNotificationExtensionHostViewController *_extensionViewController;
    id<_UNNotificationExtensionRemoteInterface> _remoteService;
    UIView *_blockingView;
    NCMediaPlayPauseButton *_mediaPlayPauseButton;
    NSMutableArray *_queuedRequests;
}

@property (nonatomic) BOOL allowManualDismiss; // @synthesize allowManualDismiss=_allowManualDismiss;
@property (strong, nonatomic) UIView *blockingView; // @synthesize blockingView=_blockingView;
@property (readonly, nonatomic) NSString *contentExtensionIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<NCNotificationCustomContentDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property (strong, nonatomic) _UNNotificationExtensionHostViewController *extensionViewController; // @synthesize extensionViewController=_extensionViewController;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NCMediaPlayPauseButton *mediaPlayPauseButton; // @synthesize mediaPlayPauseButton=_mediaPlayPauseButton;
@property (strong, nonatomic) NCNotificationRequest *notificationRequest; // @synthesize notificationRequest=_notificationRequest;
@property (weak, nonatomic) NCNotificationAction *presentationSourceAction;
@property (strong, nonatomic) NSMutableArray *queuedRequests; // @synthesize queuedRequests=_queuedRequests;
@property (strong, nonatomic) id<_UNNotificationExtensionRemoteInterface> remoteService; // @synthesize remoteService=_remoteService;
@property (readonly) Class superclass;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled; // @synthesize userInteractionEnabled=_userInteractionEnabled;

- (void).cxx_destruct;
- (void)_addExtensionViewFromViewController:(id)arg1;
- (double)_contentHeightForWidth:(double)arg1;
- (void)_flushQueuedRequests;
- (void)_loadViewControllerForExtension:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_mediaPlayPauseButtonTapped:(id)arg1;
- (id)_requestActionForActionIdentifier:(id)arg1;
- (id)_responseForAction:(id)arg1 notification:(id)arg2 response:(id)arg3;
- (void)_setupExtensionViewController:(id)arg1;
- (void)_setupMediaButton;
- (void)_setupRemoteServiceInterface:(id)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canResignFirstResponder;
- (unsigned long long)customContentLocation;
- (void)dealloc;
- (BOOL)defaultContentHidden;
- (void)didReceiveNotificationRequest:(id)arg1;
- (id)initWithExtension:(id)arg1 forNotificationRequest:(id)arg2;
- (void)loadAudioAccessoryView;
- (void)loadExtension;
- (void)notificationHost:(id)arg1 extensionDidCompleteResponse:(id)arg2 withOption:(unsigned long long)arg3;
- (void)notificationHostExtension:(id)arg1 audioAccessoryViewLayerContextId:(unsigned int)arg2;
- (void)notificationHostExtension:(id)arg1 setDismissEnabled:(BOOL)arg2;
- (void)notificationHostExtensionDidUpdateControls:(id)arg1;
- (void)notificationHostExtensionMediaPlayingDidPause:(id)arg1;
- (void)notificationHostExtensionMediaPlayingDidStart:(id)arg1;
- (void)notificationHostExtensionRequestsDismiss:(id)arg1;
- (BOOL)performAction:(id)arg1 forNotification:(id)arg2;
- (BOOL)performAction:(id)arg1 forNotification:(id)arg2 withUserInfo:(id)arg3;
- (void)playAudioMessage;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (BOOL)resignFirstResponder;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
