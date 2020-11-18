//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLToolsResource.h>

#import <MetalTools/MTLBuffer-Protocol.h>

@class MTLToolsPointerArray, NSString;
@protocol MTLDevice, MTLHeap;

@interface MTLToolsBuffer : MTLToolsResource <MTLBuffer>
{
    MTLToolsPointerArray *_textures;
}

@property (readonly) unsigned long long allocatedSize;
@property (readonly) unsigned long long cpuCacheMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hazardTrackingMode;
@property (readonly) id<MTLHeap> heap;
@property (readonly) unsigned long long heapOffset;
@property (copy) NSString *label;
@property (readonly) unsigned long long length;
@property (readonly) unsigned long long resourceOptions;
@property (readonly) unsigned long long storageMode;
@property (readonly) Class superclass;
@property (readonly, nonatomic) MTLToolsPointerArray *textures; // @synthesize textures=_textures;

- (void)acceptVisitor:(id)arg1;
- (void)addDebugMarker:(id)arg1 range:(struct _NSRange)arg2;
- (void *)contents;
- (void)dealloc;
- (void)didModifyRange:(struct _NSRange)arg1;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (struct __IOSurface *)iosurface;
- (id)newLinearTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4;
- (id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3;
- (void)removeAllDebugMarkers;

@end
