//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface InpaintingVImageWrapper : NSObject
{
    struct vImage_Buffer *_image;
    BOOL freeWhenDone;
    int _bpp;
}

@property (readonly, getter=getBytesPerPixel) int bytesPerPixel;
@property (readonly, getter=getBytesPerRow) int bytesPerRow;
@property (readonly, getter=getData) void *data;
@property (readonly, getter=getHeight) int height;
@property (readonly) struct vImage_Buffer *image; // @synthesize image=_image;
@property (readonly, getter=getWidth) int width;

+ (id)createVImageWrapperForProcessorInput:(id)arg1 thatMatchesOutput:(id)arg2;
+ (id)vImageWrapperByCroppingWrapper:(id)arg1 toRect:(struct CGRect)arg2;
- (void)dealloc;
- (void)free;
- (id)initWithShapeOf:(id)arg1;
- (id)initWithWidth:(int)arg1 height:(int)arg2 bpp:(int)arg3;
- (id)initWithWidth:(int)arg1 height:(int)arg2 bpp:(int)arg3 bpr:(int)arg4 bytes:(void *)arg5 freeBytesWhenDone:(BOOL)arg6;
- (id)initWithWidth:(int)arg1 height:(int)arg2 bpp:(int)arg3 bytes:(void *)arg4 freeBytesWhenDone:(BOOL)arg5;

@end

