//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNDetector.h>

__attribute__((visibility("hidden")))
@interface VNHumanDetector : VNDetector
{
    struct TemplateObjectDetectorApply *mHumanDetectorAlgorithmImpl_;
}

- (BOOL)completeInitializationAndReturnError:(id *)arg1;
- (void)dealloc;
- (BOOL)needsMetalContext;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;

@end

