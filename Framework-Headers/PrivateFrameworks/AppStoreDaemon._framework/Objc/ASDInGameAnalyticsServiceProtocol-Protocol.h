//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;

@protocol ASDInGameAnalyticsServiceProtocol
- (void)gamePlayDidBeginWithCompletionHandler:(void (^)(NSString *, NSError *))arg1;
- (void)gamePlayDidEndWithReason:(long long)arg1 andSessionID:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)heartBeatForSessionID:(NSString *)arg1 withCompletionHandler:(void (^)(NSError *))arg2;
@end
