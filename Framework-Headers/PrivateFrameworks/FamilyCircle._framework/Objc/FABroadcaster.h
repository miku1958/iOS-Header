//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FABroadcaster : NSObject
{
}

+ (void)_broadcastNotificationName:(id)arg1 userInfo:(id)arg2;
+ (void)broadcastFamilyChangedNotification;
+ (void)broadcastRemoteUIWillDismissNotification:(id)arg1;
+ (void)broadcastServicesChangedNotification;

@end

