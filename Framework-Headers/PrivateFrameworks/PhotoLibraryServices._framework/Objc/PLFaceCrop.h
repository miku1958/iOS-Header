//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

#import <PhotoLibraryServices/PLCloudDeletable-Protocol.h>
#import <PhotoLibraryServices/PLSyncableObject-Protocol.h>

@class NSData, NSString, PLDetectedFace, PLManagedAsset, PLPerson;

@interface PLFaceCrop : PLManagedObject <PLSyncableObject, PLCloudDeletable>
{
    BOOL _needsPersistenceUpdate;
}

@property (strong, nonatomic) PLManagedAsset *asset; // @dynamic asset;
@property (nonatomic) short cloudDeleteState; // @dynamic cloudDeleteState;
@property (readonly) long long cloudDeletionType;
@property (nonatomic) short cloudLocalState; // @dynamic cloudLocalState;
@property (nonatomic) unsigned short cloudType; // @dynamic cloudType;
@property (readonly, copy) NSString *cloudUUIDForDeletion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) PLDetectedFace *face; // @dynamic face;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *invalidMergeCandidatePersonUUID; // @dynamic invalidMergeCandidatePersonUUID;
@property (readonly, strong, nonatomic) id localID;
@property (nonatomic) BOOL needsPersistenceUpdate; // @synthesize needsPersistenceUpdate=_needsPersistenceUpdate;
@property (strong, nonatomic) PLPerson *person; // @dynamic person;
@property (strong, nonatomic) NSData *resourceData; // @dynamic resourceData;
@property (nonatomic) short state; // @dynamic state;
@property (readonly) Class superclass;
@property (nonatomic) short type; // @dynamic type;
@property (copy, nonatomic) NSString *uuid; // @dynamic uuid;

+ (long long)_cloudTypeToPushFromLocalType:(short)arg1 cachedCloudType:(unsigned short)arg2;
+ (id)_faceCropsMatchingPredicate:(id)arg1 limit:(unsigned long long)arg2 inManagedObjectContext:(id)arg3;
+ (short)_localTypeFromCloudType:(long long)arg1;
+ (int)_nameSourceForFaceFromFaceCrop:(id)arg1;
+ (int)_trainingFaceTypeForFaceFromFaceCrop:(id)arg1;
+ (id)allFaceCropsInPhotoLibrary:(id)arg1;
+ (id)batchFetchFaceCropByFaceObjectIDWithFaceObjectIDs:(id)arg1 library:(id)arg2;
+ (long long)cloudDeletionTypeForTombstone:(id)arg1;
+ (id)cloudUUIDKeyForDeletion;
+ (id)entityName;
+ (id)faceCropsToUploadInPhotoLibrary:(id)arg1 limit:(unsigned long long)arg2;
+ (id)faceCropsWithUUIDs:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)faceCropsWithUUIDs:(id)arg1 inPhotoLibrary:(id)arg2;
+ (id)insertIntoManagedObjectContext:(id)arg1 withUUID:(id)arg2 resourceData:(id)arg3 type:(short)arg4;
+ (id)insertIntoPhotoLibrary:(id)arg1 withUUID:(id)arg2 resourceData:(id)arg3 type:(short)arg4;
+ (id)insertOrUpdateWithCPLFaceCrop:(id)arg1 inPhotoLibrary:(id)arg2;
+ (id)listOfSyncedProperties;
+ (void)resetCloudStateInPhotoLibrary:(id)arg1;
- (void)applyPropertiesToTrainingFace;
- (id)cplFaceCropChange;
- (id)cplFullRecord;
- (BOOL)isSyncableChange;
- (id)momentShare;
- (void)prepareForDeletion;
- (BOOL)supportsCloudUpload;
- (void)willSave;

@end
