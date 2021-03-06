//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PKMetalRendererController;

@interface PKImageRenderer : NSObject
{
    BOOL _synchronous;
    double _scale;
    PKMetalRendererController *_rendererController;
    long long _cancelCount;
    struct CGSize _size;
}

@property (nonatomic) long long cancelCount; // @synthesize cancelCount=_cancelCount;
@property (nonatomic) BOOL invertColors;
@property (strong, nonatomic) PKMetalRendererController *rendererController; // @synthesize rendererController=_rendererController;
@property (readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property (readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property (nonatomic) BOOL synchronous; // @synthesize synchronous=_synchronous;

+ (void)_fuzzTestUnzippedData:(id)arg1;
- (void).cxx_destruct;
- (void)buildStrokeRenderCacheForDrawing:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (id)initSyncWithSize:(struct CGSize)arg1 scale:(double)arg2;
- (id)initWithSize:(struct CGSize)arg1 scale:(double)arg2;
- (id)initWithSize:(struct CGSize)arg1 scale:(double)arg2 renderQueue:(id)arg3;
- (id)initWithSize:(struct CGSize)arg1 scale:(double)arg2 useMetal:(BOOL)arg3;
- (id)initWithSize:(struct CGSize)arg1 scale:(double)arg2 useMetal:(BOOL)arg3 renderQueue:(id)arg4;
- (void)renderCGStrokes:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect)arg2 scale:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)renderDrawing:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect)arg2 scale:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)renderDrawing:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)renderStrokes:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect)arg2 scale:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)resume;

@end

