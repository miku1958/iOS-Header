//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNEspressoModelFileBasedDetector.h>

__attribute__((visibility("hidden")))
@interface VNSaliencyHeatmapBoundingBoxGenerator : VNEspressoModelFileBasedDetector
{
}

+ (id)calculateSaliencyBoundingBoxesForDetectorType:(id)arg1 pixelBuffer:(struct __CVBuffer *)arg2 configurationOptions:(id)arg3 requestRevision:(unsigned long long)arg4 regionOfInterest:(struct CGRect)arg5 warningRecorder:(id)arg6 error:(id *)arg7;
+ (id)configurationOptionKeysForDetectorKey;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)arg1;
- (struct __CVBuffer *)_createScaledOneComponent32FloatPixelBufferFromImageBuffer:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)_observationsForOneComponent32FloatPixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2 regionOfInterest:(struct CGRect)arg3 error:(id *)arg4;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (BOOL)supportsProcessingDevice:(id)arg1;

@end
