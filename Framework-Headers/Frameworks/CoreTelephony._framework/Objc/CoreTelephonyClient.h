//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CoreTelephonyClientDelegateProxy, NSError, NSXPCConnection, NSXPCListenerEndpoint;

@interface CoreTelephonyClient : NSObject
{
    id _delegate;
    NSXPCConnection *_connection;
    struct queue _xpcQueue;
    struct queue _userQueue;
    NSXPCListenerEndpoint *_endpoint;
    CoreTelephonyClientDelegateProxy *_delegateProxy;
    NSError *_reconnectError;
}

@property (strong, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property (weak, nonatomic) id delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) CoreTelephonyClientDelegateProxy *delegateProxy; // @synthesize delegateProxy=_delegateProxy;
@property (strong, nonatomic) NSXPCListenerEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property (strong, nonatomic) NSError *reconnectError; // @synthesize reconnectError=_reconnectError;
@property (nonatomic) struct queue userQueue; // @synthesize userQueue=_userQueue;
@property (nonatomic) struct queue xpcQueue; // @synthesize xpcQueue=_xpcQueue;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)SIMUnlockProcedureDidComplete;
- (void)_connect_sync;
- (id)_connection;
- (void)_ensureConnectionSetup_sync;
- (void)_setReconnectError_sync:(id)arg1;
- (void)addPlanWith:(id)arg1 request:(id)arg2 appName:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)automaticallySelectNetwork:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)changePIN:(id)arg1 oldPin:(id)arg2 newPin:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)changePIN:(id)arg1 oldPin:(id)arg2 newPin:(id)arg3 error:(id *)arg4;
- (void)checkRadioBootHealth:(CDUnknownBlockType)arg1;
- (id)context:(id)arg1 addPhoneServicesDevice:(id)arg2;
- (void)context:(id)arg1 addPhoneServicesDevice:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)context:(id)arg1 canSetCapability:(id)arg2 allowed:(BOOL *)arg3 with:(id *)arg4;
- (void)context:(id)arg1 canSetCapability:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)context:(id)arg1 evaluateMobileSubscriberIdentity:(id)arg2;
- (id)context:(id)arg1 getAttachApnSettings:(id *)arg2;
- (void)context:(id)arg1 getCapability:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)context:(id)arg1 getCapability:(id)arg2 status:(BOOL *)arg3 with:(id *)arg4;
- (void)context:(id)arg1 getCarrierBundleValue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)context:(id)arg1 getCarrierBundleValue:(id)arg2 error:(id *)arg3;
- (id)context:(id)arg1 getEncryptedIdentity:(id)arg2 error:(id *)arg3;
- (id)context:(id)arg1 getSystemCapabilities:(id *)arg2;
- (void)context:(id)arg1 getSystemCapabilitiesWithCompletion:(CDUnknownBlockType)arg2;
- (void)context:(id)arg1 isProtectedIdentitySupported:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)context:(id)arg1 isProtectedIdentitySupported:(id)arg2 error:(id *)arg3;
- (id)context:(id)arg1 modifyAttachApnSettings:(id)arg2;
- (void)context:(id)arg1 modifyAttachApnSettings:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)context:(id)arg1 recheckPhoneServicesAccountStatus:(id)arg2;
- (id)context:(id)arg1 removePhoneServicesDevice:(id)arg2;
- (void)context:(id)arg1 removePhoneServicesDevice:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)context:(id)arg1 setCapability:(id)arg2 enabled:(BOOL)arg3 with:(id)arg4;
- (void)context:(id)arg1 setCapability:(id)arg2 enabled:(BOOL)arg3 with:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)copyAbbreviatedOperatorName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)copyBandInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)copyBundleVersion:(id)arg1 bundleType:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)copyBundleVersion:(id)arg1 bundleType:(id)arg2 error:(id *)arg3;
- (void)copyCarrierBookmarks:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)copyCarrierBundleLocation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)copyCarrierBundleLocation:(id)arg1 error:(id *)arg2;
- (void)copyCarrierBundleValue:(id)arg1 key:(id)arg2 bundleType:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)copyCarrierBundleValue:(id)arg1 key:(id)arg2 bundleType:(id)arg3 error:(id *)arg4;
- (void)copyCarrierBundleValue:(id)arg1 keyHierarchy:(id)arg2 bundleType:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)copyCarrierBundleValue:(id)arg1 keyHierarchy:(id)arg2 bundleType:(id)arg3 error:(id *)arg4;
- (void)copyCarrierBundleValueWithDefault:(id)arg1 key:(id)arg2 bundleType:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)copyCarrierBundleValueWithDefault:(id)arg1 key:(id)arg2 bundleType:(id)arg3 error:(id *)arg4;
- (void)copyCarrierBundleValueWithDefault:(id)arg1 keyHierarchy:(id)arg2 bundleType:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)copyCarrierBundleValueWithDefault:(id)arg1 keyHierarchy:(id)arg2 bundleType:(id)arg3 error:(id *)arg4;
- (void)copyCarrierBundleVersion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)copyCarrierBundleVersion:(id)arg1 error:(id *)arg2;
- (void)copyCellId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)copyCellInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)copyEmergencyMode:(CDUnknownBlockType)arg1;
- (void)copyFirmwareUpdateInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)copyGid1:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)copyGid1:(id)arg1 error:(id *)arg2;
- (void)copyGid2:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)copyGid2:(id)arg1 error:(id *)arg2;
- (void)copyIsDataAttached:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)copyIsInHomeCountry:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)copyLabel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)copyLabel:(id)arg1 error:(id *)arg2;
- (void)copyLastKnownMobileCountryCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)copyLastKnownMobileSubscriberCountryCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)copyLastKnownMobileSubscriberCountryCode:(id)arg1 error:(id *)arg2;
- (void)copyLocalizedOperatorName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)copyLocationAreaCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)copyMobileCountryCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)copyMobileCountryCode:(id)arg1 error:(id *)arg2;
- (void)copyMobileEquipmentInfo:(CDUnknownBlockType)arg1;
- (void)copyMobileNetworkCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)copyMobileNetworkCode:(id)arg1 error:(id *)arg2;
- (void)copyMobileSubscriberCountryCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)copyMobileSubscriberCountryCode:(id)arg1 error:(id *)arg2;
- (void)copyMobileSubscriberIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)copyMobileSubscriberIdentity:(id)arg1 error:(id *)arg2;
- (id)copyMobileSubscriberIsoCountryCode:(id)arg1 error:(id *)arg2;
- (void)copyMobileSubscriberNetworkCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)copyMobileSubscriberNetworkCode:(id)arg1 error:(id *)arg2;
- (void)copyNetworkList:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)copyNetworkSelection:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)copyNetworkSelectionInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)copyNetworkSelectionInfo:(id)arg1 error:(id *)arg2;
- (void)copyNetworkSelectionMode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)copyNetworkSelectionState:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)copyOperatorName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)copyPriVersion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)copyPublicCellId:(id)arg1 error:(id *)arg2;
- (void)copyRadioAccessTechnology:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)copyRadioAccessTechnology:(id)arg1 error:(id *)arg2;
- (void)copyRegistrationAgentStatus:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)copyRegistrationDisplayStatus:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)copyRegistrationDisplayStatus:(id)arg1 error:(id *)arg2;
- (void)copyRegistrationIMSTransportInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)copyRegistrationStatus:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)copyRegistrationStatus:(id)arg1 error:(id *)arg2;
- (void)copyRejectCauseCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)copySIMIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)copySIMIdentity:(id)arg1 error:(id *)arg2;
- (void)copyServingPlmn:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)copyWirelessTechnology:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createEncryptedIdentity:(id)arg1 identity:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)deletePersonalWallet:(id)arg1;
- (void)deletePersonalWallet:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)evaluateMobileSubscriberIdentity:(id)arg1 identity:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)fetchCallBarringValue:(id)arg1 facility:(int)arg2 callClass:(int)arg3 password:(id)arg4;
- (void)fetchCallBarringValue:(id)arg1 facility:(int)arg2 callClass:(int)arg3 password:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)fetchCallForwardingValue:(id)arg1 reason:(int)arg2 callClass:(int)arg3;
- (void)fetchCallForwardingValue:(id)arg1 reason:(int)arg2 callClass:(int)arg3 completion:(CDUnknownBlockType)arg4;
- (id)fetchCallWaitingValue:(id)arg1 callClass:(int)arg2;
- (void)fetchCallWaitingValue:(id)arg1 callClass:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (id)fetchCallingLineIdRestrictionValue:(id)arg1;
- (void)fetchCallingLineIdRestrictionValue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)fetchCallingLinePresentationValue:(id)arg1;
- (void)fetchCallingLinePresentationValue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)fetchConnectedLineIdRestrictionValue:(id)arg1;
- (void)fetchConnectedLineIdRestrictionValue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)fetchConnectedLinePresentationValue:(id)arg1;
- (void)fetchConnectedLinePresentationValue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchNetworkList:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchPhonebook:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchSIMLockValue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)fetchSIMLockValue:(id)arg1 error:(id *)arg2;
- (void)generateUICCAuthenticationInfo:(id)arg1 authParams:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getActiveConnections:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getActiveConnections:(id)arg1 error:(id *)arg2;
- (id)getActiveConnectionsForPreferredDataContext:(id *)arg1;
- (id)getActiveContexts:(id *)arg1;
- (void)getActiveContextsWithCallback:(CDUnknownBlockType)arg1;
- (void)getCallCapabilities:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getCallCapabilities:(id)arg1 error:(id *)arg2;
- (void)getConfiguredApns:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getConfiguredApns:(id)arg1 error:(id *)arg2;
- (void)getConnectionAvailability:(id)arg1 connectionType:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (id)getConnectionAvailability:(id)arg1 connectionType:(int)arg2 error:(id *)arg3;
- (id)getConnectionAvailabilityForPreferredDataContext:(int)arg1 error:(id *)arg2;
- (void)getConnectionState:(id)arg1 connectionType:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (id)getConnectionState:(id)arg1 connectionType:(int)arg2 error:(id *)arg3;
- (id)getConnectionStateForPreferredDataContext:(int)arg1 error:(id *)arg2;
- (id)getDataMode:(id)arg1 error:(id *)arg2;
- (void)getDataStatus:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getDataStatus:(id)arg1 error:(id *)arg2;
- (id)getDataStatusForPreferredDataContext:(id *)arg1;
- (void)getDescriptorsForDomain:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getDescriptorsForDomain:(long long)arg1 error:(id *)arg2;
- (long long)getDualSimCapability:(id *)arg1;
- (void)getEnhancedVoiceLinkQualityMetric:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getIMSRegistrationStatus:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getIMSRegistrationStatus:(id)arg1 error:(id *)arg2;
- (void)getInternationalDataAccessStatus:(CDUnknownBlockType)arg1;
- (BOOL)getInternationalDataAccessStatusSync:(id *)arg1;
- (id)getLocalizedOperatorName:(id)arg1 error:(id *)arg2;
- (void)getMaxDataRate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (long long)getMaxDataRate:(id)arg1 error:(id *)arg2;
- (id)getMobileEquipmentInfo:(id *)arg1;
- (id)getMobileEquipmentInfoFor:(id)arg1 error:(id *)arg2;
- (void)getMobileSubscriberHomeCountryList:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getMobileSubscriberHomeCountryList:(id)arg1 error:(id *)arg2;
- (void)getNATTKeepAliveOverCell:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned int)getNATTKeepAliveOverCell:(id)arg1 error:(id *)arg2;
- (unsigned int)getNATTKeepAliveOverCellForPreferredDataContext:(id *)arg1;
- (void)getOperatorMultiPartyCallCountMaximum:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getOperatorMultiPartyCallCountMaximum:(id)arg1 error:(id *)arg2;
- (void)getPNRContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getPNRContext:(id)arg1 outError:(id *)arg2;
- (id)getPacketContextCount:(unsigned int *)arg1;
- (id)getPhoneNumber:(id)arg1 error:(id *)arg2;
- (void)getPhoneNumberWithCompletion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getPhoneServicesDeviceInfo:(id *)arg1;
- (void)getPhoneServicesDeviceInfoWithCompletion:(CDUnknownBlockType)arg1;
- (id)getPhoneServicesDeviceList:(id *)arg1;
- (void)getPhoneServicesDeviceListWithCompletion:(CDUnknownBlockType)arg1;
- (id)getPhonebookEntry:(id)arg1 atIndex:(int)arg2 error:(id *)arg3;
- (int)getPhonebookEntryCount:(id)arg1 error:(id *)arg2;
- (void)getPhonebookEntryCountWithCompletion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getPhonebookEntryWithCompletion:(id)arg1 atIndex:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getRatSelection:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getRejectCauseCode:(id)arg1 error:(id *)arg2;
- (void)getRemainingPINAttemptCount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getRemainingPINAttemptCount:(id)arg1 error:(id *)arg2;
- (void)getRemainingPUKAttemptCount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getRemainingPUKAttemptCount:(id)arg1 error:(id *)arg2;
- (void)getSIMStatus:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getSIMStatus:(id)arg1 error:(id *)arg2;
- (void)getSIMTrayStatus:(CDUnknownBlockType)arg1;
- (id)getSIMTrayStatusOrError:(id *)arg1;
- (void)getShortLabel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getShortLabel:(id)arg1 error:(id *)arg2;
- (void)getSignalStrengthInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getSignalStrengthInfo:(id)arg1 error:(id *)arg2;
- (void)getSimLabel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getSimLabel:(id)arg1 error:(id *)arg2;
- (id)getSimLessContexts:(id *)arg1;
- (void)getSimLessContextsWithCallback:(CDUnknownBlockType)arg1;
- (void)getSubscriptionInfo:(CDUnknownBlockType)arg1;
- (id)getSubscriptionInfoWithError:(id *)arg1;
- (void)getSupportedDataRates:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getSupportedDataRates:(id)arg1 error:(id *)arg2;
- (void)getUIConfiguredApns:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getUIConfiguredApns:(id)arg1 error:(id *)arg2;
- (void)getVoiceLinkQualityMetric:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getVoicemailInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getWiFiCallingSettingPreferences:(id)arg1 key:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)getWiFiCallingSettingPreferences:(id)arg1 key:(id)arg2 error:(id *)arg3;
- (id)init;
- (id)initWithQueue:(struct dispatch_queue_s *)arg1;
- (id)initWithQueue:(struct dispatch_queue_s *)arg1 listenerEndpoint:(id)arg2;
- (void)isAttachApnSettingAllowed:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)isAttachApnSettingAllowed:(id)arg1 error:(id *)arg2;
- (void)isEmergencyNumber:(id)arg1 number:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)isEmergencyNumber:(id)arg1 number:(id)arg2 error:(id *)arg3;
- (void)isEmergencyNumberWithWhitelistIncluded:(id)arg1 number:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)isEmergencyNumberWithWhitelistIncluded:(id)arg1 number:(id)arg2 error:(id *)arg3;
- (long long)isEsimFor:(id)arg1 error:(id *)arg2;
- (void)isNetworkReselectionNeeded:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)isNetworkSelectionMenuAvailable:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)isNetworkSelectionMenuAvailable:(id)arg1 error:(id *)arg2;
- (void)isPNRSupported:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)isPNRSupported:(id)arg1 outError:(id *)arg2;
- (BOOL)isPhoneNumberCredentialValid:(id)arg1 outError:(id *)arg2;
- (void)isTetheringEditingSupported:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)isTetheringEditingSupported:(id)arg1 error:(id *)arg2;
- (void)isUnconditionalCallForwardingActive:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)issuePNRRequest:(id)arg1 pnrReqType:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)listPersonalWallets:(id *)arg1;
- (void)ping:(CDUnknownBlockType)arg1;
- (void)ping_sync:(CDUnknownBlockType)arg1;
- (id)private_getActiveConnections:(id)arg1 error:(id *)arg2;
- (id)private_getConnectionAvailability:(id)arg1 connectionType:(int)arg2 error:(id *)arg3;
- (id)private_getConnectionState:(id)arg1 connectionType:(int)arg2 error:(id *)arg3;
- (id)private_getDataStatus:(id)arg1 error:(id *)arg2;
- (unsigned int)private_getNATTKeepAliveOverCell:(id)arg1 error:(id *)arg2;
- (id)private_setPacketContextActiveByServiceType:(id)arg1 connectionType:(int)arg2 active:(BOOL)arg3;
- (void)promptForSIMUnlock:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)proxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)proxyWithErrorHandler_sync:(CDUnknownBlockType)arg1;
- (void)refreshCellMonitor:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)resetAPNSettings;
- (void)resetAPNSettings:(CDUnknownBlockType)arg1;
- (void)resetUIConfiguredApns:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)saveCallBarringValue:(id)arg1 facility:(int)arg2 callClass:(int)arg3 enabled:(BOOL)arg4 password:(id)arg5;
- (void)saveCallBarringValue:(id)arg1 facility:(int)arg2 callClass:(int)arg3 enabled:(BOOL)arg4 password:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)saveCallForwardingValue:(id)arg1 value:(id)arg2;
- (void)saveCallForwardingValue:(id)arg1 value:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)saveCallWaitingValue:(id)arg1 callClass:(int)arg2 enabled:(BOOL)arg3;
- (void)saveCallWaitingValue:(id)arg1 callClass:(int)arg2 enabled:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (id)saveCallingLineIdRestrictionValue:(id)arg1 restrictionValue:(int)arg2;
- (void)saveCallingLineIdRestrictionValue:(id)arg1 restrictionValue:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)savePhonebookEntry:(id)arg1 atIndex:(int)arg2 withContactName:(id)arg3 contactNumber:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)saveSIMLockValue:(id)arg1 enabled:(BOOL)arg2 pin:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)saveSIMLockValue:(id)arg1 enabled:(BOOL)arg2 pin:(id)arg3 error:(id *)arg4;
- (void)selectNetwork:(id)arg1 network:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)selectPhonebook:(id)arg1 forPhonebookName:(int)arg2 withPassword:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setActiveUserDataSelection:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setActiveUserDataSelection:(id)arg1 error:(id *)arg2;
- (id)setAllowedToLaunchSimUnlockDuringBuddy:(BOOL)arg1;
- (void)setBandInfo:(id)arg1 bands:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setDefaultVoice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setDefaultVoice:(id)arg1 error:(id *)arg2;
- (id)setInternationalDataAccessStatus:(BOOL)arg1;
- (void)setInternationalDataAccessStatus:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setLabel:(id)arg1 label:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setLabel:(id)arg1 label:(id)arg2 error:(id *)arg3;
- (id)setMaxDataRate:(id)arg1 rate:(long long)arg2;
- (void)setMaxDataRate:(id)arg1 rate:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)setPacketContextActiveByServiceType:(id)arg1 connectionType:(int)arg2 active:(BOOL)arg3;
- (void)setPacketContextActiveByServiceType:(id)arg1 connectionType:(int)arg2 active:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (id)setPacketContextActiveByServiceTypeForPreferredDataContext:(int)arg1 active:(BOOL)arg2;
- (void)setRatSelection:(id)arg1 selection:(id)arg2 preferred:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setUIConfiguredApns:(id)arg1 apns:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setVoLTEAudioCodec:(id)arg1 codecInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)setWiFiCallingSettingPreferences:(id)arg1 key:(id)arg2 value:(id)arg3;
- (void)setWiFiCallingSettingPreferences:(id)arg1 key:(id)arg2 value:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)supportsPlanProvisioning:(id)arg1;
- (id)synchronousProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)unlockPIN:(id)arg1 pin:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)unlockPIN:(id)arg1 pin:(id)arg2 error:(id *)arg3;
- (void)unlockPUK:(id)arg1 puk:(id)arg2 newPin:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)unlockPUK:(id)arg1 puk:(id)arg2 newPin:(id)arg3 error:(id *)arg4;

@end

