//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/PHInsertChangeRequest-Protocol.h>
#import <Photos/PHUpdateChangeRequest-Protocol.h>

@class NSManagedObjectID, NSString, PHChangeRequestHelper, PHObjectPlaceholder, PHPerson, PHRelationshipChangeRequestHelper;

@interface PHPersonChangeRequest : NSObject <PHInsertChangeRequest, PHUpdateChangeRequest>
{
    PHPerson *_originalPerson;
    BOOL _clientEntitled;
    NSString *_clientName;
    int _clientProcessID;
    NSString *_identifier;
    PHChangeRequestHelper *_helper;
    PHRelationshipChangeRequestHelper *_facesHelper;
    PHRelationshipChangeRequestHelper *_keyFaceHelper;
    PHRelationshipChangeRequestHelper *_rejectedFacesGroupHelper;
}

@property (readonly, nonatomic, getter=isClientEntitled) BOOL clientEntitled; // @synthesize clientEntitled=_clientEntitled;
@property (readonly, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property (readonly, nonatomic) int clientProcessID; // @synthesize clientProcessID=_clientProcessID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *facesHelper; // @synthesize facesHelper=_facesHelper;
@property (copy, nonatomic) NSString *fullName;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) PHChangeRequestHelper *helper; // @synthesize helper=_helper;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) BOOL inPersonNamingModel;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *keyFaceHelper; // @synthesize keyFaceHelper=_keyFaceHelper;
@property (readonly, nonatomic) NSString *managedEntityName;
@property (nonatomic) long long manualOrder;
@property (readonly, getter=isMutated) BOOL mutated;
@property (readonly, getter=isNew) BOOL new;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (copy, nonatomic) NSString *personUri;
@property (readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedPerson;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *rejectedFacesGroupHelper; // @synthesize rejectedFacesGroupHelper=_rejectedFacesGroupHelper;
@property (readonly) Class superclass;
@property (nonatomic) long long type;
@property (readonly, nonatomic) NSString *uuid;
@property (nonatomic) BOOL verified;

+ (id)changeRequestForPerson:(id)arg1;
+ (id)creationRequestForPerson;
+ (void)deletePersons:(id)arg1;
- (void).cxx_destruct;
- (id)_existentFaceObjectIDs;
- (id)_mutableKeyFaceObjectIDsAndUUIDs;
- (id)_mutableObjectIDsAndUUIDs;
- (id)_mutableRejectedFacesGroupObjectIDsAndUUIDs;
- (void)_prepareFacesHelperIfNeeded;
- (void)_prepareKeyFaceHelperIfNeeded;
- (void)_prepareRejectedFacesGroupHelperIfNeeded;
- (void)_setOriginalPerson:(id)arg1;
- (BOOL)_shouldSetPersonToVerified:(id)arg1;
- (void)addFaces:(id)arg1;
- (void)addRejectedFaces:(id)arg1;
- (BOOL)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id *)arg3;
- (BOOL)applyMutationsToManagedObject:(id)arg1 error:(id *)arg2;
- (BOOL)canGenerateUUIDLocally;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (void)didMutate;
- (void)encodeToXPCDict:(id)arg1;
- (id)initForNewObject;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (id)initWithXPCDict:(id)arg1 clientEntitlements:(id)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5;
- (id)mutations;
- (void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1;
- (id)personUUID;
- (void)removeFaces:(id)arg1;
- (void)removeRejectedFaces:(id)arg1;
- (void)setKeyFace:(id)arg1;
- (void)setPersonUUID:(id)arg1;
- (BOOL)validateInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (BOOL)validateMutationsToManagedObject:(id)arg1 error:(id *)arg2;

@end

