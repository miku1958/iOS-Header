//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray;

@protocol CTXPCServiceBaseInterface
- (void)getActiveContexts:(void (^)(CTXPCContexts *, NSError *))arg1;
- (void)getDescriptorsForDomain:(long long)arg1 completion:(void (^)(CTServiceDescriptorContainer *, NSError *))arg2;
- (void)getDualSimCapability:(void (^)(long long, NSError *))arg1;
- (void)getSimLessContexts:(void (^)(CTXPCSimLessContexts *, NSError *))arg1;
- (void)getSubscriptionInfo:(void (^)(CTXPCServiceSubscriptionInfo *, NSError *))arg1;
- (void)ping:(void (^)(NSError *))arg1;
- (void)registerForNotifications:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
@end

