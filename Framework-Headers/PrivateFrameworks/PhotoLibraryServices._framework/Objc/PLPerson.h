//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

#import <PhotoLibraryServices/PLSyncablePerson-Protocol.h>

@class NSSet, NSString, PLDetectedFace, PLDetectedFaceGroup;

@interface PLPerson : PLManagedObject <PLSyncablePerson>
{
    BOOL _needsPersistenceUpdate;
}

@property (strong, nonatomic) PLDetectedFaceGroup *associatedFaceGroup; // @dynamic associatedFaceGroup;
@property (nonatomic) short cloudLocalState; // @dynamic cloudLocalState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSSet *detectedFaces; // @dynamic detectedFaces;
@property (strong, nonatomic) NSString *displayName; // @dynamic displayName;
@property (nonatomic) int faceCount; // @dynamic faceCount;
@property (strong, nonatomic) NSString *fullName;
@property (strong, nonatomic) NSString *fullName; // @dynamic fullName;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL inPersonNamingModel; // @dynamic inPersonNamingModel;
@property (strong, nonatomic) PLDetectedFace *keyFace; // @dynamic keyFace;
@property (nonatomic) int manualOrder; // @dynamic manualOrder;
@property (nonatomic) BOOL needsPersistenceUpdate; // @synthesize needsPersistenceUpdate=_needsPersistenceUpdate;
@property (strong, nonatomic) NSSet *personReferences; // @dynamic personReferences;
@property (strong, nonatomic) NSString *personUUID;
@property (strong, nonatomic) NSString *personUUID; // @dynamic personUUID;
@property (strong, nonatomic) NSString *personUri; // @dynamic personUri;
@property (strong, nonatomic) PLDetectedFaceGroup *rejectedFacesGroup; // @dynamic rejectedFacesGroup;
@property (readonly) Class superclass;
@property (nonatomic) int type; // @dynamic type;
@property (nonatomic) BOOL verified;
@property (nonatomic) BOOL verified; // @dynamic verified;

+ (id)allPersonsInManagedObjectContext:(id)arg1;
+ (void)batchFetchPersonsByAssetUUIDWithAssetUUIDs:(id)arg1 predicate:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)createAssociatedPersonForFaceGroup:(id)arg1;
+ (void)createAssociatedPersonForFaceGroup:(id)arg1 inManagedObjectContext:(id)arg2;
+ (void)deleteAllPersonsInManagedObjectContext:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (void)enumerateAssetUUIDsForSearchIndexingWithPersonUUID:(id)arg1 managedObjectContext:(id)arg2 assetUUIDHandler:(CDUnknownBlockType)arg3;
+ (id)fetchPersonCountByAssetUUIDForAssetUUIDs:(id)arg1 predicate:(id)arg2 error:(id *)arg3;
+ (id)insertIntoManagedObjectContext:(id)arg1 withPersonUUID:(id)arg2 fullName:(id)arg3 verified:(BOOL)arg4;
+ (id)insertIntoPhotoLibrary:(id)arg1 withPersonUUID:(id)arg2 fullName:(id)arg3 verified:(BOOL)arg4;
+ (id)peopleToUploadInPhotoLibrary:(id)arg1 limit:(long long)arg2;
+ (id)peopleWithUUIDs:(id)arg1 inPhotoLibrary:(id)arg2;
+ (id)personWithUUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (void)resetCloudStateInPhotoLibrary:(id)arg1;
- (id)cplPersonChange;
- (id)debugLogDescription;
- (void)didSave;
- (BOOL)isValidForPersistence;
- (id)mutableFaces;
- (void)persistMetadataToFileSystem;
- (void)prepareForDeletion;
- (void)refreshFaces;
- (id)rejectedFacesGroupInsertingIfNeeded;
- (void)removePersistedFileSystemData;
- (BOOL)shouldIndexForSearch;
- (void)willSave;

@end
