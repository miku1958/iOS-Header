//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CTCellularPlanProvisioningRequest, CTXPCServiceSubscriptionContext, NSArray, NSString;

@protocol CTXPCServiceCellularPlanManagerInterface
- (void)addPlanWith:(CTXPCServiceSubscriptionContext *)arg1 request:(CTCellularPlanProvisioningRequest *)arg2 appName:(NSString *)arg3 completionHandler:(void (^)(unsigned long long, NSError *))arg4;
- (void)supportsPlanProvisioning:(CTXPCServiceSubscriptionContext *)arg1 carrierDescriptors:(NSArray *)arg2 smdpUrl:(NSString *)arg3 iccidPrefix:(NSString *)arg4 completionHandler:(void (^)(BOOL))arg5;
@end

