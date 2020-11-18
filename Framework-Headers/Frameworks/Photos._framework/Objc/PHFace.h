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
    unsigned short _ageType;
    unsigned short _genderType;
    unsigned short _eyesState;
    unsigned short _smileType;
    unsigned short _facialHairType;
    unsigned short _hairColorType;
    unsigned short _baldType;
    unsigned short _glassesType;
    unsigned short _eyeMakeupType;
    unsigned short _lipMakeupType;
    int _trainingType;
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
    double _poseYaw;
    long long _faceAlgorithmVersion;
}

@property (readonly, copy, nonatomic) id adjustmentVersion; // @synthesize adjustmentVersion=_adjustmentVersion;
@property (readonly, nonatomic) unsigned short ageType; // @synthesize ageType=_ageType;
@property (readonly, nonatomic) unsigned short baldType; // @synthesize baldType=_baldType;
@property (readonly, nonatomic) double blurScore; // @synthesize blurScore=_blurScore;
@property (readonly, nonatomic) double centerX; // @synthesize centerX=_centerX;
@property (readonly, nonatomic) double centerY; // @synthesize centerY=_centerY;
@property (readonly, nonatomic) long long clusterSequenceNumber; // @synthesize clusterSequenceNumber=_clusterSequenceNumber;
@property (readonly, nonatomic, getter=isConfirmedFaceCropGenerationPending) BOOL confirmedFaceCropGenerationPending;
@property (readonly, nonatomic) short confirmedFaceCropGenerationState; // @synthesize confirmedFaceCropGenerationState=_confirmedFaceCropGenerationState;
@property (readonly, nonatomic) unsigned short eyeMakeupType; // @synthesize eyeMakeupType=_eyeMakeupType;
@property (readonly, nonatomic) unsigned short eyesState; // @synthesize eyesState=_eyesState;
@property (nonatomic) long long faceAlgorithmVersion; // @synthesize faceAlgorithmVersion=_faceAlgorithmVersion;
@property (readonly, nonatomic) unsigned short facialHairType; // @synthesize facialHairType=_facialHairType;
@property (readonly, nonatomic) unsigned short genderType; // @synthesize genderType=_genderType;
@property (readonly, nonatomic) unsigned short glassesType; // @synthesize glassesType=_glassesType;
@property (readonly, nonatomic) unsigned short hairColorType; // @synthesize hairColorType=_hairColorType;
@property (readonly, nonatomic) BOOL hasSmile; // @synthesize hasSmile=_hasSmile;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden; // @synthesize hidden=_hidden;
@property (readonly, nonatomic, getter=isInTrash) BOOL inTrash; // @synthesize inTrash=_inTrash;
@property (readonly, nonatomic, getter=isLeftEyeClosed) BOOL leftEyeClosed; // @synthesize leftEyeClosed=_leftEyeClosed;
@property (readonly, nonatomic) double leftEyeX; // @synthesize leftEyeX=_leftEyeX;
@property (readonly, nonatomic) double leftEyeY; // @synthesize leftEyeY=_leftEyeY;
@property (readonly, nonatomic) unsigned short lipMakeupType; // @synthesize lipMakeupType=_lipMakeupType;
@property (readonly, nonatomic) BOOL manual; // @synthesize manual=_manual;
@property (readonly, nonatomic) double mouthX; // @synthesize mouthX=_mouthX;
@property (readonly, nonatomic) double mouthY; // @synthesize mouthY=_mouthY;
@property (readonly, nonatomic) long long nameSource; // @synthesize nameSource=_nameSource;
@property (readonly, nonatomic) NSString *personLocalIdentifier;
@property (readonly, nonatomic) NSString *personUUID; // @synthesize personUUID=_personUUID;
@property (nonatomic) double poseYaw; // @synthesize poseYaw=_poseYaw;
@property (readonly, nonatomic) long long qualityMeasure; // @synthesize qualityMeasure=_qualityMeasure;
@property (readonly, nonatomic, getter=isRightEyeClosed) BOOL rightEyeClosed; // @synthesize rightEyeClosed=_rightEyeClosed;
@property (readonly, nonatomic) double rightEyeX; // @synthesize rightEyeX=_rightEyeX;
@property (readonly, nonatomic) double rightEyeY; // @synthesize rightEyeY=_rightEyeY;
@property (readonly, nonatomic) double size; // @synthesize size=_size;
@property (readonly, nonatomic) unsigned short smileType; // @synthesize smileType=_smileType;
@property (readonly, nonatomic) long long sourceHeight; // @synthesize sourceHeight=_sourceHeight;
@property (readonly, nonatomic) long long sourceWidth; // @synthesize sourceWidth=_sourceWidth;
@property (readonly, nonatomic) int trainingType; // @synthesize trainingType=_trainingType;

+ (id)_composePropertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)corePropertiesToFetch;
+ (id)croppingPropertiesToFetch;
+ (id)entityKeyMap;
+ (id)fetchFacesForFaceCrop:(id)arg1 options:(id)arg2;
+ (id)fetchFacesForPerson:(id)arg1 options:(id)arg2;
+ (id)fetchFacesForPersonsAssociatedWithFaceGroupsContainingFacesWithClusterSequenceNumbers:(id)arg1 options:(id)arg2;
+ (id)fetchFacesGroupedByAssetLocalIdentifierForAssets:(id)arg1 options:(id)arg2;
+ (id)fetchFacesInAsset:(id)arg1 options:(id)arg2;
+ (id)fetchFacesInFaceGroup:(id)arg1 options:(id)arg2;
+ (id)fetchFacesOnAssetWithFace:(id)arg1 options:(id)arg2;
+ (id)fetchFacesWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchFacesWithOptions:(id)arg1;
+ (id)fetchKeyFaceForFaceGroup:(id)arg1 options:(id)arg2;
+ (id)fetchKeyFaceForPerson:(id)arg1 options:(id)arg2;
+ (id)fetchKeyFacesGroupedByPersonLocalIdentifierForPersonLocalIdentifiers:(id)arg1;
+ (id)fetchKeyFacesGroupedByPersons:(id)arg1;
+ (id)fetchRejectedFacesForPerson:(id)arg1 options:(id)arg2;
+ (id)fetchSingletonFacesWithOptions:(id)arg1;
+ (id)fetchType;
+ (id)identifierCode;
+ (id)managedEntityName;
+ (BOOL)managedObjectSupportsFaceState;
+ (id)personBuilderPropertiesToFetch;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (unsigned long long)propertyFetchHintsForPropertySets:(id)arg1;
+ (id)propertySetAccessorsByPropertySet;
+ (Class)propertySetClassForPropertySet:(id)arg1;
+ (id)propertySetsForPropertyFetchHints:(unsigned long long)arg1;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
- (void).cxx_destruct;
- (id)_createPropertyObjectOfClass:(Class)arg1;
- (id)_createPropertyObjectOfClass:(Class)arg1 preFetchedProperties:(id)arg2;
- (Class)changeRequestClass;
- (id)faceClusteringProperties;
- (void)fetchPropertySetsIfNeeded;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;

@end

