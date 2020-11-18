//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface BLImagePatch : NSObject
{
    struct CGImage *_imageRef;
    struct CGImage *_maskRef;
    struct CGRect _rect;
}

+ (id)patchFromRect:(struct CGRect)arg1 inImage:(struct CGImage *)arg2;
+ (id)patchFromRect:(struct CGRect)arg1 inImage:(struct CGImage *)arg2 withMask:(struct CGImage *)arg3;
- (void)dealloc;
- (id)description;
- (void)drawInContext:(struct CGContext *)arg1;
- (struct CGImage *)image;
- (id)initWithImageRef:(struct CGImage *)arg1 andRect:(struct CGRect)arg2;
- (id)initWithImageRef:(struct CGImage *)arg1 andRect:(struct CGRect)arg2 andMask:(struct CGImage *)arg3;
- (struct CGPoint)origin;
- (struct CGRect)rect;
- (struct CGSize)size;
- (void)translateOriginByPoint:(struct CGPoint)arg1;

@end
