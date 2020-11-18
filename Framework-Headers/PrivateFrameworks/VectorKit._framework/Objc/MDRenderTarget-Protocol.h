//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/NSObject-Protocol.h>

@class CALayer;
@protocol GGLRenderQueueSource;

@protocol MDRenderTarget <NSObject>

@property (readonly, nonatomic) float averageFPS;
@property (nonatomic) struct CGRect bounds;
@property (nonatomic) double contentScale;
@property (readonly, nonatomic) struct RenderTarget *finalRenderTarget;
@property (readonly, nonatomic) const struct RenderTargetFormat *format;
@property (readonly, nonatomic) BOOL multiSample;
@property (nonatomic) id<GGLRenderQueueSource> renderSource;
@property (readonly, nonatomic) struct Renderer *renderer;
@property (readonly, nonatomic) BOOL shouldRasterize;
@property (nonatomic) struct CGSize size;
@property (readonly, nonatomic) struct CGSize sizeInPixels;

- (shared_ptr_fa6aa836)bitmapData;
- (void)createRenderTarget;
- (void)destroyRenderTarget;
- (BOOL)hasRenderTarget;
- (void)renderWithTimestamp:(double)arg1 completion:(function_d3afe2e2)arg2;

@optional
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toLayer:(CALayer *)arg2;
- (struct DebugConsole *)debugConsoleForId:(int)arg1;
- (void)didDrawView;
- (void)willDrawView;
@end
