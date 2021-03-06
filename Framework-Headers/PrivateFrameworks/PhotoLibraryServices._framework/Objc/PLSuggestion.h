//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

#import <PhotoLibraryServices/PLCloudDeletable-Protocol.h>

@class NSData, NSDate, NSSet, NSString;

@interface PLSuggestion : PLManagedObject <PLCloudDeletable>
{
}

@property (strong, nonatomic) NSData *actionData; // @dynamic actionData;
@property (strong, nonatomic) NSDate *activationDate; // @dynamic activationDate;
@property (nonatomic) int cachedCount; // @dynamic cachedCount;
@property (nonatomic) int cachedPhotosCount; // @dynamic cachedPhotosCount;
@property (nonatomic) int cachedVideosCount; // @dynamic cachedVideosCount;
@property (nonatomic) short cloudDeleteState; // @dynamic cloudDeleteState;
@property (readonly) long long cloudDeletionType;
@property (nonatomic) short cloudLocalState; // @dynamic cloudLocalState;
@property (readonly, copy) NSString *cloudUUIDForDeletion;
@property (strong, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSDate *endDate; // @dynamic endDate;
@property (strong, nonatomic) NSDate *expungeDate; // @dynamic expungeDate;
@property (nonatomic) unsigned short featuredState; // @dynamic featuredState;
@property (strong, nonatomic) NSData *featuresData; // @dynamic featuresData;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSSet *keyAssets; // @dynamic keyAssets;
@property (nonatomic) unsigned short notificationState; // @dynamic notificationState;
@property (strong, nonatomic) NSDate *relevantUntilDate; // @dynamic relevantUntilDate;
@property (strong, nonatomic) NSSet *representativeAssets; // @dynamic representativeAssets;
@property (strong, nonatomic) NSDate *startDate; // @dynamic startDate;
@property (nonatomic) unsigned short state; // @dynamic state;
@property (strong, nonatomic) NSString *subtitle; // @dynamic subtitle;
@property (nonatomic) unsigned short subtype; // @dynamic subtype;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSString *title; // @dynamic title;
@property (nonatomic) unsigned short type; // @dynamic type;
@property (strong, nonatomic) NSString *uuid; // @dynamic uuid;
@property (nonatomic) short version; // @dynamic version;

+ (id)_representativeAssetIDsInSuggestion:(id)arg1 managedObjectContext:(id)arg2;
+ (id)_suggestionsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(long long)arg3 inManagedObjectContext:(id)arg4;
+ (id)_syncablePredicate;
+ (long long)cloudDeletionTypeForTombstone:(id)arg1;
+ (id)cloudUUIDKeyForDeletion;
+ (unsigned long long)deleteAllMomentShareSuggestionsInManagedObjectContext:(id)arg1;
+ (unsigned long long)deletePendingSuggestionsCreatedBefore:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)entityName;
+ (id)insertIntoPhotoLibrary:(id)arg1 withUUID:(id)arg2;
+ (id)predicateForAllAssetsInSuggestion:(id)arg1 managedObjectContext:(id)arg2;
+ (id)predicateForAllMomentsFromRepresentativeAssetsInSuggestion:(id)arg1 managedObjectContext:(id)arg2;
+ (void)resetCloudStateInPhotoLibrary:(id)arg1;
+ (id)suggestionWithUUID:(id)arg1 inPhotoLibrary:(id)arg2;
+ (id)suggestionsToPrefetchInManagedObjectContext:(id)arg1;
+ (id)suggestionsToUploadInPhotoLibrary:(id)arg1 limit:(long long)arg2;
+ (id)suggestionsWithUUIDs:(id)arg1 inPhotoLibrary:(id)arg2;
- (id)cplFullRecord;
- (id)cplSuggestionChange;
- (void)delete;
- (BOOL)isEmpty;
- (BOOL)isPending;
- (BOOL)isSyncableChange;
- (id)mutableKeyAssets;
- (id)mutableRepresentativeAssets;
- (void)prepareForDeletion;
- (void)removeRepresentativeAsset:(id)arg1;
- (void)replaceKeyAsset:(id)arg1;
- (BOOL)supportsCloudUpload;
- (void)updateCachedCounts:(id)arg1;
- (void)updateStartAndEndDate;
- (void)updateWithCPLSuggestionChange:(id)arg1 inPhotoLibrary:(id)arg2;
- (void)willSave;

@end

