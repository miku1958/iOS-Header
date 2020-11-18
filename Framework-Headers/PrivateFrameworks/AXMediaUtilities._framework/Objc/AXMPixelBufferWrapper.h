//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AXMPixelBufferWrapper : NSObject
{
    struct __CVBuffer *_pixelBuffer;
    unsigned int _orientation;
}

@property (readonly, nonatomic) unsigned int orientation;
@property (readonly, nonatomic) struct CGSize orientedSize;
@property (readonly, nonatomic) struct __CVBuffer *pixelBuffer;
@property (readonly, nonatomic) struct CGSize unorientedSize;

+ (id)new;
+ (id)wrapperWithPixelBuffer:(struct __CVBuffer *)arg1 orientation:(unsigned int)arg2;
- (id)_initWithPixelBuffer:(struct __CVBuffer *)arg1 orientation:(unsigned int)arg2;
- (void)dealloc;
- (id)init;

@end
