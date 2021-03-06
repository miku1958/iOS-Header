//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

#import <NotesShared/ICCloudObject-Protocol.h>
#import <NotesShared/ICLoggable-Protocol.h>

@class CKRecord, CKShare, ICCloudState, NSData, NSMutableDictionary, NSString;

@interface ICCloudSyncingObject : NSManagedObject <ICCloudObject, ICLoggable>
{
    BOOL _needsToLoadDecryptedValues;
    BOOL mergingUnappliedEncryptedRecord;
    NSMutableDictionary *_decryptedValues;
    CKRecord *_serverRecord;
    CKShare *_serverShare;
    CKRecord *_userSpecificServerRecord;
}

@property (readonly, nonatomic) BOOL canSyncPasswordProtectionFields;
@property (strong, nonatomic) ICCloudState *cloudState; // @dynamic cloudState;
@property (strong, nonatomic) NSData *cryptoInitializationVector; // @dynamic cryptoInitializationVector;
@property (nonatomic) long long cryptoIterationCount; // @dynamic cryptoIterationCount;
@property (strong, nonatomic) NSData *cryptoSalt; // @dynamic cryptoSalt;
@property (strong, nonatomic) NSData *cryptoTag; // @dynamic cryptoTag;
@property (strong, nonatomic) NSData *cryptoWrappedKey; // @dynamic cryptoWrappedKey;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSMutableDictionary *decryptedValues; // @synthesize decryptedValues=_decryptedValues;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSData *encryptedValuesJSON; // @dynamic encryptedValuesJSON;
@property long long failedToSyncCount;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *identifier; // @dynamic identifier;
@property (readonly, nonatomic) long long intrinsicNotesVersion;
@property (nonatomic) BOOL isPasswordProtected; // @dynamic isPasswordProtected;
@property (readonly, nonatomic) BOOL isUnsupported;
@property (readonly, nonatomic) BOOL isVisible;
@property (nonatomic) BOOL markedForDeletion; // @dynamic markedForDeletion;
@property (nonatomic, getter=isMergingUnappliedEncryptedRecord) BOOL mergingUnappliedEncryptedRecord; // @synthesize mergingUnappliedEncryptedRecord;
@property (nonatomic) long long minimumSupportedNotesVersion; // @dynamic minimumSupportedNotesVersion;
@property (nonatomic) BOOL needsInitialFetchFromCloud; // @dynamic needsInitialFetchFromCloud;
@property (nonatomic) BOOL needsToBeFetchedFromCloud; // @dynamic needsToBeFetchedFromCloud;
@property (nonatomic) BOOL needsToLoadDecryptedValues; // @synthesize needsToLoadDecryptedValues=_needsToLoadDecryptedValues;
@property (nonatomic) BOOL needsToSaveUserSpecificRecord; // @dynamic needsToSaveUserSpecificRecord;
@property long long numberOfPushAttemptsToWaitCount;
@property (strong, nonatomic) NSString *passwordHint; // @dynamic passwordHint;
@property (strong, nonatomic) NSString *primitiveZoneOwnerName; // @dynamic primitiveZoneOwnerName;
@property (strong, nonatomic) CKRecord *serverRecord; // @synthesize serverRecord=_serverRecord;
@property (strong, nonatomic) NSData *serverRecordData; // @dynamic serverRecordData;
@property (strong, nonatomic) CKShare *serverShare; // @synthesize serverShare=_serverShare;
@property (readonly, nonatomic) CKShare *serverShareCheckingParent;
@property (strong, nonatomic) NSData *serverShareData; // @dynamic serverShareData;
@property (readonly, nonatomic) BOOL shouldBeIgnoredForSync;
@property (readonly, nonatomic) BOOL shouldSyncMinimumSupportedNotesVersion;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSData *unappliedEncryptedRecord; // @dynamic unappliedEncryptedRecord;
@property (strong, nonatomic) CKRecord *userSpecificServerRecord; // @synthesize userSpecificServerRecord=_userSpecificServerRecord;
@property (strong, nonatomic) NSData *userSpecificServerRecordData; // @dynamic userSpecificServerRecordData;
@property (strong, nonatomic) NSString *zoneOwnerName; // @dynamic zoneOwnerName;

