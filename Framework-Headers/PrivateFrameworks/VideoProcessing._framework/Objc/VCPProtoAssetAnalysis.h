//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <VideoProcessing/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface VCPProtoAssetAnalysis : PBCodable <NSCopying>
{
    double _assetModificationDate;
    double _date;
    double _quality;
    unsigned long long _statsFlags;
    unsigned long long _typesWide;
    NSString *_assetAdjustedFingerprint;
    NSString *_assetIdentifier;
    NSString *_assetMasterFingerprint;
    unsigned int _flags;
    NSMutableArray *_imageBlurResults;
    NSMutableArray *_imageCompositionResults;
    NSMutableArray *_imageExposureResults;
    NSMutableArray *_imageFaceResults;
    NSMutableArray *_imageFeatureResults;
    NSMutableArray *_imageHumanPoseResults;
    NSMutableArray *_imageJunkResults;
    NSMutableArray *_imagePetsFaceResults;
    NSMutableArray *_imagePetsResults;
    NSMutableArray *_imageSaliencyResults;
    NSMutableArray *_imageSceneprintResults;
    NSMutableArray *_imageShotTypeResults;
    NSMutableArray *_livePhotoEffectsResults;
    NSMutableArray *_livePhotoKeyFrameResults;
    NSMutableArray *_livePhotoKeyFrameStillResults;
    NSMutableArray *_livePhotoRecommendationResults;
    NSMutableArray *_livePhotoSharpnessResults;
    NSMutableArray *_movieActivityLevelResults;
    NSMutableArray *_movieApplauseResults;
    NSMutableArray *_movieBabbleResults;
    NSMutableArray *_movieCameraMotionResults;
    NSMutableArray *_movieCheeringResults;
    NSMutableArray *_movieClassificationResults;
    NSMutableArray *_movieFaceResults;
    NSMutableArray *_movieFaceprintResults;
    NSMutableArray *_movieFeatureResults;
    NSMutableArray *_movieFineSubjectMotionResults;
    NSMutableArray *_movieHighlightResults;
    NSMutableArray *_movieHumanActionResults;
    NSMutableArray *_movieHumanPoseResults;
    NSMutableArray *_movieInterestingnessResults;
    NSMutableArray *_movieLaughterResults;
    NSMutableArray *_movieLoudnessResults;
    NSMutableArray *_movieMovingObjectResults;
    NSMutableArray *_movieMusicResults;
    NSMutableArray *_movieObstructionResults;
    NSMutableArray *_movieOrientationResults;
    NSMutableArray *_moviePetsFaceResults;
    NSMutableArray *_moviePetsResults;
    NSMutableArray *_moviePreEncodeResults;
    NSMutableArray *_movieQualityResults;
    NSMutableArray *_movieSaliencyResults;
    NSMutableArray *_movieSceneResults;
    NSMutableArray *_movieSceneprintResults;
    NSMutableArray *_movieStabilizationResults;
    NSMutableArray *_movieSubjectMotionResults;
    NSMutableArray *_movieSubtleMotionResults;
    NSMutableArray *_movieSummaryResults;
    NSMutableArray *_movieUtteranceResults;
    NSMutableArray *_movieVoiceResults;
    unsigned int _types;
    unsigned int _version;
    struct {
        unsigned int quality:1;
        unsigned int statsFlags:1;
        unsigned int typesWide:1;
    } _has;
}

