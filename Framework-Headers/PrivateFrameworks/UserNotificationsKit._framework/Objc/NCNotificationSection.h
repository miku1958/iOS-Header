//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface NCNotificationSection : NSObject
{
    NSMutableDictionary *_coalescedNotifications;
}

@property (strong, nonatomic) NSMutableDictionary *coalescedNotifications; // @synthesize coalescedNotifications=_coalescedNotifications;
@property (readonly, nonatomic) unsigned long long notificationsCount;

- (void).cxx_destruct;
- (id)addNotificationRequest:(id)arg1;
- (id)coalescedNotificationForThreadIdentifier:(id)arg1;
- (id)init;
- (id)removeNotificationRequest:(id)arg1;
- (id)replaceNotificationRequest:(id)arg1;

@end
