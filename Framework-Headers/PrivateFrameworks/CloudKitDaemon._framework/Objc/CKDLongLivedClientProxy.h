//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDClientProxy.h>

@interface CKDLongLivedClientProxy : CKDClientProxy
{
}

+ (id)_sharedLongLivedProxyForContext:(id)arg1;
+ (void)clearCachedLongLivedProxies;
+ (id)longLivedProxyWithContext:(id)arg1;
+ (id)sharedLongLivedProxies;
- (id)CKPropertiesDescription;
- (id)_clientPrefixEntitlement;
- (void)_handleCompletionForOperation:(id)arg1 initialMessageReplyBlock:(CDUnknownBlockType)arg2 customCompletionBlock:(CDUnknownBlockType)arg3;
- (BOOL)_hasCustomAccountsEntitlement;
- (BOOL)_hasEnvironmentEntitlement;
- (void)addOperationWithOperationInfo:(id)arg1;
- (id)applicationBundleID;
- (id)applicationBundleIdentifierForPush;
- (id)applicationID;
- (id)apsEnvironmentEntitlement;
- (id)associatedApplicationBundleID;
- (id)callbackProxyForOperationInfo:(id)arg1 clientProvidedCallbackProxy:(id)arg2;
- (id)description;
- (BOOL)hasAllowAccessDuringBuddyEntitlement;
- (BOOL)hasAllowUnverifiedAccountEntitlement;
- (BOOL)hasCloudKitSystemServiceEntitlement;
- (BOOL)hasDarkWakeNetworkReachabilityEnabledEntitlement;
- (BOOL)hasDeviceIdentifierEntitlement;
- (BOOL)hasDisplaysSystemAcceptPromptEntitlement;
- (BOOL)hasLightweightPCSEntitlement;
- (BOOL)hasMasqueradingEntitlement;
- (BOOL)hasNonLegacyShareURLEntitlement;
- (BOOL)hasOutOfProcessUIEntitlement;
- (BOOL)hasParticipantPIIEntitlement;
- (BOOL)hasProtectionDataEntitlement;
- (BOOL)hasTCCAuthorization;
- (BOOL)hasValidatedEntitlements;
- (BOOL)hasZoneProtectionDataEntitlement;
- (id)initWithClientContext:(id)arg1;
- (BOOL)isLongLived;
- (id)serviceNameForContainerIdentifierMapEntitlement;

@end
