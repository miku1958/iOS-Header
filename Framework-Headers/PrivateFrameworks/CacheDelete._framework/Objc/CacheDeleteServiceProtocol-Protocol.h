//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary;

@protocol CacheDeleteServiceProtocol
- (void)serviceCallback:(NSDictionary *)arg1 replyBlock:(void (^)(NSDictionary *))arg2;
- (void)serviceCancelPurge:(void (^)(void))arg1;
- (void)serviceNotify:(NSDictionary *)arg1 replyBlock:(void (^)(void))arg2;
- (void)servicePeriodic:(int)arg1 info:(NSDictionary *)arg2 replyBlock:(void (^)(NSDictionary *))arg3;
- (void)servicePing:(void (^)(void))arg1;
- (void)servicePurge:(int)arg1 info:(NSDictionary *)arg2 replyBlock:(void (^)(NSDictionary *))arg3;
- (void)servicePurgeable:(int)arg1 info:(NSDictionary *)arg2 replyBlock:(void (^)(NSDictionary *))arg3;
@end

