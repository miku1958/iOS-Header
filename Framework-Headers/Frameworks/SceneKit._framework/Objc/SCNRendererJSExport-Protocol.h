//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/JSExport-Protocol.h>

@class MTLRenderPassDescriptor, NSArray, NSDictionary, SCNNode, SCNScene;
@protocol MTLCommandBuffer, MTLDevice;

@protocol SCNRendererJSExport <JSExport>

@property (nonatomic) double currentTime;
@property (nonatomic) id delegate;
@property (nonatomic) BOOL jitteringEnabled;
@property (nonatomic) BOOL loops;
@property (readonly, nonatomic) double nextFrameTime;
@property (nonatomic, getter=isPlaying) BOOL playing;
@property (strong, nonatomic) SCNNode *pointOfView;
@property (strong, nonatomic) SCNScene *scene;
@property (nonatomic) BOOL temporalAntialiasingEnabled;

+ (id)rendererWithContext:(void *)arg1 options:(NSDictionary *)arg2;
+ (id)rendererWithDevice:(id<MTLDevice>)arg1 options:(NSDictionary *)arg2;
- (void)render;
- (void)renderAtTime:(double)arg1;
- (void)renderAtTime:(double)arg1 viewport:(struct CGRect)arg2 commandBuffer:(id<MTLCommandBuffer>)arg3 passDescriptor:(MTLRenderPassDescriptor *)arg4;
- (void)renderWithViewport:(struct CGRect)arg1 commandBuffer:(id<MTLCommandBuffer>)arg2 passDescriptor:(MTLRenderPassDescriptor *)arg3;
- (id)snapshotAtTime:(double)arg1 withSize:(struct CGSize)arg2 antialiasingMode:(unsigned long long)arg3;
- (void)updateAtTime:(double)arg1;
- (void)updateProbes:(NSArray *)arg1 atTime:(double)arg2;
@end

