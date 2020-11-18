//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNDetector.h>

@protocol VNModelFile;

__attribute__((visibility("hidden")))
@interface VNFaceBBoxAligner : VNDetector
{
    struct shared_ptr<vision::mod::FaceBoxPoseAligner<signed char>> mFaceBoxPoseAlignerImpl;
    BOOL mModelFilesWereMemmapped;
    id<VNModelFile> mFaceBoxAlignerModelFileHandle;
}

+ (BOOL)shouldDumpDebugIntermediates;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)dumpDebugIntermediatesWithImageBuffer:(id)arg1 lumaIntermediate:(struct __CVBuffer *)arg2 rawBBoxInLumaIntermediateCoordinates:(struct _Geometry2D_rect2D_)arg3 alignedBBoxInLumaIntermediateCoordinates:(struct _Geometry2D_rect2D_)arg4 rotationAngle:(float)arg5;
- (id)initWithOptions:(id)arg1 error:(id *)arg2;
- (id)processWithOptions:(id)arg1 warningRecorder:(id)arg2 error:(id *)arg3;

@end

