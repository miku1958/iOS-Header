//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WatchKit/WKInterfaceController.h>

@interface WKUserNotificationInterfaceController : WKInterfaceController
{
}

- (void)didReceiveLocalNotification:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)didReceiveRemoteNotification:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)init;
- (id)suggestionsForResponseToActionWithIdentifier:(id)arg1 forLocalNotification:(id)arg2 inputLanguage:(id)arg3;
- (id)suggestionsForResponseToActionWithIdentifier:(id)arg1 forRemoteNotification:(id)arg2 inputLanguage:(id)arg3;

@end
