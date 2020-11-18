//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <UserNotificationsUIKit/NCNotificationCustomContent-Protocol.h>
#import <UserNotificationsUIKit/_UNNotificationExtensionHostDelegate-Protocol.h>

@class NCMediaPlayPauseButton, NCNotificationAction, NCNotificationRequest, NSMutableArray, NSString, UIView, _UNNotificationExtensionHostViewController;
@protocol NCNotificationCustomContentDelegate;

@interface NCNotificationExtensionContainerViewController : UIViewController <_UNNotificationExtensionHostDelegate, NCNotificationCustomContent>
{
    BOOL _allowManualDismiss;
    BOOL _defaultContentHidden;
    BOOL _overridesDefaultTitle;
    BOOL _userInteractionEnabled;
    id<NCNotificationCustomContentDelegate> _delegate;
    NSString *_extensionIdentifier;
    double _contentSizeRatio;
    NCNotificationRequest *_notificationRequest;
    _UNNotificationExtensionHostViewController *_extensionViewController;
    UIView *_blockingView;
    NCMediaPlayPauseButton *_mediaPlayPauseButton;
    NSMutableArray *_queuedRequests;
    NSMutableArray *_updatedActions;
}

@property (nonatomic) BOOL allowManualDismiss; // @synthesize allowManualDismiss=_allowManualDismiss;
@property (strong, nonatomic) UIView *blockingView; // @synthesize blockingView=_blockingView;
@property (readonly, nonatomic) NSString *contentExtensionIdentifier;
@property (nonatomic) double contentSizeRatio; // @synthesize contentSizeRatio=_contentSizeRatio;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL defaultContentHidden; // @synthesize defaultContentHidden=_defaultContentHidden;
@property (weak, nonatomic) id<NCNotificationCustomContentDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSString *extensionIdentifier; // @synthesize extensionIdentifier=_extensionIdentifier;
@property (strong, nonatomic) _UNNotificationExtensionHostViewController *extensionViewController; // @synthesize extensionViewController=_extensionViewController;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NCMediaPlayPauseButton *mediaPlayPauseButton; // @synthesize mediaPlayPauseButton=_mediaPlayPauseButton;
@property (strong, nonatomic) NCNotificationRequest *notificationRequest; // @synthesize notificationRequest=_notificationRequest;
@property (nonatomic) BOOL overridesDefaultTitle; // @synthesize overridesDefaultTitle=_overridesDefaultTitle;
@property (weak, nonatomic) NCNotificationAction *presentationSourceAction;
@property (strong, nonatomic) NSMutableArray *queuedRequests; // @synthesize queuedRequests=_queuedRequests;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title;
@property (strong, nonatomic) NSMutableArray *updatedActions; // @synthesize updatedActions=_updatedActions;
@property (nonatomic) BOOL userInteractionEnabled; // @synthesize userInteractionEnabled=_userInteractionEnabled;

- (void).cxx_destruct;
- (void)_addExtensionViewFromViewController:(id)arg1;
- (double)_contentHeightForWidth:(double)arg1;
- (void)_flushQueuedRequests;
- (void)_loadExtensionViewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_mediaPlayPauseButtonTapped:(id)arg1;
- (id)_requestActionForActionIdentifier:(id)arg1;
- (id)_responseForAction:(id)arg1 notification:(id)arg2 response:(id)arg3;
- (void)_setupExtensionViewController:(id)arg1;
- (void)_setupMediaButton;
- (void)_setupRemoteServiceInterface:(id)arg1;
- (void)_teardownExtension;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canResignFirstResponder;
- (id)cancelTouches;
- (unsigned long long)customContentLocation;
- (void)dealloc;
- (BOOL)didReceiveNotificationRequest:(id)arg1;
- (id)initWithExtension:(id)arg1 forNotificationRequest:(id)arg2;
- (void)loadAudioAccessoryView;
- (void)notificationHost:(id)arg1 extensionDidCompleteResponse:(id)arg2 withOption:(unsigned long long)arg3;
- (void)notificationHostExtension:(id)arg1 audioAccessoryViewLayerContextId:(unsigned int)arg2;
- (void)notificationHostExtension:(id)arg1 setDismissEnabled:(BOOL)arg2;
- (void)notificationHostExtension:(id)arg1 setTitle:(id)arg2;
- (void)notificationHostExtension:(id)arg1 setUserNotificationActions:(id)arg2;
- (void)notificationHostExtensionDidUpdateControls:(id)arg1;
- (void)notificationHostExtensionMediaPlayingDidPause:(id)arg1;
- (void)notificationHostExtensionMediaPlayingDidStart:(id)arg1;
- (void)notificationHostExtensionRequestsDefaultAction:(id)arg1;
- (void)notificationHostExtensionRequestsDismiss:(id)arg1;
- (BOOL)performAction:(id)arg1 forNotification:(id)arg2;
- (BOOL)performAction:(id)arg1 forNotification:(id)arg2 withUserInfo:(id)arg3;
- (void)playAudioMessage;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)preserveInputViews;
- (id)remoteService;
- (BOOL)resignFirstResponder;
- (BOOL)restoreInputViews;
- (void)setTitle:(id)arg1;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end

