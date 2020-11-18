//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNDetector.h>

@class VNCoreMLModel;

__attribute__((visibility("hidden")))
@interface VNCoreMLTransformer : VNDetector
{
    VNCoreMLModel *_model;
}

@property (readonly) VNCoreMLModel *model; // @synthesize model=_model;

- (void).cxx_destruct;
- (id)initWithOptions:(id)arg1 model:(id)arg2 error:(id *)arg3;
- (BOOL)needsMetalContext;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;

@end

