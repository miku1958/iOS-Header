//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NURenderJob.h>

@class CIRenderTask, NUImageHistogram, NUPurgeableStoragePool;
@protocol NUPurgeableStorage, NUScalePolicy;

@interface NUHistogramRenderJob : NURenderJob
{
    NUPurgeableStoragePool *_storagePool;
    id<NUPurgeableStorage> _renderDestination;
    NUImageHistogram *_histogram;
    CIRenderTask *_renderTask;
    id<NUScalePolicy> _scalePolicy;
}

- (void).cxx_destruct;
- (void)cleanUp;
- (BOOL)complete:(out id *)arg1;
- (id)histogramRequest;
- (id)initWithHistogramRequest:(id)arg1;
- (id)initWithRequest:(id)arg1;
- (BOOL)render:(out id *)arg1;
- (id)result;
- (id)scalePolicy;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;

@end

