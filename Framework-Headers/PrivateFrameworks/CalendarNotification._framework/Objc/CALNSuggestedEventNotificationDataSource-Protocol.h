//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarNotification/NSObject-Protocol.h>

@class CALNSuggestedEventNotificationInfo, NSArray, NSString;

@protocol CALNSuggestedEventNotificationDataSource <NSObject>
- (void)clearSuggestedEventNotificationWithSourceClientIdentifier:(NSString *)arg1;
- (void)confirmSuggestedEventWithSourceClientIdentifier:(NSString *)arg1;
- (void)deleteCanceledSuggestedEventWithSourceClientIdentifier:(NSString *)arg1;
- (NSArray *)fetchSuggestedEventNotificationObjectIDs;
- (CALNSuggestedEventNotificationInfo *)fetchSuggestedEventNotificationWithObjectID:(NSString *)arg1;
- (NSArray *)fetchSuggestedEventNotifications;
- (NSArray *)fetchSuggestedEventNotificationsWithSourceClientIdentifier:(NSString *)arg1;
- (void)ignoreSuggestedEventWithSourceClientIdentifier:(NSString *)arg1;
@end
