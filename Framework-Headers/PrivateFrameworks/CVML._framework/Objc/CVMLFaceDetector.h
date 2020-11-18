//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CVML/CVMLDetector.h>

@class CVMLFaceBBoxAligner;

@interface CVMLFaceDetector : CVMLDetector
{
    struct shared_ptr<vision::mod::ObjectDetector_DCNFaceDetector> mFaceDetectorImpl;
    CVMLFaceBBoxAligner *mBBoxAlignerImpl;
}

+ (BOOL)shouldDumpDebugIntermediates;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithOptions:(id)arg1 error:(id *)arg2;
- (struct __CVBuffer *)newCropAroundBounds:(struct CGRect)arg1 extendBoundsWithinImageBy:(float)arg2 fromImageBuffer:(id)arg3 error:(id *)arg4;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (void)purgeIntermediates;

@end
