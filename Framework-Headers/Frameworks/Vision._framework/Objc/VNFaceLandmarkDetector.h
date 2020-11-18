//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNDetector.h>

@protocol VNModelFile;

__attribute__((visibility("hidden")))
@interface VNFaceLandmarkDetector : VNDetector
{
    struct shared_ptr<vision::mod::LandmarkDetector> mFaceLandmarkAlgorithmImpl;
    struct shared_ptr<vision::mod::LandmarkDetector> mFaceLandmarkMouthRefinerImpl;
    struct shared_ptr<vision::mod::LandmarkDetector> mFaceLandmarkRightEyeRefinerImpl;
    struct shared_ptr<vision::mod::LandmarkDetector> mFaceLandmarkLeftEyeRefinerImpl;
    struct shared_ptr<vision::mod::LandmarkAttributes> mFaceAttributesPupilRefiner;
    BOOL mModelFilesWereMemmapped;
    id<VNModelFile> mCoreLandmarkModelFileHandle;
    id<VNModelFile> mLandmarkRefinerModelFileHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)cascadeStepCountInOriginalModel;
- (unsigned long long)cascadeStepCountLoaded;
- (void)dealloc;
- (id)initWithOptions:(id)arg1 error:(id *)arg2;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;

@end

