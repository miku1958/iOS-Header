//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/PHInsertChangeRequest-Protocol.h>
#import <Photos/PHUpdateChangeRequest-Protocol.h>

@class NSManagedObjectID, NSString, PHChangeRequestHelper, PHFaceprint, PHObjectPlaceholder;

@interface PHFaceChangeRequest : NSObject <PHInsertChangeRequest, PHUpdateChangeRequest>
{
    BOOL _clientEntitled;
    NSString *_clientName;
    int _clientProcessID;
    PHFaceprint *_faceprint;
    BOOL _didSetFaceprint;
    BOOL _shouldClearFaceCropGenerationState;
    PHChangeRequestHelper *_helper;
}

@property (copy, nonatomic) id adjustmentVersion;
@property (nonatomic) double blurScore;
@property (nonatomic) double centerX;
@property (nonatomic) double centerY;
@property (readonly, nonatomic, getter=isClientEntitled) BOOL clientEntitled; // @synthesize clientEntitled=_clientEntitled;
@property (readonly, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property (readonly, nonatomic) int clientProcessID; // @synthesize clientProcessID=_clientProcessID;
@property (nonatomic) long long clusterSequenceNumber;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double expressionConfidence;
@property (nonatomic) double expressionScore1;
@property (nonatomic) double expressionScore2;
@property (nonatomic) double expressionScore3;
@property (nonatomic) long long expressionType1;
@property (nonatomic) long long expressionType2;
@property (nonatomic) long long expressionType3;
@property (nonatomic) long long faceAlgorithmVersion;
@property (strong, nonatomic) PHFaceprint *faceprint;
@property (nonatomic) BOOL hasSmile;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) PHChangeRequestHelper *helper; // @synthesize helper=_helper;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (nonatomic, getter=isInTrash) BOOL inTrash;
@property (nonatomic, getter=isLeftEyeClosed) BOOL leftEyeClosed;
@property (nonatomic) double leftEyeX;
@property (nonatomic) double leftEyeY;
@property (readonly, nonatomic) NSString *managedEntityName;
@property (nonatomic) BOOL manual;
@property (nonatomic) double mouthX;
@property (nonatomic) double mouthY;
@property (readonly, getter=isMutated) BOOL mutated;
@property (nonatomic) long long nameSource;
@property (readonly, getter=isNew) BOOL new;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedFace;
@property (nonatomic) double posePitch;
@property (nonatomic) double poseRoll;
@property (nonatomic) double poseYaw;
@property (nonatomic) long long qualityMeasure;
@property (nonatomic, getter=isRightEyeClosed) BOOL rightEyeClosed;
@property (nonatomic) double rightEyeX;
@property (nonatomic) double rightEyeY;
@property (nonatomic) BOOL shouldClearFaceCropGenerationState; // @synthesize shouldClearFaceCropGenerationState=_shouldClearFaceCropGenerationState;
@property (nonatomic) double size;
@property (nonatomic) long long sourceHeight;
@property (nonatomic) long long sourceWidth;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uuid;

+ (BOOL)canGenerateUUIDWithoutEntitlements;
+ (id)changeRequestForFace:(id)arg1;
+ (id)creationRequestForFace;
+ (void)deleteFaces:(id)arg1;
- (void).cxx_destruct;
- (BOOL)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id *)arg3;
- (BOOL)applyMutationsToManagedObject:(id)arg1 error:(id *)arg2;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (void)didMutate;
- (void)encodeToXPCDict:(id)arg1;
- (id)initForNewObject;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (id)initWithXPCDict:(id)arg1 clientEntitlements:(id)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5;
- (void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1;
- (BOOL)prepareForServicePreflightCheck:(id *)arg1;
- (BOOL)validateInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (BOOL)validateMutationsToManagedObject:(id)arg1 error:(id *)arg2;

@end

