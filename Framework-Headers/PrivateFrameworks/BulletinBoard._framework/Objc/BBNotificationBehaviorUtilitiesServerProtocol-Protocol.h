//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BulletinBoard/NSObject-Protocol.h>

@class NSString;
@protocol BBNotificationBehaviorUtilitiesClientProtocol;

@protocol BBNotificationBehaviorUtilitiesServerProtocol <NSObject>
- (void)getShouldPresentNotificationOfType:(int)arg1 fromSenderWithDestinationID:(NSString *)arg2 handler:(void (^)(NSNumber *, NSError *))arg3;
- (void)setActiveBehaviorOverrideChangeUpdatesEnabled:(BOOL)arg1 forClient:(id<BBNotificationBehaviorUtilitiesClientProtocol>)arg2;
- (void)setNotificationPresentationFilteringStateChangeUpdatesEnabled:(BOOL)arg1 forClient:(id<BBNotificationBehaviorUtilitiesClientProtocol>)arg2;
@end
