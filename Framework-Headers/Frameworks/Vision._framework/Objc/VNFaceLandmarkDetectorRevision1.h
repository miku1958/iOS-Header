//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNFaceLandmarkDetector.h>

__attribute__((visibility("hidden")))
@interface VNFaceLandmarkDetectorRevision1 : VNFaceLandmarkDetector
{
    struct shared_ptr<vision::mod::LandmarkDetectorERT> mFaceLandmarkAlgorithmImpl;
    struct shared_ptr<vision::mod::LandmarkDetectorERT> mFaceLandmarkMouthRefinerImpl;
    struct shared_ptr<vision::mod::LandmarkDetectorERT> mFaceLandmarkRightEyeRefinerImpl;
    struct shared_ptr<vision::mod::LandmarkDetectorERT> mFaceLandmarkLeftEyeRefinerImpl;
    BOOL _modelFilesWereMemmapped;
}

+ (id)configurationOptionKeysForDetectorKey;
+ (void)dumpDebugIntermediatesWithImageBuffer:(id)arg1 lumaIntermediate:(struct __CVBuffer *)arg2 alignedBBoxInLumaIntermediateCoordinates:(struct _Geometry2D_rect2D_)arg3 meanShapeInLumaIntermediate:(const vector_f48c7054 *)arg4 landmarkPointsInLumaIntermediate:(const vector_f48c7054 *)arg5;
+ (id)espressoModelFileNameForConfigurationOptions:(id)arg1;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)_loadEspressoModelWithConfigurationOptions:(id)arg1 error:(id *)arg2;
- (unsigned long long)cascadeStepCountInOriginalModel;
- (unsigned long long)cascadeStepCountLoaded;
- (BOOL)completeInitializationForSession:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (BOOL)loadRefinersAndReturnError:(id *)arg1;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;

@end

