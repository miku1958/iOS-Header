//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <UserNotificationsUI/_UNNotificationExtensionHostInterface-Protocol.h>

@class UIColor;
@protocol _UNNotificationExtensionHostDelegate;

@interface _UNNotificationExtensionHostViewController : _UIRemoteViewController <_UNNotificationExtensionHostInterface>
{
    BOOL _wantsToBecomeFirstResponder;
    BOOL _wantsToReceiveActionResponses;
    BOOL _dismissEnabled;
    id<_UNNotificationExtensionHostDelegate> _delegate;
    unsigned long long _playPauseMediaButtonType;
    UIColor *_playPauseMediaButtonColor;
    struct CGRect _playPauseMediaButtonFrame;
}

@property (weak, nonatomic) id<_UNNotificationExtensionHostDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic, getter=isDismissEnabled) BOOL dismissEnabled; // @synthesize dismissEnabled=_dismissEnabled;
@property (strong, nonatomic) UIColor *playPauseMediaButtonColor; // @synthesize playPauseMediaButtonColor=_playPauseMediaButtonColor;
@property (nonatomic) struct CGRect playPauseMediaButtonFrame; // @synthesize playPauseMediaButtonFrame=_playPauseMediaButtonFrame;
@property (nonatomic) unsigned long long playPauseMediaButtonType; // @synthesize playPauseMediaButtonType=_playPauseMediaButtonType;
@property (nonatomic) BOOL wantsToBecomeFirstResponder; // @synthesize wantsToBecomeFirstResponder=_wantsToBecomeFirstResponder;
@property (nonatomic) BOOL wantsToReceiveActionResponses; // @synthesize wantsToReceiveActionResponses=_wantsToReceiveActionResponses;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
- (void).cxx_destruct;
- (void)_extensionAudioAccessoryViewContextId:(unsigned int)arg1;
- (void)_extensionDidCompleteNotificationResponse:(id)arg1 withOption:(unsigned long long)arg2;
- (void)_extensionDidUpdateControls;
- (void)_extensionMediaPlayingPaused;
- (void)_extensionMediaPlayingStarted;
- (void)_extensionRequestsDismiss;
- (void)_extensionRequestsToSetDismissEnabled:(BOOL)arg1;
- (void)_extensionSetPlayPauseMediaButtonColor:(id)arg1;
- (void)_extensionSetPlayPauseMediaButtonFrame:(struct CGRect)arg1;
- (void)_extensionSetPlayPauseMediaButtonType:(unsigned long long)arg1;
- (void)_extensionSetTitle:(id)arg1;
- (void)_extensionWantsToBecomeFirstResponder:(BOOL)arg1;
- (void)_extensionWantsToReceiveActionResponses:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

