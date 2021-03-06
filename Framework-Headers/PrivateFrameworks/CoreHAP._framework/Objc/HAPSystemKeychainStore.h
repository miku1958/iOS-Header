//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <CoreHAP/HAPKeyStore-Protocol.h>
#import <CoreHAP/HMFDumpState-Protocol.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HAPSystemKeychainStore : HMFObject <HAPKeyStore, HMFDumpState>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_activeControllerIdentifier;
}

@property (strong, nonatomic) NSString *activeControllerIdentifier; // @synthesize activeControllerIdentifier=_activeControllerIdentifier;
@property (readonly, nonatomic) NSString *activeControllerPairingIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly) Class superclass;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)systemStore;
- (void).cxx_destruct;
- (int)_addKeychainItem:(id)arg1 logDuplicateItemError:(BOOL)arg2;
- (id)_auditKeychainItems:(id)arg1 managedAccessories:(id)arg2;
- (int)_createControllerPublicKey:(id *)arg1 secretKey:(id *)arg2 keyPair:(id *)arg3 username:(id *)arg4;
- (int)_createMetadataSecretKey:(id *)arg1;
- (int)_deleteAllPeripheralIdentifiers;
- (int)_deletePeripheralIdentifierForAccessoryIdentifier:(id)arg1;
- (int)_getAllAvailableControllerPublicKeys:(id *)arg1 secretKeys:(id *)arg2 userNames:(id *)arg3;
- (id)_getControllerKeychainItemError:(int *)arg1;
- (id)_getControllerKeychainItemForKeyType:(id)arg1 error:(int *)arg2;
- (int)_getControllerPublicKey:(id *)arg1 secretKey:(id *)arg2 keyPair:(id *)arg3 username:(id *)arg4;
- (id)_getKeychainItemsForAccessGroup:(id)arg1 type:(id)arg2 account:(id)arg3 shouldReturnData:(BOOL)arg4 error:(int *)arg5;
- (id)_getLocalPairingIdentityAllowingCreation:(BOOL)arg1 error:(id *)arg2;
- (int)_getMetadataSecretKey:(id *)arg1;
- (int)_getPeripheralIdentifier:(id *)arg1 forAccessoryIdentifier:(id)arg2 protocolVersion:(unsigned long long *)arg3 resumeSessionID:(unsigned long long *)arg4;
- (int)_getPublicKey:(id *)arg1 registeredWithHomeKit:(BOOL *)arg2 forAccessoryName:(id)arg3;
- (int)_removeAccessoryKeyForName:(id)arg1;
- (int)_removeControllerKeyPairForIdentifier:(id)arg1 leaveTombstone:(BOOL)arg2;
- (int)_removeControllerKeyPairForKeyType:(id)arg1 identifier:(id)arg2 leaveTombstone:(BOOL)arg3;
- (int)_removeKeychainItem:(id)arg1 leaveTombstone:(BOOL)arg2;
- (int)_saveKeyPair:(id)arg1 username:(id)arg2 syncable:(BOOL)arg3 keyType:(id)arg4;
- (int)_savePeripheralIdentifier:(id)arg1 forAccessoryIdentifier:(id)arg2 protocolVersion:(unsigned long long)arg3 resumeSessionID:(unsigned long long)arg4;
- (int)_savePublicKey:(id)arg1 forAccessoryName:(id)arg2;
- (int)_updateCurrentiCloudIdentifier:(id)arg1 controllerPairingIdentifier:(id)arg2;
- (void)_updateKeychainItemToInvisible:(id)arg1;
- (id)auditKeysOfManagedAccessories:(id)arg1;
- (BOOL)deleteAllPeripheralIdentifiers:(id *)arg1;
- (BOOL)deletePeripheralIdentifierForAccessoryIdentifier:(id)arg1 error:(id *)arg2;
- (BOOL)deserializeKeyPair:(id)arg1 publicKey:(id *)arg2 secretKey:(id *)arg3 error:(id *)arg4;
- (id)dumpState;
- (void)ensureControllerKeyExistsForAllViews;
- (BOOL)getAllAvailableControllerPublicKeys:(id *)arg1 secretKeys:(id *)arg2 userNames:(id *)arg3 error:(id *)arg4;
- (BOOL)getControllerPublicKey:(id *)arg1 secretKey:(id *)arg2 keyPair:(id *)arg3 username:(id *)arg4 allowCreation:(BOOL)arg5 error:(id *)arg6;
- (BOOL)getControllerPublicKey:(id *)arg1 secretKey:(id *)arg2 username:(id *)arg3 allowCreation:(BOOL)arg4 error:(id *)arg5;
- (BOOL)getCurrentiCloudIdentifier:(id *)arg1 controllerPairingIdentifier:(id *)arg2 error:(id *)arg3;
- (id)getLocalPairingIdentity:(id *)arg1;
- (BOOL)getMetadataSecretKey:(id *)arg1 error:(id *)arg2;
- (id)getOrCreateLocalPairingIdentity:(id *)arg1;
- (id)getPeripherialIdentifiersAndAccessoryNames;
- (id)readPeripheralIdentifierForAccessoryIdentifier:(id)arg1 protocolVersion:(unsigned long long *)arg2 resumeSessionID:(unsigned long long *)arg3 error:(id *)arg4;
- (id)readPublicKeyForAccessoryName:(id)arg1 registeredWithHomeKit:(BOOL *)arg2 error:(id *)arg3;
- (BOOL)registerAccessoryWithHomeKit:(id)arg1 error:(id *)arg2;
- (BOOL)removeAccessoryKeyForName:(id)arg1 error:(id *)arg2;
- (BOOL)removeAllAccessoryKeys:(id *)arg1;
- (BOOL)removeControllerKeyPairForIdentifier:(id)arg1 leaveTombstone:(BOOL)arg2 error:(id *)arg3;
- (BOOL)removeControllerKeyPairLeaveTombstone:(BOOL)arg1 error:(id *)arg2;
- (BOOL)removeControllerKeyPairWithError:(id *)arg1;
- (BOOL)saveKeyPair:(id)arg1 username:(id)arg2 syncable:(BOOL)arg3 error:(id *)arg4;
- (BOOL)saveLocalPairingIdentity:(id)arg1 syncable:(BOOL)arg2 error:(id *)arg3;
- (BOOL)savePeripheralIdentifier:(id)arg1 forAccessoryIdentifier:(id)arg2 protocolVersion:(unsigned long long)arg3 resumeSessionID:(unsigned long long)arg4 error:(id *)arg5;
- (BOOL)savePublicKey:(id)arg1 forAccessoryName:(id)arg2 error:(id *)arg3;
- (BOOL)updateActiveControllerPairingIdentifier:(id)arg1;
- (BOOL)updateCurrentiCloudIdentifier:(id)arg1 controllerPairingIdentifier:(id)arg2 error:(id *)arg3;
- (BOOL)updatePeripheralIdentifier:(id)arg1 forAccessoryIdentifier:(id)arg2 protocolVersion:(unsigned long long)arg3 previousVersion:(unsigned long long *)arg4 resumeSessionID:(unsigned long long)arg5 error:(id *)arg6;

@end

