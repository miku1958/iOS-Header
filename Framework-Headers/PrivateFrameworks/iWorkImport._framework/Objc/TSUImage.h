//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSUOnce, UIImage;

__attribute__((visibility("hidden")))
@interface TSUImage : NSObject
{
    struct CGImage *mCachedSliceableImage;
    struct __CFDictionary *mImageSlices;
    TSUOnce *mImageSlicesOnce;
    id mCachedSystemImage;
    TSUOnce *mCachedImageOnce;
}

@property (readonly, nonatomic) struct CGImage *CGImage;
@property (readonly, nonatomic) UIImage *UIImage;
@property (readonly, nonatomic) long long imageOrientation;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) struct CGSize size;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)imageNamed:(id)arg1;
+ (id)imageWithCGImage:(struct CGImage *)arg1;
+ (id)imageWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 orientation:(long long)arg3;
+ (id)imageWithContentsOfFile:(id)arg1;
+ (id)imageWithData:(id)arg1;
+ (id)imageWithUIImage:(id)arg1;
+ (id)noisePatternWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 factor:(double)arg3;
- (struct CGImage *)CGImageForContentsScale:(double)arg1;
- (struct CGImage *)CGImageForSize:(struct CGSize)arg1;
- (struct CGImage *)CGImageForSize:(struct CGSize)arg1 inContext:(struct CGContext *)arg2 orLayer:(id)arg3;
- (id)JPEGRepresentationWithCompressionQuality:(double)arg1;
- (id)PNGRepresentation;
- (id)TIFFRepresentation;
- (id)compositedImageWithColor:(id)arg1 alpha:(double)arg2 blendMode:(int)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)drawInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2 stretchingCenterWidthBy:(double)arg3;
- (id)init;
- (id)initWithCGImage:(struct CGImage *)arg1;
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 orientation:(long long)arg3;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithImageSourceRef:(struct CGImageSource *)arg1;
- (id)initWithUIImage:(id)arg1;
- (BOOL)isEmpty;
- (id)stretchedImageOfSize:(struct CGSize)arg1 leftCapWidth:(double)arg2 rightCapWidth:(double)arg3 topCapHeight:(double)arg4 bottomCapHeight:(double)arg5;

@end

