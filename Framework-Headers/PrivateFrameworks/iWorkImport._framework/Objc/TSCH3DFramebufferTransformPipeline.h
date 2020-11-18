//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DLinkablePipeline.h>

@class TSCH3DGLFramebuffer;
@protocol TSCH3DPipelineLinkable;

__attribute__((visibility("hidden")))
@interface TSCH3DFramebufferTransformPipeline : TSCH3DLinkablePipeline
{
    id<TSCH3DPipelineLinkable> mSource;
    TSCH3DGLFramebuffer *mTarget;
    TSCH3DGLFramebuffer *mInput;
}

@property (strong, nonatomic) id<TSCH3DPipelineLinkable> source; // @synthesize source=mSource;
@property (strong, nonatomic) TSCH3DGLFramebuffer *target; // @synthesize target=mTarget;

- (void)dealloc;
- (void)loadSource;
- (BOOL)prepareFramebuffer;
- (BOOL)run;

@end

