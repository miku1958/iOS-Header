//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class UNNotification, UNNotificationResponse;

@protocol _UNNotificationExtensionRemoteInterface
- (void)_didReceiveNotification:(UNNotification *)arg1;
- (void)_didReceiveNotificationResponse:(UNNotificationResponse *)arg1;
- (void)_loadAudioAccessoryViewForNotification:(UNNotification *)arg1;
- (void)_mediaPause;
- (void)_mediaPlay;
- (void)_preserveInputViews;
- (void)_restoreInputViews;
- (void)_updateMediaPlayPauseButton;
@end

