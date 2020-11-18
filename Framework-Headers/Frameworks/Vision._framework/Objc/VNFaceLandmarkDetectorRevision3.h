//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNFaceLandmarkDetectorDNN.h>

__attribute__((visibility("hidden")))
@interface VNFaceLandmarkDetectorRevision3 : VNFaceLandmarkDetectorDNN
{
}

+ (unsigned char)landmarkDetectorDNNVersion;
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)arg1;
- (id)espressoModelFileNameForConfigurationOptions:(id)arg1;
- (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;
- (struct CGRect)normalizedFaceBBoxForLandmarks:(id)arg1;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;

@end
