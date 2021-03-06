//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CellularPlanManager/NSObject-Protocol.h>

@class CTCellularPlanCarrierItem, CTCellularPlanItem, CTCellularPlanPendingTransfer, CTDanglingPlanItem, CTUserLabel, CTXPCServiceSubscriptionContext, NSArray, NSData, NSDictionary, NSNumber, NSString;

@protocol CTCellularPlanClient <NSObject>
- (void)activatePlanPendingTransfer:(CTCellularPlanPendingTransfer *)arg1 completion:(void (^)(BOOL, NSString *, NSDictionary *, NSError *))arg2;
- (void)addNewAddonPlanDuringBuddy:(BOOL)arg1 userConsent:(long long)arg2 completion:(void (^)(NSError *))arg3;
- (void)addNewPlanWithAddress:(NSString *)arg1 matchingId:(NSString *)arg2 oid:(NSString *)arg3 confirmationCode:(NSString *)arg4 triggerType:(long long)arg5 userConsent:(long long)arg6 completion:(void (^)(NSError *))arg7;
- (void)addNewPlanWithCardData:(NSString *)arg1 confirmationCode:(NSString *)arg2 triggerType:(long long)arg3 userConsent:(long long)arg4 completion:(void (^)(NSError *))arg5;
- (void)addNewPlanWithCarrierItem:(CTCellularPlanCarrierItem *)arg1 triggerType:(long long)arg2 userConsent:(long long)arg3 completion:(void (^)(NSError *))arg4;
- (void)addNewPlanWithFlowType:(unsigned long long)arg1 completion:(void (^)(NSError *))arg2;
- (void)addNewPlanWithUserInWebsheetWithUserConsent:(long long)arg1 completion:(void (^)(NSError *))arg2;
- (void)addNewRemotePlan:(BOOL)arg1 withCSN:(NSString *)arg2 withContext:(CTXPCServiceSubscriptionContext *)arg3 userConsent:(long long)arg4 completion:(void (^)(NSError *))arg5;
- (void)addNewRemotePlanWithAddress:(NSString *)arg1 matchingId:(NSString *)arg2 oid:(NSString *)arg3 confirmationCode:(NSString *)arg4 isPairing:(BOOL)arg5 withCSN:(NSString *)arg6 withContext:(CTXPCServiceSubscriptionContext *)arg7 userConsent:(long long)arg8 completion:(void (^)(NSError *))arg9;
- (void)addNewRemotePlanWithCardData:(NSString *)arg1 confirmationCode:(NSString *)arg2 isPairing:(BOOL)arg3 withCSN:(NSString *)arg4 withContext:(CTXPCServiceSubscriptionContext *)arg5 userConsent:(long long)arg6 completion:(void (^)(NSError *))arg7;
- (void)cancelPlanActivation:(CTCellularPlanPendingTransfer *)arg1 completion:(void (^)(NSError *))arg2;
- (void)carrierHandoffToken:(void (^)(NSString *, NSString *, NSError *))arg1;
- (void)carrierItemsShouldUpdate:(BOOL)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)danglingPlanItemsShouldUpdate:(BOOL)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)deleteAllRemoteProfiles;
- (void)deletePlanPendingTransfer:(CTCellularPlanPendingTransfer *)arg1 completion:(void (^)(NSError *))arg2;
- (void)deleteRemoteProfile:(NSString *)arg1;
- (void)didCancelRemotePlan;
- (void)didDeletePlanItem:(CTCellularPlanItem *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)didDeleteRemotePlanItem:(CTCellularPlanItem *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)didPurchasePlanForCsn:(NSData *)arg1 iccid:(NSString *)arg2 profileServer:(NSString *)arg3;
- (void)didPurchasePlanWithIccid:(NSString *)arg1 downloadProfile:(BOOL)arg2;
- (void)didPurchaseRemotePlanForEid:(NSString *)arg1 imei:(NSString *)arg2 meid:(NSString *)arg3 iccid:(NSString *)arg4 alternateSmdpFqdn:(NSString *)arg5 completion:(void (^)(BOOL))arg6;
- (void)didSelectPlanForData:(CTCellularPlanItem *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)didSelectPlanForDefaultVoice:(CTCellularPlanItem *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)didSelectPlanItem:(CTCellularPlanItem *)arg1 enable:(BOOL)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)didSelectPlansForIMessage:(NSArray *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)didSelectRemotePlanItem:(CTCellularPlanItem *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)didTransferPlanForCsn:(NSData *)arg1 iccid:(NSString *)arg2 srcIccid:(NSString *)arg3 profileServer:(NSString *)arg4 state:(NSString *)arg5;
- (void)enableVinylFlowTypeOverride:(BOOL)arg1;
- (void)eraseAllPlansWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)eraseAllRemotePlansWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)expirePlan;
- (void)fetchNewProfilesWithCompletion:(void (^)(BOOL, NSError *))arg1 additionalParameters:(NSDictionary *)arg2;
- (void)fetchRemoteProfiles:(NSString *)arg1;
- (void)finishProvisioningWithCompletion:(void (^)(BOOL))arg1;
- (void)finishRemoteProvisioningWithCompletion:(void (^)(BOOL))arg1;
- (void)getAutoPlanSelectionWithCompletion:(void (^)(BOOL))arg1;
- (void)getDeviceInfo:(void (^)(NSDictionary *))arg1;
- (void)getESimServerURL:(void (^)(NSString *))arg1;
- (void)getEnableVinylFlowTypeOverride:(void (^)(BOOL))arg1;
- (void)getIMEIPrefix:(void (^)(NSString *))arg1;
- (void)getPhoneAuthTokenWithMessage:(NSDictionary *)arg1 completion:(void (^)(NSString *, BOOL))arg2;
- (void)getPlansPendingTransferWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)getPredefinedLabels:(void (^)(NSArray *, NSError *))arg1;
- (void)getRemoteInfo:(void (^)(NSDictionary *, NSError *))arg1;
- (void)getRoamingSignupOverrideWithCompletion:(void (^)(BOOL))arg1;
- (void)getSelectedEnv:(void (^)(long long))arg1;
- (void)getSelectedProxy:(void (^)(long long))arg1;
- (void)getShortLabelsForLabels:(NSArray *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)getSkipEligibilityCheck:(void (^)(BOOL))arg1;
- (void)getSubscriptionContextUUIDforPlan:(NSString *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)getSupportedFlowTypes:(void (^)(unsigned long long, NSError *))arg1;
- (void)installPendingRemotePlan:(CTCellularPlanItem *)arg1 completion:(void (^)(NSError *))arg2;
- (void)isAddButtonEnabled:(void (^)(BOOL))arg1;
- (void)isNewDataPlanCapable:(void (^)(BOOL))arg1;
- (void)isRemotePlanCapableWithContext:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(BOOL))arg2;
- (void)latitudeLongitudeOverride:(void (^)(double, double))arg1;
- (void)launchDataActivationNextWithUrl:(NSString *)arg1;
- (void)launchSequoia;
- (void)manageAccountForPlan:(CTCellularPlanItem *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)manageAccountForRemotePlan:(CTCellularPlanItem *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)mccMncOverride:(void (^)(long long, long long))arg1;
- (void)openInternalUrlId:(long long)arg1;
- (void)pendingReleaseRemotePlan;
- (void)ping;
- (void)planItemsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)planLaunchInfoWithCompletion:(void (^)(NSString *, NSDictionary *, NSError *))arg1;
- (void)registerHasNewProfileCompletion:(void (^)(BOOL, BOOL))arg1;
- (void)remapSimLabel:(CTDanglingPlanItem *)arg1 to:(CTCellularPlanItem *)arg2 completion:(void (^)(NSError *))arg3;
- (void)remotePlanItemsWithUpdateFetch:(BOOL)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)remotePlanLaunchInfoForEid:(NSData *)arg1 completion:(void (^)(NSString *, NSDictionary *, NSError *))arg2;
- (void)remoteUserDidProvideResponse:(BOOL)arg1 confirmationCode:(NSString *)arg2 plan:(CTCellularPlanItem *)arg3 completion:(void (^)(BOOL, NSError *))arg4;
- (void)resolveSimLabel:(CTDanglingPlanItem *)arg1 completion:(void (^)(NSError *))arg2;
- (void)resumePlanProvisioning:(BOOL)arg1 userConsent:(long long)arg2 completion:(void (^)(NSError *))arg3;
- (void)retrieveRequestSettings:(void (^)(NSDictionary *, NSDictionary *, NSDictionary *))arg1;
- (void)selectRemoteProfile:(NSString *)arg1;
- (void)setAutoPlanSelection:(BOOL)arg1;
- (void)setESimServerURL:(NSString *)arg1;
- (void)setIMEIPrefix:(NSString *)arg1;
- (void)setLabelForPlan:(CTCellularPlanItem *)arg1 label:(CTUserLabel *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)setLatitude:(NSNumber *)arg1 andLongitude:(NSNumber *)arg2;
- (void)setMcc:(long long)arg1 andMnc:(long long)arg2;
- (void)setRoamingSignupOverride:(BOOL)arg1;
- (void)setSelectedEnv:(long long)arg1;
- (void)setSelectedProxy:(long long)arg1;
- (void)setSkipEligibilityCheck:(BOOL)arg1;
- (void)setUseNewCellularPlanUI:(BOOL)arg1;
- (void)setUserInPurchaseFlow:(BOOL)arg1;
- (void)shouldShowAddNewRemotePlanWithContext:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(BOOL, unsigned long long, NSString *, NSError *))arg2;
- (void)shouldShowPlanList:(void (^)(BOOL))arg1;
- (void)shouldShowPlanSetup:(void (^)(BOOL))arg1;
- (void)showUiIgnoringActivationFlags:(BOOL)arg1;
- (void)signIdMapForSessionId:(NSString *)arg1 locationRequired:(BOOL)arg2 withCompletion:(void (^)(NSString *, NSError *))arg3;
- (void)startProvisioningWithCompletion:(void (^)(BOOL))arg1;
- (void)startRemoteProvisioningWithCompletion:(void (^)(BOOL))arg1;
- (void)triggerAddNewDataPlan:(void (^)(NSError *))arg1;
- (void)userDidProvideResponse:(long long)arg1 confirmationCode:(NSString *)arg2 plan:(CTCellularPlanItem *)arg3 completion:(void (^)(BOOL, NSError *))arg4;
- (void)userSignupInitiatedOrFailed;
- (void)willDisplayPlanItems;
@end

