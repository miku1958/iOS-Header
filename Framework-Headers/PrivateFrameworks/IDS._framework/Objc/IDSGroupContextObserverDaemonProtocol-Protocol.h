//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class ENGroup;

@protocol IDSGroupContextObserverDaemonProtocol
- (void)didCacheGroup:(ENGroup *)arg1 completion:(void (^)(NSError *))arg2;
- (void)didCreateGroup:(ENGroup *)arg1 completion:(void (^)(NSError *))arg2;
- (void)didReceiveDecryptionFailureForGroup:(ENGroup *)arg1 completion:(void (^)(NSError *))arg2;
- (void)didReceiveRegistrationIdentityUpdateWithCompletion:(void (^)(NSError *))arg1;
- (void)didUpdateGroup:(ENGroup *)arg1 withNewGroup:(ENGroup *)arg2 completion:(void (^)(NSError *))arg3;
@end