+ (id)allCloudObjectsInContext:(id)arg1;
+ (id)allPasswordProtectedObjectsInContext:(id)arg1;
+ (id)assetForData:(id)arg1;
+ (id)cloudObjectWithIdentifier:(id)arg1 context:(id)arg2;
+ (long long)currentNotesVersion;
+ (void)deleteAllTemporaryAssetFilesForAllObjects;
+ (void)deleteTemporaryAssetFilesForOperation:(id)arg1;
+ (void)deleteTemporaryFilesForAsset:(id)arg1;
+ (id)deletedByThisDeviceOperationQueue;
+ (id)deletedByThisDeviceSet;
+ (id)existingCloudObjectForRecordID:(id)arg1 accountID:(id)arg2 context:(id)arg3;
+ (id)failedToSyncCountsByIdentifier;
+ (id)failureCountQueue;
+ (id)keyPathsForValuesAffectingCanBeSharedViaICloud;
+ (id)keyPathsForValuesAffectingCloudAccount;
+ (id)keyPathsForValuesAffectingIsSharedReadOnly;
+ (id)keyPathsForValuesAffectingIsSharedViaICloud;
+ (id)keyPathsForValuesAffectingNeedsToBeDeletedFromCloud;
+ (id)keyPathsForValuesAffectingNeedsToBePushedToCloud;
+ (id)keyPathsForValuesAffectingServerShareCheckingParent;
+ (id)keyPathsForValuesAffectingZoneOwnerName;
+ (BOOL)needsToReFetchServerRecordValue:(id)arg1;
+ (id)newCloudObjectForRecord:(id)arg1 accountID:(id)arg2 context:(id)arg3;
+ (id)newObjectWithIdentifier:(id)arg1 context:(id)arg2;
+ (id)newPlaceholderObjectForRecordName:(id)arg1 accountID:(id)arg2 context:(id)arg3;
+ (id)numberOfPushAttemptsToWaitByIdentifier;
+ (id)objectWithRecordID:(id)arg1 accountID:(id)arg2 context:(id)arg3;
+ (id)objectsWithRecordID:(id)arg1 context:(id)arg2;
+ (id)predicateForVisibleObjects;
+ (id)recordSystemFieldsTransformer;
+ (void)resetAllDeletedByThisDeviceProperties;
+ (id)shareSystemFieldsTransformer;
+ (BOOL)supportsUserSpecificRecords;
+ (id)temporaryAssetDirectoryURL;
+ (id)temporaryAssets;
+ (id)versionsByOperationQueue;
+ (id)versionsByRecordIDByOperation;
- (void).cxx_destruct;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (BOOL)canBeRootShareObject;
- (BOOL)canBeSharedViaICloud;
- (id)childCloudObjects;
- (id)childCloudObjectsForMinimumSupportedVersionPropagation;
- (void)clearChangeCount;
- (void)clearServerRecord;
- (id)cloudAccount;
- (id)cryptoMasterKey;
- (id)cryptoPassphraseVerifier;
- (long long)databaseScope;
- (void)decrementFailureCounts;
- (void)decryptAndMergeEncryptedJSON:(id)arg1;
- (id)decryptedValueForKey:(id)arg1;
- (void)deleteChangeTokensAndReSync;
- (void)deleteFromLocalDatabase;
- (BOOL)deletedByThisDevice;
- (void)didAcceptShare:(id)arg1;
- (void)didDeleteUserSpecificRecordID:(id)arg1;
- (void)didFailToSaveUserSpecificRecord:(id)arg1 accountID:(id)arg2 error:(id)arg3;
- (void)didFetchUserSpecificRecord:(id)arg1 accountID:(id)arg2;
- (void)didSaveUserSpecificRecord:(id)arg1;
- (void)didTurnIntoFault;
- (void)fixBrokenReferences;
- (BOOL)hasAllMandatoryFields;
- (BOOL)hasSuccessfullyPushedLatestVersionToCloud;
- (id)ic_loggingIdentifier;
- (id)ic_loggingValues;
- (void)incrementFailureCounts;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;
- (void)initializeCryptoProperties;
- (void)initializeCryptoPropertiesFromObject:(id)arg1;
- (BOOL)isDeletable;
- (BOOL)isEncryptableKeyBinaryData:(id)arg1;
- (BOOL)isInCloud;
- (BOOL)isInICloudAccount;
- (BOOL)isOwnedByCurrentUser;
- (long long)isPushingSameOrLaterThanVersion:(long long)arg1;
- (BOOL)isSharedReadOnly;
- (BOOL)isSharedRootObject;
- (BOOL)isSharedViaICloud;
- (BOOL)isValidObject;
- (void)loadDecryptedValuesIfNecessary;
- (id)loggingDescription;
- (void)markForDeletion;
- (void)mergeCryptoTagAndInitializationVectorFromRecord:(id)arg1;
- (void)mergeDataFromRecord:(id)arg1 accountID:(id)arg2;
- (void)mergeDataFromUserSpecificRecord:(id)arg1 accountID:(id)arg2;
- (id)mergeDecryptedValue:(id)arg1 withOldValue:(id)arg2 forKey:(id)arg3;
- (void)mergeEncryptedDataFromRecord:(id)arg1;
- (void)mergeUnappliedEncryptedRecord;
- (BOOL)needsToBeDeletedFromCloud;
- (BOOL)needsToBePushedToCloud;
- (BOOL)needsToDeleteShare;
- (BOOL)needsToFetchAfterServerRecordChanged:(id)arg1;
- (id)newlyCreatedRecord;
- (id)newlyCreatedRecordWithObfuscator:(id)arg1;
- (id)newlyCreatedUserSpecificRecord;
- (void)objectFailedToBePushedToCloudWithOperation:(id)arg1 record:(id)arg2 error:(id)arg3;
- (void)objectWasDeletedFromCloud;
- (void)objectWasDeletedFromCloudByAnotherDevice;
- (void)objectWasFetchedButDoesNotExistInCloud;
- (void)objectWasFetchedFromCloudWithRecord:(id)arg1 accountID:(id)arg2;
- (void)objectWasPushedToCloudWithOperation:(id)arg1 serverRecord:(id)arg2;
- (void)objectWillBePushedToCloudWithOperation:(id)arg1;
- (id)objectsToBeDeletedBeforeThisObject;
- (id)parentCloudObject;
- (id)parentCloudObjectForMinimumSupportedVersionPropagation;
- (id)parentEncryptableObject;
- (id)primitiveValueForEncryptableKey:(id)arg1;
- (id)recordID;
- (id)recordName;
- (id)recordType;
- (id)recordZoneName;
- (void)requireMinimumSupportedVersionAndPropagateToChildObjects:(long long)arg1;
- (void)resetFailureCounts;
- (void)resetToIntrinsicNotesVersionAndPropagateToChildObjects;
- (void)resetUniqueIdentifier;
- (void)saveAndClearDecryptedData;
- (void)saveAndClearDecryptedDataIfNecessary;
- (void)saveEncryptedJSON;
- (void)setCryptoMasterKey:(id)arg1;
- (void)setDecryptedValue:(id)arg1 forKey:(id)arg2;
- (void)setDeletedByThisDevice:(BOOL)arg1;
- (void)setInCloud:(BOOL)arg1;
- (void)setPrimitiveValue:(id)arg1 forEncryptableKey:(id)arg2;
- (void)setServerShareIfNewer:(id)arg1;
- (void)setValue:(id)arg1 forEncryptableKey:(id)arg2;
- (void)setVersion:(long long)arg1 forOperation:(id)arg2;
- (id)shareDescription;
- (id)shareDescriptionForShareParticipants:(id)arg1;
- (id)shareTitle;
- (id)shareType;
- (id)sharedOwnerName;
- (id)shortLoggingDescription;
- (BOOL)shouldBeDeletedFromLocalDatabase;
- (BOOL)shouldFallBackToCheckAllCryptoKeys;
- (BOOL)supportsDeletionByTTL;
- (BOOL)supportsEncryptedValuesDictionary;
- (void)unitTest_setMinimumSupportedNotesVersion:(long long)arg1;
- (void)unmarkForDeletion;
- (void)updateChangeCount;
- (void)updateChangeCountsForUnsavedParentReferences;
- (void)updateParentReferenceIfNecessary;
- (id)userSpecificRecordID;
- (id)userSpecificRecordType;
- (BOOL)validateIdentifier:(inout id *)arg1 error:(out id *)arg2;
- (id)valueForEncryptableKey:(id)arg1;
- (long long)versionForOperation:(id)arg1;
- (BOOL)wantsUserSpecificRecord;
- (void)willSave;

@end

