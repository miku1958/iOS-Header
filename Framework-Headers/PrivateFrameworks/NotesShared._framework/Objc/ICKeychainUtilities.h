//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICKeychainUtilities : NSObject
{
}

+ (id)DEPRECATED_faceIDUserDefaultsDisabled;
+ (id)DEPRECATED_touchIDUserDefaultsDisabled;
+ (id)_getItemForIdentifier:(id)arg1 accessGroupIdentifier:(id)arg2 alertTextForAuthentication:(id)arg3 error:(id *)arg4;
+ (id)_queryForIdentifier:(id)arg1 accessGroupIdentifier:(id)arg2 alertTextForAuthentication:(id)arg3 returnData:(BOOL)arg4;
+ (BOOL)_removeAllFromBiometricIDAssumeEncryptionKeyTypeIsUsed;
+ (BOOL)_removeItemForIdentifier:(id)arg1 accessGroupIdentifier:(id)arg2 itemType:(unsigned long long)arg3 accountIdentifier:(id)arg4 error:(id *)arg5;
+ (BOOL)_updateItemForIdentifier:(id)arg1 accessGroupIdentifier:(id)arg2 alertTextForAuthentication:(id)arg3 attributesToUpdate:(id)arg4 error:(id *)arg5;
+ (BOOL)addDevicePasscodeGuardedItem:(id)arg1 forIdentifier:(id)arg2 error:(id *)arg3;
+ (BOOL)addEncryptionKeyWithoutGuardianIfBiometricIDSupportedAndEnabled:(id)arg1 forIdentifier:(id)arg2 accountID:(id)arg3 error:(id *)arg4;
+ (BOOL)addItem:(id)arg1 forIdentifier:(id)arg2 secAccessControlObject:(id)arg3 itemType:(unsigned long long)arg4 acccountIdentifier:(id)arg5 error:(id *)arg6;
+ (void)beginEvaluatePolicyReplyBlock;
+ (BOOL)biometricIDHardwareIsAvailable;
+ (BOOL)biometricIDIsEnrolled;
+ (BOOL)biometricIDIsEnrolled:(id *)arg1 checkPolicyDomainState:(BOOL)arg2;
+ (BOOL)biometricIDSupportedAndEnabledForSharedPasswordForAccountID:(id)arg1;
+ (BOOL)biometricIDSupportedAndEnabledForSharedPasswordForAccountID:(id)arg1 checkPolicyDomainState:(BOOL)arg2;
+ (BOOL)biometricIDSupportedAndEnabledForSharedPasswordForAccountIDs:(id)arg1 strict:(BOOL)arg2;
+ (BOOL)biometricIDSupportedAndEnabledForSharedPasswordForAccountIDs:(id)arg1 strict:(BOOL)arg2 checkPolicyDomainState:(BOOL)arg3;
+ (void)bumpUpdatePolicyDomainStateAttemptCount;
+ (void)clearKeysAndUpdateDomainPolicyState;
+ (void)endEvaluatePolicyReplyBlock;
+ (BOOL)exceededMaxUpdatePolicyDomainStateAttemptCount;
+ (id)faceIDEnabledKeyForAccountID:(id)arg1;
+ (BOOL)faceIDIsEnrolled;
+ (BOOL)faceIDNotesSettingEnabledForAccountID:(id)arg1;
+ (BOOL)getBoolFromKeyChainForIdentifier:(id)arg1;
+ (id)getItemForIdentifier:(id)arg1 alertTextForAuthentication:(id)arg2 error:(id *)arg3;
+ (id)getItemFromAnyKeychainGroupForIdentifier:(id)arg1 error:(id *)arg2;
+ (unsigned long long)getUnsignedIntegerFromKeyChainForIdentifier:(id)arg1;
+ (BOOL)isControlVariableVersionMigratedToCurrent;
+ (BOOL)looselyAuthenticateWithDevicePasscodeWithAlertText:(id)arg1;
+ (void)migrateFromBioIDDisabledKeysToBioIDEnabledKeys;
+ (void)migrateKeysByMarkingWithEncryptionKeyTypeAndMovingIntoGroupContainer;
+ (void)moveAllEncryptionKeysToGroupContainerForAccountIdentifiers:(id)arg1 context:(id)arg2;
+ (id)policyStateNilData;
+ (void)removeAccountFromBiometricID:(id)arg1 andRemoveNotes:(BOOL)arg2;
+ (BOOL)removeAllFromBiometricID;
+ (BOOL)removeItemForIdentifier:(id)arg1 error:(id *)arg2;
+ (void)removeItemFromBiometricID:(id)arg1;
+ (void)removeNoteFromBiometricID:(id)arg1;
+ (void)resetUpdatePolicyDomainStateAttemptCount;
+ (id)secAccessControlObjectWithCreationFlag:(unsigned long long)arg1 error:(id *)arg2;
+ (void)setBool:(BOOL)arg1 forIdentifierInKeychain:(id)arg2;
+ (void)setControlVariableVersionToCurrent;
+ (void)setFaceIDEnabled:(BOOL)arg1 forAccountID:(id)arg2;
+ (void)setTouchIDEnabled:(BOOL)arg1 forAccountID:(id)arg2;
+ (void)setUnsignedInteger:(unsigned long long)arg1 forIdentifierInKeychain:(id)arg2;
+ (BOOL)touchIDEnabledForSharedPasswordForAccountIDs:(id)arg1 strict:(BOOL)arg2;
+ (id)touchIDEnabledKeyForAccountID:(id)arg1;
+ (BOOL)touchIDIsEnrolled;
+ (BOOL)touchIDNotesSettingEnabledForAccountID:(id)arg1;
+ (unsigned long long)unsignedIntegerFromData:(id)arg1;

@end

