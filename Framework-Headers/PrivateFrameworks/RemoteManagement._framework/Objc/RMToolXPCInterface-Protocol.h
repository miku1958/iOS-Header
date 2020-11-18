//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSSet, RMUserNotificationContext;

@protocol RMToolXPCInterface
- (void)fetchFamilyStatus:(void (^)(NSDictionary *))arg1;
- (void)gatherDataWithFullDetails:(BOOL)arg1 withCompletion:(void (^)(id, NSError *))arg2;
- (void)postNotificationWithContext:(RMUserNotificationContext *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)postWeeklyReportNotificationWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)removeNotificationWithContext:(RMUserNotificationContext *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)requeryFamilyStatus:(void (^)(NSDictionary *, NSError *))arg1;
- (void)rollupUsageData:(void (^)(NSError *))arg1;
- (void)setInstalledApps:(NSSet *)arg1 completion:(void (^)(id, NSError *))arg2;
- (void)setScreenTimeEnabled:(BOOL)arg1 withCompletion:(void (^)(NSError *))arg2;
@end

