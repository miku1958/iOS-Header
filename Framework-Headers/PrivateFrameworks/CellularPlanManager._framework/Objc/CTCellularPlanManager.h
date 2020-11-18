//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CTCellularPlanManagerDelegate, NSData, NSMutableArray, NSString, NSXPCConnection;

@interface CTCellularPlanManager : NSObject
{
    NSMutableArray *_subscriptionCompletions;
    struct dispatch_queue_s *_queue;
    NSString *_lastSessionId;
    NSData *_cookieData;
    NSXPCConnection *_connection;
    CTCellularPlanManagerDelegate *_delegate;
}

+ (long long)calculateInstallConsentTextTypeFor:(id)arg1;
+ (id)sharedManager;
- (void)_connect_sync;
- (void)_ensureConnected_sync;
- (void)_plansForRenewal:(BOOL)arg1 progress:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3 additionalParameters:(id)arg4;
- (void)_reconnect;
- (void)addNewPlanWithAddress:(id)arg1 matchingId:(id)arg2 oid:(id)arg3 confirmationCode:(id)arg4 triggerType:(long long)arg5 userConsent:(long long)arg6 completion:(CDUnknownBlockType)arg7;
- (void)addNewPlanWithCardData:(id)arg1 confirmationCode:(id)arg2 triggerType:(long long)arg3 userConsent:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)addNewPlanWithCarrierItem:(id)arg1 triggerType:(long long)arg2 userConsent:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)addNewPlanWithFlowType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addNewPlanWithUserInWebsheetWithCompletion:(CDUnknownBlockType)arg1;
- (void)addNewPlanWithUserInWebsheetWithUserConsent:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addNewRemotePlan:(BOOL)arg1 withCSN:(id)arg2 withContext:(id)arg3 userConsent:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)addNewRemotePlanWithAddress:(id)arg1 matchingId:(id)arg2 oid:(id)arg3 confirmationCode:(id)arg4 isPairing:(BOOL)arg5 withCSN:(id)arg6 withContext:(id)arg7 userConsent:(long long)arg8 completion:(CDUnknownBlockType)arg9;
- (void)addNewRemotePlanWithCardData:(id)arg1 confirmationCode:(id)arg2 isPairing:(BOOL)arg3 withCSN:(id)arg4 withContext:(id)arg5 userConsent:(long long)arg6 completion:(CDUnknownBlockType)arg7;
- (void)carrierHandoffToken:(CDUnknownBlockType)arg1;
- (void)carrierItemsShouldUpdate:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)connectionSettings:(CDUnknownBlockType)arg1;
- (id)danglingPlanItemsShouldUpdate:(BOOL)arg1;
- (void)danglingPlanItemsShouldUpdate:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)deleteAllRemoteProfiles;
- (void)deleteRemoteProfile:(id)arg1;
- (void)didCancelRemotePlan;
- (void)didDeletePlanItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didDeleteRemotePlanItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didPurchasePlanForCsn:(id)arg1 iccid:(id)arg2 profileServer:(id)arg3;
- (void)didPurchasePlanWithIccid:(id)arg1 downloadProfile:(BOOL)arg2;
- (void)didPurchaseRemotePlanForEid:(id)arg1 imei:(id)arg2 meid:(id)arg3 iccid:(id)arg4 alternateSmdpFqdn:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)didSelectPlanForData:(id)arg1;
- (void)didSelectPlanForData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)didSelectPlanForDefaultVoice:(id)arg1;
- (void)didSelectPlanForDefaultVoice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)didSelectPlanForIMessage:(id)arg1;
- (void)didSelectPlanForIMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)didSelectPlanItem:(id)arg1 isEnable:(BOOL)arg2;
- (void)didSelectPlanItem:(id)arg1 isEnable:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)didSelectRemotePlanItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)enableVinylFlowTypeOverride:(BOOL)arg1;
- (void)enterSimSetupWithCompletion:(CDUnknownBlockType)arg1;
- (void)eraseAllPlans:(CDUnknownBlockType)arg1;
- (void)eraseAllRemotePlansWithCSN:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)eraseAllRemotePlansWithCompletion:(CDUnknownBlockType)arg1;
- (void)exitSimSetupWithCompletion:(CDUnknownBlockType)arg1;
- (void)expirePlan;
- (void)fetchRemoteProfiles:(id)arg1;
- (void)finishProvisioningWithCompletion:(CDUnknownBlockType)arg1;
- (void)finishRemoteProvisioningForCSN:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getAutoPlanSelectionWithCompletion:(CDUnknownBlockType)arg1;
- (void)getDeviceInfo:(CDUnknownBlockType)arg1;
- (void)getESimServerURL:(CDUnknownBlockType)arg1;
- (BOOL)getEnableVinylFlowTypeOverride;
- (void)getIMEIPrefix:(CDUnknownBlockType)arg1;
- (id)getPredefinedLabels;
- (void)getRemoteInfo:(CDUnknownBlockType)arg1;
- (void)getRoamingSignupOverrideWithCompletion:(CDUnknownBlockType)arg1;
- (void)getSelectedEnv:(CDUnknownBlockType)arg1;
- (void)getSelectedProxy:(CDUnknownBlockType)arg1;
- (id)getShortLabelsForLabels:(id)arg1;
- (void)getSkipEligibilityCheck:(CDUnknownBlockType)arg1;
- (id)getSubscriptionContextUUIDforPlan:(id)arg1;
- (unsigned long long)getSupportedFlowTypes;
- (void)getSupportedFlowTypes:(CDUnknownBlockType)arg1;
- (id)init;
- (BOOL)isAddButtonEnabled;
- (void)isAddButtonEnabled:(CDUnknownBlockType)arg1;
- (void)isMultipleDataPlanSupportAvailable:(CDUnknownBlockType)arg1;
- (void)isNewDataPlanCapable:(CDUnknownBlockType)arg1;
- (void)isRemotePlanCapableWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)latitudeLongitudeOverride:(CDUnknownBlockType)arg1;
- (void)launchDataActivationNextWithUrl:(id)arg1;
- (void)launchSequoia;
- (void)loadPlansWithUrl:(id)arg1 postData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)manageAccountForPlan:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)manageAccountForRemotePlan:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)mccMncOverride:(CDUnknownBlockType)arg1;
- (void)openInternalUrlId:(long long)arg1;
- (void)pendingReleaseRemotePlan;
- (void)ping;
- (id)planItemsShouldUpdate:(BOOL)arg1;
- (void)planItemsShouldUpdate:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)planItemsWithCompletion:(CDUnknownBlockType)arg1;
- (void)planLaunchInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)plansForRenewalWithProgress:(CDUnknownBlockType)arg1 andCompletion:(CDUnknownBlockType)arg2;
- (void)plansWithProgress:(CDUnknownBlockType)arg1 andCompletion:(CDUnknownBlockType)arg2;
- (void)plansWithProgress:(CDUnknownBlockType)arg1 andCompletion:(CDUnknownBlockType)arg2 additionalParameters:(id)arg3;
- (id)remapSimLabel:(id)arg1 to:(id)arg2;
- (void)remapSimLabel:(id)arg1 to:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remotePlanItemsWithCompletion:(CDUnknownBlockType)arg1;
- (void)remotePlanItemsWithUpdateFetch:(BOOL)arg1 withCSN:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remotePlanLaunchInfoForEid:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)resolveSimLabel:(id)arg1;
- (void)resolveSimLabel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resumePlanProvisioning:(BOOL)arg1 userConsent:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)selectRemoteProfile:(id)arg1;
- (void)setAutoPlanSelection:(BOOL)arg1;
- (void)setESimServerURL:(id)arg1;
- (void)setIMEIPrefix:(id)arg1;
- (id)setLabelForPlan:(id)arg1 label:(id)arg2;
- (void)setLatitude:(id)arg1 andLongitude:(id)arg2;
- (void)setMcc:(long long)arg1 andMnc:(long long)arg2;
- (void)setRoamingSignupOverride:(BOOL)arg1;
- (void)setSelectedEnv:(long long)arg1;
- (void)setSelectedProxy:(long long)arg1;
- (void)setSkipEligibilityCheck:(BOOL)arg1;
- (void)setUseNewCellularPlanUI:(BOOL)arg1;
- (void)setUserInPurchaseFlow:(BOOL)arg1;
- (void)shouldShowAddNewRemotePlanWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)shouldShowPlanList;
- (void)shouldShowPlanList:(CDUnknownBlockType)arg1;
- (void)shouldShowPlanSetup:(CDUnknownBlockType)arg1;
- (void)showUiIgnoringActivationFlags:(BOOL)arg1;
- (void)startProvisioningWithCompletion:(CDUnknownBlockType)arg1;
- (void)startRemoteProvisioningForCSN:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)subscriptionDetailsForCompletion:(id)arg1;
- (id)synchronousProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)triggerAddNewDataPlan:(CDUnknownBlockType)arg1;
- (void)userDidProvideConsentResponse:(long long)arg1 forPlan:(id)arg2 isRemote:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)userDidProvideResponse:(long long)arg1 confirmationCode:(id)arg2 forPlan:(id)arg3 isRemote:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)willDisplayPlanItems;

@end

