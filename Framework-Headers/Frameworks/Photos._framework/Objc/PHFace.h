//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHObject.h>

@class NSString;

@interface PHFace : PHObject
{
    BOOL _hidden;
    BOOL _inTrash;
    BOOL _manual;
    BOOL _hasSmile;
    BOOL _leftEyeClosed;
    BOOL _rightEyeClosed;
    short _confirmedFaceCropGenerationState;
    double _size;
    double _centerX;
    double _centerY;
    long long _clusterSequenceNumber;
    long long _qualityMeasure;
    NSString *_personUUID;
    long long _sourceWidth;
    long long _sourceHeight;
    double _leftEyeX;
    double _leftEyeY;
    double _rightEyeX;
    double _rightEyeY;
    double _mouthX;
    double _mouthY;
    double _blurScore;
    id _adjustmentVersion;
    long long _nameSource;
    double _poseRoll;
    double _poseYaw;
    double _posePitch;
    long long _faceAlgorithmVersion;
    double _expressionConfidence;
    long long _expressionType1;
    double _expressionScore1;
    long long _expressionType2;
    double _expressionScore2;
    long long _expressionType3;
    double _expressionScore3;
}

@property (readonly, copy, nonatomic) id adjustmentVersion; // @synthesize adjustmentVersion=_adjustmentVersion;
@property (readonly, nonatomic) double blurScore; // @synthesize blurScore=_blurScore;
@property (readonly, nonatomic) double centerX; // @synthesize centerX=_centerX;
@property (readonly, nonatomic) double centerY; // @synthesize centerY=_centerY;
@property (readonly, nonatomic) long long clusterSequenceNumber; // @synthesize clusterSequenceNumber=_clusterSequenceNumber;
@property (readonly, nonatomic, getter=isConfirmedFaceCropGenerationPending) BOOL confirmedFaceCropGenerationPending;
@property (readonly, nonatomic) short confirmedFaceCropGenerationState; // @synthesize confirmedFaceCropGenerationState=_confirmedFaceCropGenerationState;
@property (nonatomic) double expressionConfidence; // @synthesize expressionConfidence=_expressionConfidence;
@property (nonatomic) double expressionScore1; // @synthesize expressionScore1=_expressionScore1;
@property (nonatomic) double expressionScore2; // @synthesize expressionScore2=_expressionScore2;
@property (nonatomic) double expressionScore3; // @synthesize expressionScore3=_expressionScore3;
@property (nonatomic) long long expressionType1; // @synthesize expressionType1=_expressionType1;
@property (nonatomic) long long expressionType2; // @synthesize expressionType2=_expressionType2;
@property (nonatomic) long long expressionType3; // @synthesize expressionType3=_expressionType3;
@property (nonatomic) long long faceAlgorithmVersion; // @synthesize faceAlgorithmVersion=_faceAlgorithmVersion;
@property (readonly, nonatomic) BOOL hasSmile; // @synthesize hasSmile=_hasSmile;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden; // @synthesize hidden=_hidden;
@property (readonly, nonatomic, getter=isInTrash) BOOL inTrash; // @synthesize inTrash=_inTrash;
@property (readonly, nonatomic, getter=isLeftEyeClosed) BOOL leftEyeClosed; // @synthesize leftEyeClosed=_leftEyeClosed;
@property (readonly, nonatomic) double leftEyeX; // @synthesize leftEyeX=_leftEyeX;
@property (readonly, nonatomic) double leftEyeY; // @synthesize leftEyeY=_leftEyeY;
@property (readonly, nonatomic) BOOL manual; // @synthesize manual=_manual;
@property (readonly, nonatomic) double mouthX; // @synthesize mouthX=_mouthX;
@property (readonly, nonatomic) double mouthY; // @synthesize mouthY=_mouthY;
@property (readonly, nonatomic) long long nameSource; // @synthesize nameSource=_nameSource;
@property (readonly, nonatomic) NSString *personLocalIdentifier;
@property (readonly, nonatomic) NSString *personUUID; // @synthesize personUUID=_personUUID;
@property (nonatomic) double posePitch; // @synthesize posePitch=_posePitch;
@property (nonatomic) double poseRoll; // @synthesize poseRoll=_poseRoll;
@property (nonatomic) double poseYaw; // @synthesize poseYaw=_poseYaw;
@property (readonly, nonatomic) long long qualityMeasure; // @synthesize qualityMeasure=_qualityMeasure;
@property (readonly, nonatomic, getter=isRightEyeClosed) BOOL rightEyeClosed; // @synthesize rightEyeClosed=_rightEyeClosed;
@property (readonly, nonatomic) double rightEyeX; // @synthesize rightEyeX=_rightEyeX;
@property (readonly, nonatomic) double rightEyeY; // @synthesize rightEyeY=_rightEyeY;
@property (readonly, nonatomic) double size; // @synthesize size=_size;
@property (readonly, nonatomic) long long sourceHeight; // @synthesize sourceHeight=_sourceHeight;
@property (readonly, nonatomic) long long sourceWidth; // @synthesize sourceWidth=_sourceWidth;

+ (id)_composePropertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)_transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
+ (id)corePropertiesToFetch;
+ (id)croppingPropertiesToFetch;
+ (id)entityKeyForPropertyKey:(id)arg1;
+ (id)fetchFacesForFaceCrop:(id)arg1 options:(id)arg2;
+ (id)fetchFacesForPerson:(id)arg1 options:(id)arg2;
+ (id)fetchFacesGroupedByAssetLocalIdentifierForAssets:(id)arg1 options:(id)arg2;
+ (id)fetchFacesInAsset:(id)arg1 options:(id)arg2;
+ (id)fetchFacesInFaceCollection:(id)arg1 options:(id)arg2;
+ (id)fetchFacesInFaceGroup:(id)arg1 options:(id)arg2;
+ (id)fetchFacesOnAssetWithFace:(id)arg1 options:(id)arg2;
+ (id)fetchFacesWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchFacesWithOptions:(id)arg1;
+ (id)fetchKeyFaceForFaceCollection:(id)arg1 options:(id)arg2;
+ (id)fetchKeyFaceForFaceGroup:(id)arg1 options:(id)arg2;
+ (id)fetchKeyFaceForPerson:(id)arg1 options:(id)arg2;
+ (id)fetchKeyFacesGroupedByPersons:(id)arg1;
+ (id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2;
+ (id)fetchRejectedFacesForPerson:(id)arg1 options:(id)arg2;
+ (id)fetchSingletonFacesWithOptions:(id)arg1;
+ (id)fetchSuggestedFacesForFaceCollection:(id)arg1 options:(id)arg2;
+ (id)fetchType;
+ (id)identifierCode;
+ (id)managedEntityName;
+ (BOOL)managedObjectSupportsFaceCropGeneration;
+ (BOOL)managedObjectSupportsFaceVisibility;
+ (id)personBuilderPropertiesToFetch;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (unsigned long long)propertyFetchHintsForPropertySets:(id)arg1;
+ (id)propertySetAccessorsByPropertySet;
+ (Class)propertySetClassForPropertySet:(id)arg1;
+ (id)propertySetsForPropertyFetchHints:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id)_createPropertyObjectOfClass:(Class)arg1;
- (id)_createPropertyObjectOfClass:(Class)arg1 preFetchedProperties:(id)arg2;
- (Class)changeRequestClass;
- (id)faceClusteringProperties;
- (void)fetchPropertySetsIfNeeded;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;

@end

