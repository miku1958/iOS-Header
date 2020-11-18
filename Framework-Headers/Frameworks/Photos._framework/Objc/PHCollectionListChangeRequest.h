//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/PHInsertChangeRequest-Protocol.h>
#import <Photos/PHUpdateChangeRequest-Protocol.h>

@class NSManagedObjectID, NSString, PHChangeRequestHelper, PHCollectionList, PHObjectPlaceholder, PHRelationshipChangeRequestHelper;

@interface PHCollectionListChangeRequest : NSObject <PHInsertChangeRequest, PHUpdateChangeRequest>
{
    PHCollectionList *_originalCollectionList;
    BOOL _clientEntitled;
    NSString *_clientName;
    int _clientProcessID;
    PHChangeRequestHelper *_helper;
    PHRelationshipChangeRequestHelper *_collectionsHelper;
}

@property (readonly, nonatomic, getter=isClientEntitled) BOOL clientEntitled; // @synthesize clientEntitled=_clientEntitled;
@property (readonly, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property (readonly, nonatomic) int clientProcessID; // @synthesize clientProcessID=_clientProcessID;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *collectionsHelper; // @synthesize collectionsHelper=_collectionsHelper;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) PHChangeRequestHelper *helper; // @synthesize helper=_helper;
@property (readonly, nonatomic) NSString *managedEntityName;
@property (readonly, getter=isMutated) BOOL mutated;
@property (readonly, getter=isNew) BOOL new;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedCollectionList;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *uuid;

+ (id)_changeRequestForCollectionList:(id)arg1 optionalChildCollections:(id)arg2;
+ (BOOL)canGenerateUUIDWithoutEntitlements;
+ (id)changeRequestForCollectionList:(id)arg1;
+ (id)changeRequestForCollectionList:(id)arg1 childCollections:(id)arg2;
+ (id)creationRequestForCollectionListWithTitle:(id)arg1;
+ (void)deleteCollectionLists:(id)arg1;
- (void).cxx_destruct;
- (id)_mutableObjectIDsAndUUIDs;
- (void)_prepareAssetIDsIfNeeded;
- (void)_prepareWithFetchResult:(id)arg1;
- (void)_setOriginalCollectionList:(id)arg1;
- (void)addChildCollection:(id)arg1;
- (void)addChildCollections:(id)arg1;
- (BOOL)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id *)arg3;
- (BOOL)applyMutationsToManagedObject:(id)arg1 error:(id *)arg2;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (void)didMutate;
- (void)encodeToXPCDict:(id)arg1;
- (id)initForNewObject;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (id)initWithXPCDict:(id)arg1 clientEntitlements:(id)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5;
- (void)insertChildCollection:(id)arg1 inChildCollectionsAtIndex:(unsigned long long)arg2;
- (void)insertChildCollections:(id)arg1 atIndexes:(id)arg2;
- (void)moveChildCollectionsAtIndexes:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1;
- (BOOL)prepareForPhotoLibraryCheck:(id)arg1 error:(id *)arg2;
- (BOOL)prepareForServicePreflightCheck:(id *)arg1;
- (void)removeChildCollection:(id)arg1;
- (void)removeChildCollectionFromChildCollectionsAtIndex:(unsigned long long)arg1;
- (void)removeChildCollections:(id)arg1;
- (void)removeChildCollectionsAtIndexes:(id)arg1;
- (void)replaceChildCollectionsAtIndex:(unsigned long long)arg1 withChildCollection:(id)arg2;
- (void)replaceChildCollectionsAtIndexes:(id)arg1 withChildCollections:(id)arg2;
- (BOOL)validateInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (BOOL)validateMutationsToManagedObject:(id)arg1 error:(id *)arg2;

@end

