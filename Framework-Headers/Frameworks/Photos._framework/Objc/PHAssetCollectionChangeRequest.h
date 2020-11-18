//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHChangeRequest.h>

#import <Photos/PHInsertChangeRequest-Protocol.h>
#import <Photos/PHUpdateChangeRequest-Protocol.h>

@class NSManagedObjectID, NSString, PHAssetCollection, PHObjectPlaceholder, PHRelationshipChangeRequestHelper;

@interface PHAssetCollectionChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest>
{
    PHAssetCollection *_originalAssetCollection;
    PHRelationshipChangeRequestHelper *_assetsHelper;
    PHRelationshipChangeRequestHelper *_customKeyAssetHelper;
}

@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *assetsHelper; // @synthesize assetsHelper=_assetsHelper;
@property (readonly, nonatomic, getter=isClientEntitled) BOOL clientEntitled;
@property (readonly, nonatomic) NSString *clientName;
@property (readonly, nonatomic) CDUnknownBlockType concurrentWorkBlock;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *customKeyAssetHelper; // @synthesize customKeyAssetHelper=_customKeyAssetHelper;
@property (nonatomic) BOOL customSortAscending;
@property (nonatomic) unsigned int customSortKey;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) BOOL isNewRequest;
@property (readonly, nonatomic) NSString *managedEntityName;
@property (readonly, getter=isMutated) BOOL mutated;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (strong, nonatomic) PHAssetCollection *originalAssetCollection; // @synthesize originalAssetCollection=_originalAssetCollection;
@property (readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedAssetCollection;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSString *title;

+ (id)_changeRequestForAssetCollection:(id)arg1 optionalAssets:(id)arg2;
+ (void)_deleteAssetCollections:(id)arg1 withOperation:(long long)arg2 topLevelSelector:(SEL)arg3;
+ (id)changeRequestForAssetCollection:(id)arg1;
+ (id)changeRequestForAssetCollection:(id)arg1 assets:(id)arg2;
+ (id)creationRequestForAssetCollectionCopyFromAssetCollection:(id)arg1;
+ (id)creationRequestForAssetCollectionWithTitle:(id)arg1;
+ (void)deleteAssetCollections:(id)arg1;
+ (void)expungeAssetCollections:(id)arg1;
+ (void)undeleteAssetCollections:(id)arg1;
+ (id)validateAssetCollectionTitle:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (id)_mutableAssetsObjectIDsAndUUIDs;
- (id)_mutableKeyAssetObjectIDsAndUUIDs;
- (void)_prepareAssetIDsIfNeeded;
- (void)_prepareKeyAssetIDIfNeeded;
- (void)_prepareWithFetchResult:(id)arg1;
- (void)_setOriginalAssetCollection:(id)arg1;
- (void)addAsset:(id)arg1;
- (void)addAssets:(id)arg1;
- (BOOL)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id *)arg3;
- (BOOL)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id *)arg3;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (void)encodeToXPCDict:(id)arg1;
- (id)initForNewObject;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;
- (void)insertAsset:(id)arg1 inAssetsAtIndex:(unsigned long long)arg2;
- (void)insertAssets:(id)arg1 atIndexes:(id)arg2;
- (BOOL)isPinned;
- (void)moveAssetsAtIndexes:(id)arg1 toIndex:(unsigned long long)arg2;
- (BOOL)prepareForPhotoLibraryCheck:(id)arg1 error:(id *)arg2;
- (BOOL)prepareForServicePreflightCheck:(id *)arg1;
- (void)removeAsset:(id)arg1;
- (void)removeAssetFromAssetsAtIndex:(unsigned long long)arg1;
- (void)removeAssets:(id)arg1;
- (void)removeAssetsAtIndexes:(id)arg1;
- (void)replaceAssetInAssetsAtIndex:(unsigned long long)arg1 withAsset:(id)arg2;
- (void)replaceAssetsAtIndexes:(id)arg1 withAssets:(id)arg2;
- (void)setCustomKeyAsset:(id)arg1;
- (void)setIsPinned:(BOOL)arg1;
- (BOOL)validateInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (BOOL)validateMutationsToManagedObject:(id)arg1 error:(id *)arg2;

@end
