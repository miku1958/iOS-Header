//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNFaceDetector.h>

__attribute__((visibility("hidden")))
@interface VNFaceDetectorPrivateRevisionLegacyFaceCore : VNFaceDetector
{
}

+ (id)_convertVNOptionsToFaceCoreDetectOptions:(id)arg1;
+ (id)_convertVNOptionsToFaceCoreExtractOptions:(id)arg1;
+ (id)_convertVNOptionsToFaceCoreOptions:(id)arg1 optionsMap:(id)arg2;
+ (id)_convertVNOptionsToFaceCoreSetupOptions:(id)arg1;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;

@end

