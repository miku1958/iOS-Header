//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSPredicate, NSString, _DKQuery;

@protocol _DKDaemonInterface
- (void)confirmDatabaseConnectionWithReply:(void (^)(BOOL, NSError *))arg1;
- (void)deleteAllEventsInEventStreamNamed:(NSString *)arg1 reply:(void (^)(unsigned long long, NSError *))arg2;
- (void)deleteAllEventsMatchingPredicate:(NSPredicate *)arg1 reply:(void (^)(unsigned long long, NSError *))arg2;
- (void)deleteObjects:(NSArray *)arg1 reply:(void (^)(BOOL, NSError *))arg2;
- (void)deleteRemoteState:(void (^)(BOOL, NSError *))arg1;
- (void)deviceUUIDWithReply:(void (^)(NSObject *, NSError *))arg1;
- (void)executeQuery:(_DKQuery *)arg1 reply:(void (^)(NSObject *, NSError *))arg2;
- (void)saveObjects:(NSArray *)arg1 reply:(void (^)(BOOL, NSError *))arg2;
- (void)sourceDeviceIdentityWithReply:(void (^)(NSObject *, NSError *))arg1;
- (void)synchronizeWithReply:(void (^)(BOOL, NSError *))arg1;
- (void)synchronizeWithUrgency:(unsigned long long)arg1 client:(NSString *)arg2 reply:(void (^)(BOOL, NSError *))arg3;
@end

