//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class UIColor, UNNotificationResponse;

@protocol _UNNotificationExtensionHostInterface
- (void)_extensionAudioAccessoryViewContextId:(unsigned int)arg1;
- (void)_extensionDidCompleteNotificationResponse:(UNNotificationResponse *)arg1 withOption:(unsigned long long)arg2;
- (void)_extensionDidUpdateControls;
- (void)_extensionMediaPlayingPaused;
- (void)_extensionMediaPlayingStarted;
- (void)_extensionRequestsDismiss;
- (void)_extensionRequestsToSetDismissEnabled:(BOOL)arg1;
- (void)_extensionSetPlayPauseMediaButtonColor:(UIColor *)arg1;
- (void)_extensionSetPlayPauseMediaButtonFrame:(struct CGRect)arg1;
- (void)_extensionSetPlayPauseMediaButtonType:(unsigned long long)arg1;
- (void)_extensionWantsToBecomeFirstResponder:(BOOL)arg1;
- (void)_extensionWantsToReceiveActionResponses:(BOOL)arg1;
@end

