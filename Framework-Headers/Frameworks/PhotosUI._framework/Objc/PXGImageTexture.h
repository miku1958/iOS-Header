//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGBaseTexture.h>

@class MISSING_TYPE;

@interface PXGImageTexture : PXGBaseTexture
{
    struct CGImage *_sourceCGImage;
    struct __CVBuffer *_sourceCVPixelBuffer;
}

@property (readonly, nonatomic) MISSING_TYPE *orientationTransform;
@property (nonatomic) struct CGImage *sourceCGImage;
@property (nonatomic) struct __CVBuffer *sourceCVPixelBuffer;

+ (id)_sharedCIContext;
- (void)dealloc;
- (void)getTextureInfos:(CDStruct_183601bc *)arg1 forSpriteIndexes:(unsigned int *)arg2 geometries:(const CDStruct_3ab912e1 *)arg3 spriteStyles:(const CDStruct_506f5052 *)arg4 spriteInfos:(const CDStruct_9d1ebe49 *)arg5 screenScale:(double)arg6 count:(unsigned int)arg7;
- (struct CGImage *)imageRepresentation;
- (id)init;

@end
