//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/NSObject-Protocol.h>

@class HKBadge, UNNotificationRequest;

@protocol HKNotificationStoreServer <NSObject>
- (void)remote_fetchBadgeForDomain:(long long)arg1 completion:(void (^)(HKBadge *, NSError *))arg2;
- (void)remote_postCompanionUserNotificationOfType:(long long)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)remote_postNotificationWithRequest:(UNNotificationRequest *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)remote_setBadge:(HKBadge *)arg1 forDomain:(long long)arg2 completion:(void (^)(BOOL, NSError *))arg3;
@end

