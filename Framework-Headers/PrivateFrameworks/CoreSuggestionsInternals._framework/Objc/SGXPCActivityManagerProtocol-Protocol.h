//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSObject;
@protocol OS_xpc_object;

@protocol SGXPCActivityManagerProtocol
- (NSObject<OS_xpc_object> *)activityForActivityId:(int)arg1;
- (NSObject<OS_xpc_object> *)copyCriteria:(NSObject<OS_xpc_object> *)arg1;
- (long long)getState:(NSObject<OS_xpc_object> *)arg1;
- (void)registerActivitiesWithSystem;
- (void)registerForActivity:(int)arg1 handler:(void (^)(NSObject<OS_xpc_object> *))arg2;
- (void)setCriteria:(NSObject<OS_xpc_object> *)arg1 criteria:(NSObject<OS_xpc_object> *)arg2 forActivity:(int)arg3;
- (BOOL)setState:(NSObject<OS_xpc_object> *)arg1 state:(long long)arg2;
- (BOOL)shouldDefer:(NSObject<OS_xpc_object> *)arg1;
@end

