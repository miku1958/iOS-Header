//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDPersistentStore-Protocol.h>

@class NSString;

@interface HMDPersistentStore : HMFObject <HMDPersistentStore>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_decryptData:(id)arg1 withKey:(id)arg2 error:(id *)arg3;
+ (id)_encryptData:(id)arg1 withKey:(id)arg2 error:(id *)arg3;
+ (id)_writeData:(id)arg1 toStorePath:(id)arg2 dataLabel:(id)arg3;
+ (void)archiveBulletinBoard:(id)arg1;
+ (id)archiveCloudServerTokenData:(id)arg1;
+ (id)archiveDataStoreWithPath:(id)arg1 serializedData:(id)arg2 forKey:(id)arg3;
+ (id)archiveHomeData:(id)arg1;
+ (id)archiveIDSDataSyncJournal:(id)arg1;
+ (BOOL)archiveMetadata:(id)arg1;
+ (void)archiveVendorStore:(id)arg1;
+ (void)cleanupKeysInStore;
+ (id)decryptDataWithControllerKey:(id)arg1 totalKeysFound:(unsigned long long *)arg2 deleteExtraKeys:(BOOL)arg3 allowControllerIdentifierToChange:(BOOL)arg4 controllerIdentifierChanged:(BOOL *)arg5 successfulKeyUserName:(id *)arg6 error:(id *)arg7;
+ (id)decryptDataWithMetadataKey:(id)arg1 error:(id *)arg2;
+ (id)decryptUsingLocalKeyAndUnarchiveFromPath:(id)arg1 error:(id *)arg2;
+ (BOOL)deserializeHomeData:(id *)arg1 localStorage:(BOOL)arg2 fromData:(id)arg3;
+ (id)encryptDataWithControllerKey:(id)arg1 error:(id *)arg2;
+ (id)encryptDataWithMetadataKey:(id)arg1 error:(id *)arg2;
+ (id)encryptUsingLocalKeyAndArchiveData:(id)arg1 storePath:(id)arg2 dataLabel:(id)arg3;
+ (id)loadBuiltinPlainMetadataDictionary;
+ (id)loadPlainMetadataDictionary;
+ (void)removeServerTokenDataFile;
+ (void)removeTransactionJournal;
+ (void)resetConfiguration;
+ (void)resetMetadata;
+ (id)serializeHomeData:(id)arg1 localStorage:(BOOL)arg2 remoteDeviceOnSameAccount:(BOOL)arg3;
+ (id)unarchiveBulletinBoard;
+ (id)unarchiveDataStoreWithPath:(id)arg1 forKey:(id)arg2;
+ (id)unarchiveHomeData:(id *)arg1 decryptionFailed:(BOOL *)arg2;
+ (id)unarchiveIDSDataSyncJournal;
+ (id)unarchiveVendorStore;
+ (id)writeData:(id)arg1 toStorePath:(id)arg2 dataLabel:(id)arg3;
+ (BOOL)writeDictionary:(id)arg1 toStorePath:(id)arg2;

@end