@property (strong, nonatomic) NSString *assetAdjustedFingerprint; // @synthesize assetAdjustedFingerprint=_assetAdjustedFingerprint;
@property (strong, nonatomic) NSString *assetIdentifier; // @synthesize assetIdentifier=_assetIdentifier;
@property (strong, nonatomic) NSString *assetMasterFingerprint; // @synthesize assetMasterFingerprint=_assetMasterFingerprint;
@property (nonatomic) double assetModificationDate; // @synthesize assetModificationDate=_assetModificationDate;
@property (nonatomic) double date; // @synthesize date=_date;
@property (nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property (readonly, nonatomic) BOOL hasAssetAdjustedFingerprint;
@property (nonatomic) BOOL hasQuality;
@property (nonatomic) BOOL hasStatsFlags;
@property (nonatomic) BOOL hasTypesWide;
@property (strong, nonatomic) NSMutableArray *imageBlurResults; // @synthesize imageBlurResults=_imageBlurResults;
@property (strong, nonatomic) NSMutableArray *imageCompositionResults; // @synthesize imageCompositionResults=_imageCompositionResults;
@property (strong, nonatomic) NSMutableArray *imageExposureResults; // @synthesize imageExposureResults=_imageExposureResults;
@property (strong, nonatomic) NSMutableArray *imageFaceResults; // @synthesize imageFaceResults=_imageFaceResults;
@property (strong, nonatomic) NSMutableArray *imageFeatureResults; // @synthesize imageFeatureResults=_imageFeatureResults;
@property (strong, nonatomic) NSMutableArray *imageHumanPoseResults; // @synthesize imageHumanPoseResults=_imageHumanPoseResults;
@property (strong, nonatomic) NSMutableArray *imageJunkResults; // @synthesize imageJunkResults=_imageJunkResults;
@property (strong, nonatomic) NSMutableArray *imagePetsFaceResults; // @synthesize imagePetsFaceResults=_imagePetsFaceResults;
@property (strong, nonatomic) NSMutableArray *imagePetsResults; // @synthesize imagePetsResults=_imagePetsResults;
@property (strong, nonatomic) NSMutableArray *imageSaliencyResults; // @synthesize imageSaliencyResults=_imageSaliencyResults;
@property (strong, nonatomic) NSMutableArray *imageSceneprintResults; // @synthesize imageSceneprintResults=_imageSceneprintResults;
@property (strong, nonatomic) NSMutableArray *imageShotTypeResults; // @synthesize imageShotTypeResults=_imageShotTypeResults;
@property (strong, nonatomic) NSMutableArray *livePhotoEffectsResults; // @synthesize livePhotoEffectsResults=_livePhotoEffectsResults;
@property (strong, nonatomic) NSMutableArray *livePhotoKeyFrameResults; // @synthesize livePhotoKeyFrameResults=_livePhotoKeyFrameResults;
@property (strong, nonatomic) NSMutableArray *livePhotoKeyFrameStillResults; // @synthesize livePhotoKeyFrameStillResults=_livePhotoKeyFrameStillResults;
@property (strong, nonatomic) NSMutableArray *livePhotoRecommendationResults; // @synthesize livePhotoRecommendationResults=_livePhotoRecommendationResults;
@property (strong, nonatomic) NSMutableArray *livePhotoSharpnessResults; // @synthesize livePhotoSharpnessResults=_livePhotoSharpnessResults;
@property (strong, nonatomic) NSMutableArray *movieActivityLevelResults; // @synthesize movieActivityLevelResults=_movieActivityLevelResults;
@property (strong, nonatomic) NSMutableArray *movieApplauseResults; // @synthesize movieApplauseResults=_movieApplauseResults;
@property (strong, nonatomic) NSMutableArray *movieBabbleResults; // @synthesize movieBabbleResults=_movieBabbleResults;
@property (strong, nonatomic) NSMutableArray *movieCameraMotionResults; // @synthesize movieCameraMotionResults=_movieCameraMotionResults;
@property (strong, nonatomic) NSMutableArray *movieCheeringResults; // @synthesize movieCheeringResults=_movieCheeringResults;
@property (strong, nonatomic) NSMutableArray *movieClassificationResults; // @synthesize movieClassificationResults=_movieClassificationResults;
@property (strong, nonatomic) NSMutableArray *movieFaceResults; // @synthesize movieFaceResults=_movieFaceResults;
@property (strong, nonatomic) NSMutableArray *movieFaceprintResults; // @synthesize movieFaceprintResults=_movieFaceprintResults;
@property (strong, nonatomic) NSMutableArray *movieFeatureResults; // @synthesize movieFeatureResults=_movieFeatureResults;
@property (strong, nonatomic) NSMutableArray *movieFineSubjectMotionResults; // @synthesize movieFineSubjectMotionResults=_movieFineSubjectMotionResults;
@property (strong, nonatomic) NSMutableArray *movieHighlightResults; // @synthesize movieHighlightResults=_movieHighlightResults;
@property (strong, nonatomic) NSMutableArray *movieHumanActionResults; // @synthesize movieHumanActionResults=_movieHumanActionResults;
@property (strong, nonatomic) NSMutableArray *movieHumanPoseResults; // @synthesize movieHumanPoseResults=_movieHumanPoseResults;
@property (strong, nonatomic) NSMutableArray *movieInterestingnessResults; // @synthesize movieInterestingnessResults=_movieInterestingnessResults;
@property (strong, nonatomic) NSMutableArray *movieLaughterResults; // @synthesize movieLaughterResults=_movieLaughterResults;
@property (strong, nonatomic) NSMutableArray *movieLoudnessResults; // @synthesize movieLoudnessResults=_movieLoudnessResults;
@property (strong, nonatomic) NSMutableArray *movieMovingObjectResults; // @synthesize movieMovingObjectResults=_movieMovingObjectResults;
@property (strong, nonatomic) NSMutableArray *movieMusicResults; // @synthesize movieMusicResults=_movieMusicResults;
@property (strong, nonatomic) NSMutableArray *movieObstructionResults; // @synthesize movieObstructionResults=_movieObstructionResults;
@property (strong, nonatomic) NSMutableArray *movieOrientationResults; // @synthesize movieOrientationResults=_movieOrientationResults;
@property (strong, nonatomic) NSMutableArray *moviePetsFaceResults; // @synthesize moviePetsFaceResults=_moviePetsFaceResults;
@property (strong, nonatomic) NSMutableArray *moviePetsResults; // @synthesize moviePetsResults=_moviePetsResults;
@property (strong, nonatomic) NSMutableArray *moviePreEncodeResults; // @synthesize moviePreEncodeResults=_moviePreEncodeResults;
@property (strong, nonatomic) NSMutableArray *movieQualityResults; // @synthesize movieQualityResults=_movieQualityResults;
@property (strong, nonatomic) NSMutableArray *movieSaliencyResults; // @synthesize movieSaliencyResults=_movieSaliencyResults;
@property (strong, nonatomic) NSMutableArray *movieSceneResults; // @synthesize movieSceneResults=_movieSceneResults;
@property (strong, nonatomic) NSMutableArray *movieSceneprintResults; // @synthesize movieSceneprintResults=_movieSceneprintResults;
@property (strong, nonatomic) NSMutableArray *movieStabilizationResults; // @synthesize movieStabilizationResults=_movieStabilizationResults;
@property (strong, nonatomic) NSMutableArray *movieSubjectMotionResults; // @synthesize movieSubjectMotionResults=_movieSubjectMotionResults;
@property (strong, nonatomic) NSMutableArray *movieSubtleMotionResults; // @synthesize movieSubtleMotionResults=_movieSubtleMotionResults;
@property (strong, nonatomic) NSMutableArray *movieSummaryResults; // @synthesize movieSummaryResults=_movieSummaryResults;
@property (strong, nonatomic) NSMutableArray *movieUtteranceResults; // @synthesize movieUtteranceResults=_movieUtteranceResults;
@property (strong, nonatomic) NSMutableArray *movieVoiceResults; // @synthesize movieVoiceResults=_movieVoiceResults;
@property (nonatomic) double quality; // @synthesize quality=_quality;
@property (nonatomic) unsigned long long statsFlags; // @synthesize statsFlags=_statsFlags;
@property (nonatomic) unsigned int types; // @synthesize types=_types;
@property (nonatomic) unsigned long long typesWide; // @synthesize typesWide=_typesWide;
@property (nonatomic) unsigned int version; // @synthesize version=_version;

+ (id)imageAnalysisFromLegacyDictionary:(id)arg1;
+ (Class)imageBlurResultsType;
+ (Class)imageCompositionResultsType;
+ (Class)imageExposureResultsType;
+ (Class)imageFaceResultsType;
+ (Class)imageFeatureResultsType;
+ (Class)imageHumanPoseResultsType;
+ (Class)imageJunkResultsType;
+ (Class)imagePetsFaceResultsType;
+ (Class)imagePetsResultsType;
+ (Class)imageSaliencyResultsType;
+ (Class)imageSceneprintResultsType;
+ (Class)imageShotTypeResultsType;
+ (Class)livePhotoEffectsResultsType;
+ (Class)livePhotoKeyFrameResultsType;
+ (Class)livePhotoKeyFrameStillResultsType;
+ (Class)livePhotoRecommendationResultsType;
+ (Class)livePhotoSharpnessResultsType;
+ (Class)movieActivityLevelResultsType;
+ (id)movieAnalysisFromLegacyDictionary:(id)arg1;
+ (Class)movieApplauseResultsType;
+ (Class)movieBabbleResultsType;
+ (Class)movieCameraMotionResultsType;
+ (Class)movieCheeringResultsType;
+ (Class)movieClassificationResultsType;
+ (Class)movieFaceResultsType;
+ (Class)movieFaceprintResultsType;
+ (Class)movieFeatureResultsType;
+ (Class)movieFineSubjectMotionResultsType;
+ (Class)movieHighlightResultsType;
+ (Class)movieHumanActionResultsType;
+ (Class)movieHumanPoseResultsType;
+ (Class)movieInterestingnessResultsType;
+ (Class)movieLaughterResultsType;
+ (Class)movieLoudnessResultsType;
+ (Class)movieMovingObjectResultsType;
+ (Class)movieMusicResultsType;
+ (Class)movieObstructionResultsType;
+ (Class)movieOrientationResultsType;
+ (Class)moviePetsFaceResultsType;
+ (Class)moviePetsResultsType;
+ (Class)moviePreEncodeResultsType;
+ (Class)movieQualityResultsType;
+ (Class)movieSaliencyResultsType;
+ (Class)movieSceneResultsType;
+ (Class)movieSceneprintResultsType;
+ (Class)movieStabilizationResultsType;
+ (Class)movieSubjectMotionResultsType;
+ (Class)movieSubtleMotionResultsType;
+ (Class)movieSummaryResultsType;
+ (Class)movieUtteranceResultsType;
+ (Class)movieVoiceResultsType;
- (void).cxx_destruct;
- (void)addImageBlurResults:(id)arg1;
- (void)addImageCompositionResults:(id)arg1;
- (void)addImageExposureResults:(id)arg1;
- (void)addImageFaceResults:(id)arg1;
- (void)addImageFeatureResults:(id)arg1;
- (void)addImageHumanPoseResults:(id)arg1;
- (void)addImageJunkResults:(id)arg1;
- (void)addImagePetsFaceResults:(id)arg1;
- (void)addImagePetsResults:(id)arg1;
- (void)addImageSaliencyResults:(id)arg1;
- (void)addImageSceneprintResults:(id)arg1;
- (void)addImageShotTypeResults:(id)arg1;
- (void)addLivePhotoEffectsResults:(id)arg1;
- (void)addLivePhotoKeyFrameResults:(id)arg1;
- (void)addLivePhotoKeyFrameStillResults:(id)arg1;
- (void)addLivePhotoRecommendationResults:(id)arg1;
- (void)addLivePhotoSharpnessResults:(id)arg1;
- (void)addMovieActivityLevelResults:(id)arg1;
- (void)addMovieApplauseResults:(id)arg1;
- (void)addMovieBabbleResults:(id)arg1;
- (void)addMovieCameraMotionResults:(id)arg1;
- (void)addMovieCheeringResults:(id)arg1;
- (void)addMovieClassificationResults:(id)arg1;
- (void)addMovieFaceResults:(id)arg1;
- (void)addMovieFaceprintResults:(id)arg1;
- (void)addMovieFeatureResults:(id)arg1;
- (void)addMovieFineSubjectMotionResults:(id)arg1;
- (void)addMovieHighlightResults:(id)arg1;
- (void)addMovieHumanActionResults:(id)arg1;
- (void)addMovieHumanPoseResults:(id)arg1;
- (void)addMovieInterestingnessResults:(id)arg1;
- (void)addMovieLaughterResults:(id)arg1;
- (void)addMovieLoudnessResults:(id)arg1;
- (void)addMovieMovingObjectResults:(id)arg1;
- (void)addMovieMusicResults:(id)arg1;
- (void)addMovieObstructionResults:(id)arg1;
- (void)addMovieOrientationResults:(id)arg1;
- (void)addMoviePetsFaceResults:(id)arg1;
- (void)addMoviePetsResults:(id)arg1;
- (void)addMoviePreEncodeResults:(id)arg1;
- (void)addMovieQualityResults:(id)arg1;
- (void)addMovieSaliencyResults:(id)arg1;
- (void)addMovieSceneResults:(id)arg1;
- (void)addMovieSceneprintResults:(id)arg1;
- (void)addMovieStabilizationResults:(id)arg1;
- (void)addMovieSubjectMotionResults:(id)arg1;
- (void)addMovieSubtleMotionResults:(id)arg1;
- (void)addMovieSummaryResults:(id)arg1;
- (void)addMovieUtteranceResults:(id)arg1;
- (void)addMovieVoiceResults:(id)arg1;
- (void)clearImageBlurResults;
- (void)clearImageCompositionResults;
- (void)clearImageExposureResults;
- (void)clearImageFaceResults;
- (void)clearImageFeatureResults;
- (void)clearImageHumanPoseResults;
- (void)clearImageJunkResults;
- (void)clearImagePetsFaceResults;
- (void)clearImagePetsResults;
- (void)clearImageSaliencyResults;
- (void)clearImageSceneprintResults;
- (void)clearImageShotTypeResults;
- (void)clearLivePhotoEffectsResults;
- (void)clearLivePhotoKeyFrameResults;
- (void)clearLivePhotoKeyFrameStillResults;
- (void)clearLivePhotoRecommendationResults;
- (void)clearLivePhotoSharpnessResults;
- (void)clearMovieActivityLevelResults;
- (void)clearMovieApplauseResults;
- (void)clearMovieBabbleResults;
- (void)clearMovieCameraMotionResults;
- (void)clearMovieCheeringResults;
- (void)clearMovieClassificationResults;
- (void)clearMovieFaceResults;
- (void)clearMovieFaceprintResults;
- (void)clearMovieFeatureResults;
- (void)clearMovieFineSubjectMotionResults;
- (void)clearMovieHighlightResults;
- (void)clearMovieHumanActionResults;
- (void)clearMovieHumanPoseResults;
- (void)clearMovieInterestingnessResults;
- (void)clearMovieLaughterResults;
- (void)clearMovieLoudnessResults;
- (void)clearMovieMovingObjectResults;
- (void)clearMovieMusicResults;
- (void)clearMovieObstructionResults;
- (void)clearMovieOrientationResults;
- (void)clearMoviePetsFaceResults;
- (void)clearMoviePetsResults;
- (void)clearMoviePreEncodeResults;
- (void)clearMovieQualityResults;
- (void)clearMovieSaliencyResults;
- (void)clearMovieSceneResults;
- (void)clearMovieSceneprintResults;
- (void)clearMovieStabilizationResults;
- (void)clearMovieSubjectMotionResults;
- (void)clearMovieSubtleMotionResults;
- (void)clearMovieSummaryResults;
- (void)clearMovieUtteranceResults;
- (void)clearMovieVoiceResults;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)exportResultsWithPropertyKey:(id)arg1 toLegacyDictionary:(id)arg2 withKey:(id)arg3;
- (id)exportToLegacyDictionary;
- (unsigned long long)hash;
- (id)imageBlurResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)imageBlurResultsCount;
- (id)imageCompositionResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)imageCompositionResultsCount;
- (id)imageExposureResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)imageExposureResultsCount;
- (id)imageFaceResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)imageFaceResultsCount;
- (id)imageFeatureResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)imageFeatureResultsCount;
- (id)imageHumanPoseResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)imageHumanPoseResultsCount;
- (id)imageJunkResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)imageJunkResultsCount;
- (id)imagePetsFaceResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)imagePetsFaceResultsCount;
- (id)imagePetsResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)imagePetsResultsCount;
- (id)imageSaliencyResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)imageSaliencyResultsCount;
- (id)imageSceneprintResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)imageSceneprintResultsCount;
- (id)imageShotTypeResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)imageShotTypeResultsCount;
- (BOOL)isEqual:(id)arg1;
- (id)livePhotoEffectsResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)livePhotoEffectsResultsCount;
- (id)livePhotoKeyFrameResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)livePhotoKeyFrameResultsCount;
- (id)livePhotoKeyFrameStillResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)livePhotoKeyFrameStillResultsCount;
- (id)livePhotoRecommendationResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)livePhotoRecommendationResultsCount;
- (id)livePhotoSharpnessResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)livePhotoSharpnessResultsCount;
- (void)mergeFrom:(id)arg1;
- (id)movieActivityLevelResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieActivityLevelResultsCount;
- (id)movieApplauseResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieApplauseResultsCount;
- (id)movieBabbleResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieBabbleResultsCount;
- (id)movieCameraMotionResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieCameraMotionResultsCount;
- (id)movieCheeringResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieCheeringResultsCount;
- (id)movieClassificationResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieClassificationResultsCount;
- (id)movieFaceResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieFaceResultsCount;
- (id)movieFaceprintResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieFaceprintResultsCount;
- (id)movieFeatureResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieFeatureResultsCount;
- (id)movieFineSubjectMotionResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieFineSubjectMotionResultsCount;
- (id)movieHighlightResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieHighlightResultsCount;
- (id)movieHumanActionResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieHumanActionResultsCount;
- (id)movieHumanPoseResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieHumanPoseResultsCount;
- (id)movieInterestingnessResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieInterestingnessResultsCount;
- (id)movieLaughterResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieLaughterResultsCount;
- (id)movieLoudnessResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieLoudnessResultsCount;
- (id)movieMovingObjectResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieMovingObjectResultsCount;
- (id)movieMusicResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieMusicResultsCount;
- (id)movieObstructionResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieObstructionResultsCount;
- (id)movieOrientationResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieOrientationResultsCount;
- (id)moviePetsFaceResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)moviePetsFaceResultsCount;
- (id)moviePetsResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)moviePetsResultsCount;
- (id)moviePreEncodeResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)moviePreEncodeResultsCount;
- (id)movieQualityResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieQualityResultsCount;
- (id)movieSaliencyResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieSaliencyResultsCount;
- (id)movieSceneResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieSceneResultsCount;
- (id)movieSceneprintResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieSceneprintResultsCount;
- (id)movieStabilizationResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieStabilizationResultsCount;
- (id)movieSubjectMotionResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieSubjectMotionResultsCount;
- (id)movieSubtleMotionResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieSubtleMotionResultsCount;
- (id)movieSummaryResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieSummaryResultsCount;
- (id)movieUtteranceResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieUtteranceResultsCount;
- (id)movieVoiceResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieVoiceResultsCount;
- (BOOL)readFrom:(id)arg1;
- (BOOL)setAttributesFromLegacyDictionary:(id)arg1;
- (BOOL)setResults:(id)arg1 withClass:(Class)arg2 forPropertyKey:(id)arg3;
- (void)writeTo:(id)arg1;

@end
