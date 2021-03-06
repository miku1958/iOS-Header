//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIImage;

@interface GKImageContext : NSObject
{
    double _scale;
    struct CGContext *_CGContext;
    struct CGSize _size;
}

@property (readonly, nonatomic) struct CGContext *CGContext; // @synthesize CGContext=_CGContext;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property (nonatomic) struct CGSize size; // @synthesize size=_size;

+ (id)contextDrawnWithSize:(struct CGSize)arg1 scale:(double)arg2 options:(unsigned int)arg3 usingBlock:(CDUnknownBlockType)arg4;
+ (id)imageDrawnWithSize:(struct CGSize)arg1 scale:(double)arg2 options:(unsigned int)arg3 usingBlock:(CDUnknownBlockType)arg4;
+ (id)imageFromRawPixelsAtURL:(id)arg1;
- (id)initWithSize:(struct CGSize)arg1 scale:(double)arg2 options:(unsigned int)arg3;
- (id)initWithSize:(struct CGSize)arg1 scale:(double)arg2 options:(unsigned int)arg3 data:(void *)arg4;
- (BOOL)writeRawPixelsToURL:(id)arg1 error:(id *)arg2;

@end

