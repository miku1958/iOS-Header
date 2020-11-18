//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CTXPCServiceSubscriptionContext, NSNumber, NSString;

@protocol CTXPCServiceSIMToolkitInterface
- (void)cancelSIMToolkitUSSDSessionForContext:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSError *))arg2;
- (void)getSIMToolkitListItemsForContext:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(CTSIMToolkitItemList *, NSError *))arg2;
- (void)getSIMToolkitMenuForContext:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(CTSIMToolkitMenu *, NSError *))arg2;
- (void)getSIMToolkitUSSDStringForContext:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSString *, BOOL, NSError *))arg2;
- (void)selectSIMToolkitListItemForContext:(CTXPCServiceSubscriptionContext *)arg1 session:(NSNumber *)arg2 response:(NSString *)arg3 index:(NSNumber *)arg4 completion:(void (^)(NSError *))arg5;
- (void)selectSIMToolkitMenuItemForContext:(CTXPCServiceSubscriptionContext *)arg1 index:(NSNumber *)arg2 completion:(void (^)(NSError *))arg3;
- (void)sendSIMToolkitBooleanResponseForContext:(CTXPCServiceSubscriptionContext *)arg1 session:(NSNumber *)arg2 response:(NSString *)arg3 yesNo:(BOOL)arg4 completion:(void (^)(NSError *))arg5;
- (void)sendSIMToolkitDisplayReadyForContext:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSError *))arg2;
- (void)sendSIMToolkitResponseForContext:(CTXPCServiceSubscriptionContext *)arg1 session:(NSNumber *)arg2 response:(NSString *)arg3 completion:(void (^)(NSError *))arg4;
- (void)sendSIMToolkitStringResponseForContext:(CTXPCServiceSubscriptionContext *)arg1 session:(NSNumber *)arg2 response:(NSString *)arg3 string:(NSString *)arg4 completion:(void (^)(NSError *))arg5;
- (void)sendSIMToolkitUSSDResponseForContext:(CTXPCServiceSubscriptionContext *)arg1 response:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)sendSIMToolkitUserActivityForContext:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSError *))arg2;
@end
