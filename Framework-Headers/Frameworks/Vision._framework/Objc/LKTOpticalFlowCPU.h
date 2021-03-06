//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/LKTOpticalFlow.h>

__attribute__((visibility("hidden")))
@interface LKTOpticalFlowCPU : LKTOpticalFlow
{
    struct unique_ptr<apple::vision::OpticalFlow::LKTCPU, std::__1::default_delete<apple::vision::OpticalFlow::LKTCPU>> _opticalFlow;
    struct __CVBuffer *_uv_user_ref;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)estimateFlowFromReference:(struct __CVBuffer *)arg1 target:(struct __CVBuffer *)arg2 error:(id *)arg3;
- (BOOL)estimateFlowStream:(struct __CVBuffer *)arg1 error:(id *)arg2;
- (id)initWithWidth:(int)arg1 height:(int)arg2 numScales:(int)arg3;
- (BOOL)setOutputUV:(struct __CVBuffer *)arg1 error:(id *)arg2;

@end

