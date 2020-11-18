//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

#import <PhotoLibraryServices/PLSyncableDetectedFace-Protocol.h>

@class NSDate, NSSet, NSString, PLDetectedFaceGroup, PLDetectedFaceprint, PLManagedAsset, PLPerson;
@protocol PLSyncablePerson;

@interface PLDetectedFace : PLManagedObject <PLSyncableDetectedFace>
{
}

@property (copy, nonatomic) NSDate *adjustmentVersion;
@property (strong, nonatomic) NSDate *adjustmentVersion; // @dynamic adjustmentVersion;
@property (strong, nonatomic) PLManagedAsset *asset; // @dynamic asset;
@property (nonatomic) double blurScore; // @dynamic blurScore;
@property (nonatomic) double centerX;
@property (nonatomic) double centerX; // @dynamic centerX;
@property (nonatomic) double centerY;
@property (nonatomic) double centerY; // @dynamic centerY;
@property (nonatomic) short cloudLocalState;
@property (nonatomic) short cloudLocalState; // @dynamic cloudLocalState;
@property (nonatomic) int clusterSequenceNumber; // @dynamic clusterSequenceNumber;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double expressionConfidence; // @dynamic expressionConfidence;
@property (nonatomic) double expressionScore1; // @dynamic expressionScore1;
@property (nonatomic) double expressionScore2; // @dynamic expressionScore2;
@property (nonatomic) double expressionScore3; // @dynamic expressionScore3;
@property (nonatomic) int expressionType1; // @dynamic expressionType1;
@property (nonatomic) int expressionType2; // @dynamic expressionType2;
@property (nonatomic) int expressionType3; // @dynamic expressionType3;
@property (nonatomic) long long faceAlgorithmVersion;
@property (nonatomic) int faceAlgorithmVersion; // @dynamic faceAlgorithmVersion;
@property (strong, nonatomic) PLDetectedFaceGroup *faceGroupBeingKeyFace; // @dynamic faceGroupBeingKeyFace;
@property (strong, nonatomic) NSSet *faceGroups; // @dynamic faceGroups;
@property (strong, nonatomic) PLDetectedFaceprint *faceprint; // @dynamic faceprint;
@property (nonatomic) BOOL hasSmile; // @dynamic hasSmile;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL hidden;
@property (nonatomic) BOOL hidden; // @dynamic hidden;
@property (nonatomic) BOOL isInTrash; // @dynamic isInTrash;
@property (nonatomic) BOOL isLeftEyeClosed; // @dynamic isLeftEyeClosed;
@property (nonatomic) BOOL isRightEyeClosed; // @dynamic isRightEyeClosed;
@property (nonatomic) double leftEyeX; // @dynamic leftEyeX;
@property (nonatomic) double leftEyeY; // @dynamic leftEyeY;
@property (nonatomic) BOOL manual;
@property (nonatomic) BOOL manual; // @dynamic manual;
@property (strong, nonatomic) NSString *masterIdentifier; // @dynamic masterIdentifier;
@property (nonatomic) double mouthX; // @dynamic mouthX;
@property (nonatomic) double mouthY; // @dynamic mouthY;
@property (nonatomic) int nameSource; // @dynamic nameSource;
@property (nonatomic) BOOL nameSourceAuto;
@property (strong, nonatomic) id<PLSyncablePerson> person;
@property (strong, nonatomic) PLPerson *person; // @dynamic person;
@property (strong, nonatomic) id<PLSyncablePerson> personBeingKeyFace;
@property (strong, nonatomic) PLPerson *personBeingKeyFace; // @dynamic personBeingKeyFace;
@property (nonatomic) double posePitch; // @dynamic posePitch;
@property (nonatomic) double poseRoll; // @dynamic poseRoll;
@property (nonatomic) double poseYaw; // @dynamic poseYaw;
@property (nonatomic) int qualityMeasure; // @dynamic qualityMeasure;
@property (strong, nonatomic) NSSet *rejectedPeople;
@property (nonatomic) double rightEyeX; // @dynamic rightEyeX;
@property (nonatomic) double rightEyeY; // @dynamic rightEyeY;
@property (nonatomic) double size;
@property (nonatomic) double size; // @dynamic size;
@property (nonatomic) long long sourceHeight;
@property (nonatomic) int sourceHeight; // @dynamic sourceHeight;
@property (nonatomic) long long sourceWidth;
@property (nonatomic) int sourceWidth; // @dynamic sourceWidth;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSString *uuid; // @dynamic uuid;

+ (id)_allSyncableFacesInManagedObjectContext:(id)arg1;
+ (void)batchFetchDetectedFacesByAssetUUIDWithAssetUUIDs:(id)arg1 predicate:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)detectedFaceWithUUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (void)enumerateAssetUUIDsForSearchIndexingWithDetctedFaceUUIDs:(id)arg1 managedObjectContext:(id)arg2 assetUUIDHandler:(CDUnknownBlockType)arg3;
+ (id)findExistingFaceMatchingRef:(id)arg1 inFaces:(id)arg2 inAsset:(id)arg3;
+ (id)insertInManagedObjectContext:(id)arg1;
+ (id)predicatesToExcludeNonVisibleFaces;
+ (long long)resetAssetForAllSyncableFacesInManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (id)userCuratedFacePredicate;
- (void)_updateFaceGroupIfNeeded;
- (void)_updateFileSystemPersistenceIfNeeded;
- (void)_verifyAssetRelationship;
- (void)awakeFromInsert;
- (id)debugLogDescription;
- (void)delete;
- (void)removeFaceprint;
- (void)willSave;

@end
