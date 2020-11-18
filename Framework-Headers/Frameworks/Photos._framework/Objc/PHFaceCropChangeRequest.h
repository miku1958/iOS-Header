//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHChangeRequest.h>

#import <Photos/PHInsertChangeRequest-Protocol.h>
#import <Photos/PHUpdateChangeRequest-Protocol.h>

@class NSData, NSManagedObjectID, NSString, PHObjectPlaceholder, PHRelationshipChangeRequestHelper;

@interface PHFaceCropChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest>
{
    NSString *_originatingFaceUUID;
    PHRelationshipChangeRequestHelper *_faceHelper;
    PHRelationshipChangeRequestHelper *_personHelper;
}

@property (readonly, nonatomic, getter=isClientEntitled) BOOL clientEntitled;
@property (readonly, nonatomic) NSString *clientName;
@property (readonly, nonatomic) CDUnknownBlockType concurrentWorkBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *faceHelper; // @synthesize faceHelper=_faceHelper;
@property (readonly) unsigned long long hash;
@property (readonly) BOOL isNewRequest;
@property (readonly, nonatomic) NSString *managedEntityName;
@property (readonly, getter=isMutated) BOOL mutated;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (copy, nonatomic) NSString *originatingFaceUUID; // @synthesize originatingFaceUUID=_originatingFaceUUID;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *personHelper; // @synthesize personHelper=_personHelper;
@property (readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedFaceCrop;
@property (strong, nonatomic) NSData *resourceData;
@property (nonatomic) short state;
@property (readonly) Class superclass;

+ (id)_creationRequestForFaceCropWithOriginatingFace:(id)arg1 resourceData:(id)arg2 person:(id)arg3;
+ (id)_creationRequestForFaceCropWithOriginatingFace:(id)arg1 resourceData:(id)arg2 personLocalIdentifier:(id)arg3;
+ (BOOL)canGenerateUUIDWithoutEntitlements;
+ (id)changeRequestForFaceCrop:(id)arg1;
+ (id)creationRequestsForFaceCropsWithOriginatingFace:(id)arg1 resourceData:(id)arg2;
+ (void)deleteFaceCrops:(id)arg1;
- (void).cxx_destruct;
- (id)_mutableFaceObjectIDsAndUUIDs;
- (id)_mutablePersonObjectIDsAndUUIDs;
- (void)_prepareFaceHelperIfNeeded;
- (void)_preparePersonHelperIfNeeded;
- (BOOL)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id *)arg3;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (void)encodeToXPCDict:(id)arg1;
- (id)initForNewObject;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;
- (BOOL)prepareForPhotoLibraryCheck:(id)arg1 error:(id *)arg2;
- (BOOL)prepareForServicePreflightCheck:(id *)arg1;
- (void)setFace:(id)arg1;
- (BOOL)validateInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;

@end
