//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNFaceAnalyzerMultiDetectorBase.h>

@class NSMutableData;

__attribute__((visibility("hidden")))
@interface VNFaceAnalyzerMultiDetector : VNFaceAnalyzerMultiDetectorBase
{
    struct shared_ptr<vision::mod::FaceFrontalizer> _mFaceFrontalizerImpl;
    struct vImage_Buffer _faceVImageBuffer;
    NSMutableData *_mFaceFrontalizerWorkingBuffer;
}

+ (float)_faceBoundingBoxScalingFactorForFaceObservation:(unsigned long long)arg1;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)_isFaceprintJunk:(shared_ptr_0a6daad2)arg1;
- (BOOL)completeInitializationForSession:(id)arg1 error:(id *)arg2;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;

@end

