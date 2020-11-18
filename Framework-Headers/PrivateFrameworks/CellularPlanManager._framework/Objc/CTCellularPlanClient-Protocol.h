//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CellularPlanManager/NSObject-Protocol.h>

@class CTCellularPlanItem, NSData, NSDictionary, NSNumber, NSString;

@protocol CTCellularPlanClient <NSObject>
- (void)addNewRemotePlan:(void (^)(NSError *))arg1;
- (void)addNewRemotePlanWithCardData:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)addNewRemotePlanWithIccid:(NSString *)arg1 authCode:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)deleteRemoteProfile:(NSData *)arg1;
- (void)didDeleteRemotePlanItem:(CTCellularPlanItem *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)didProvisionEsimWithIccid:(NSString *)arg1;
- (void)didPurchasePlanWithIccid:(NSString *)arg1 downloadProfile:(BOOL)arg2;
- (void)didPurchaseRemotePlanForCsn:(NSString *)arg1 withIccid:(NSString *)arg2 completion:(void (^)(BOOL))arg3;
- (void)didSelectPlanItem:(CTCellularPlanItem *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)didSelectRemotePlanItem:(CTCellularPlanItem *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)endSession;
- (void)expirePlan;
- (void)fetchNewProfilesWithCompletion:(void (^)(BOOL, NSError *))arg1 additionalParameters:(NSDictionary *)arg2;
- (void)fetchRemotePlanOnly:(NSDictionary *)arg1 url:(NSString *)arg2;
- (void)getCurrentPlanType:(void (^)(long long))arg1;
- (void)getDeviceInfo:(void (^)(NSDictionary *))arg1;
- (void)getESimServerURL:(void (^)(NSString *))arg1;
- (void)getIMEIPrefix:(void (^)(NSString *))arg1;
- (void)getRemoteInfo:(void (^)(NSDictionary *, NSError *))arg1;
- (void)getSelectedEnv:(void (^)(long long))arg1;
- (void)getSelectedProxy:(void (^)(long long))arg1;
- (void)isAddButtonEnabled:(void (^)(BOOL))arg1;
- (void)isMultipleDataPlanSupportAvailable:(void (^)(BOOL))arg1;
- (void)isNewDataPlanCapable:(void (^)(BOOL))arg1;
- (void)isRemotePlanCapable:(void (^)(BOOL))arg1;
- (void)isRoamingPlanSupportAvailable:(void (^)(BOOL))arg1;
- (void)latitudeLongitudeOverride:(void (^)(double, double))arg1;
- (void)launchDataActivationNextWithUrl:(NSString *)arg1;
- (void)launchSequoia;
- (void)manageAccountForPlan:(CTCellularPlanItem *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)manageAccountForRemotePlan:(CTCellularPlanItem *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)mccMncOverride:(void (^)(long long, long long))arg1;
- (void)openInternalUrlId:(long long)arg1;
- (void)planItemsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)registerHasNewProfileCompletion:(void (^)(BOOL))arg1;
- (void)remotePlanItemsWithUpdateFetch:(BOOL)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)remotePlanLaunchInfoForCsn:(NSData *)arg1 completion:(void (^)(NSString *, NSString *, NSError *))arg2;
- (void)remotePlansSignupParamsForCsn:(NSData *)arg1 completion:(void (^)(NSDictionary *))arg2;
- (void)remoteSignIdMapForSessionId:(NSString *)arg1 locationRequired:(BOOL)arg2 withCompletion:(void (^)(NSString *, NSError *))arg3;
- (void)retrieveRequestSettings:(void (^)(NSDictionary *, NSDictionary *, NSDictionary *))arg1;
- (void)selectRemoteProfile:(NSData *)arg1;
- (void)setActivePlan:(NSData *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)setESimServerURL:(NSString *)arg1;
- (void)setIMEIPrefix:(NSString *)arg1;
- (void)setLatitude:(NSNumber *)arg1 andLongitude:(NSNumber *)arg2;
- (void)setMcc:(long long)arg1 andMnc:(long long)arg2;
- (void)setSelectedEnv:(long long)arg1;
- (void)setSelectedProxy:(long long)arg1;
- (void)setUserInPurchaseFlow:(BOOL)arg1;
- (void)shouldShowAddNewRemotePlan:(void (^)(BOOL))arg1;
- (void)shouldShowAddNewRemotePlanWithFlowType:(void (^)(BOOL, unsigned long long, NSError *))arg1;
- (void)shouldShowPlanList:(void (^)(BOOL))arg1;
- (void)signIdMapForSessionId:(NSString *)arg1 locationRequired:(BOOL)arg2 withCompletion:(void (^)(NSString *, NSError *))arg3 latitude:(NSNumber *)arg4 longitude:(NSNumber *)arg5;
- (void)startSession;
- (void)triggerAddNewDataPlan:(void (^)(NSError *))arg1;
- (void)updatePlansDatabase;
- (void)willDisplayPlanItems;
@end

