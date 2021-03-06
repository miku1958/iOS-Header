//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CTXPCServiceSubscriptionContext, NSDictionary, NSString;

@protocol CTXPCServiceDeviceManagementInterface
- (void)deletePersonalWallet:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)getConfiguredApns:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)getUIConfiguredApns:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)listPersonalWallets:(void (^)(NSArray *, NSError *))arg1;
- (void)renamePersonalWallet:(NSString *)arg1 to:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)resetUIConfiguredApns:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSError *))arg2;
- (void)setUIConfiguredApns:(CTXPCServiceSubscriptionContext *)arg1 apns:(NSDictionary *)arg2 completion:(void (^)(NSError *))arg3;
@end

