//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@interface HMDPersistentStore : HMFObject
{
}

+ (id)_decryptData:(id)arg1 withKey:(id)arg2 error:(id *)arg3;
+ (id)_encryptData:(id)arg1 withKey:(id)arg2 error:(id *)arg3;
+ (id)_writeData:(id)arg1 toStorePath:(id)arg2 dataLabel:(id)arg3;
+ (id)archiveBlacklistedBundles:(id)arg1;
+ (id)archiveBulletinBoard:(id)arg1;
+ (id)archiveCloudServerTokenData:(id)arg1;
+ (id)archiveHomeData:(id)arg1;
+ (id)archiveIDSDataSyncJournal:(id)arg1;
+ (BOOL)archiveMetadata:(id)arg1;
+ (void)archiveVendorStore:(id)arg1;
+ (void)cleanupKeysInStore;
+ (id)decryptDataWithControllerKey:(id)arg1 totalKeysFound:(unsigned long long *)arg2 deleteExtraKeys:(BOOL)arg3 allowControllerIdentifierToChange:(BOOL)arg4 controllerIdentifierChanged:(BOOL *)arg5 successfulKeyUserName:(id *)arg6 error:(id *)arg7;
+ (id)decryptDataWithMetadataKey:(id)arg1 error:(id *)arg2;
+ (id)decryptUsingLocalKeyAndUnarchiveFromPath:(id)arg1 error:(id *)arg2;
+ (id)deserializeBlacklistedBundlesFromData:(id)arg1;
+ (BOOL)deserializeHomeData:(id *)arg1 localStorage:(BOOL)arg2 fromData:(id)arg3;
+ (BOOL)deserializeMetadata:(id *)arg1 fromData:(id)arg2;
+ (id)encryptDataWithControllerKey:(id)arg1 error:(id *)arg2;
+ (id)encryptDataWithMetadataKey:(id)arg1 error:(id *)arg2;
+ (id)encryptUsingLocalKeyAndArchiveData:(id)arg1 storePath:(id)arg2 dataLabel:(id)arg3;
+ (id)loadBuiltinPlainMetadataDictionary;
+ (id)loadPlainMetadataDictionary;
+ (void)removeServerTokenDataFile;
+ (void)removeTransactionJournal;
+ (void)resetConfiguration;
+ (void)resetMetadata;
+ (id)serializeBlacklistedBundles:(id)arg1;
+ (id)serializeHomeData:(id)arg1 localStorage:(BOOL)arg2 remoteDeviceOnSameAccount:(BOOL)arg3;
+ (id)serializeMetadata:(id)arg1;
+ (id)unarchiveBlacklistedBundles;
+ (id)unarchiveBulletinBoard;
+ (id)unarchiveHomeData:(id *)arg1 decryptionFailed:(BOOL *)arg2;
+ (id)unarchiveIDSDataSyncJournal;
+ (id)unarchiveMetadata:(id *)arg1;
+ (id)unarchiveServerTokenData:(BOOL *)arg1;
+ (id)unarchiveVendorStore;
+ (id)writeData:(id)arg1 toStorePath:(id)arg2 dataLabel:(id)arg3;
+ (BOOL)writeDictionary:(id)arg1 toStorePath:(id)arg2;

@end
