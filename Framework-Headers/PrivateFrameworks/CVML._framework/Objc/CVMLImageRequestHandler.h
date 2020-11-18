//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CVML/CVMLRequestHandler.h>

@class CVMLImageBuffer, NSDictionary;

@interface CVMLImageRequestHandler : CVMLRequestHandler
{
    CVMLImageBuffer *_imageBuffer;
    NSDictionary *_properties;
}

@property (readonly) CVMLImageBuffer *imageBuffer; // @synthesize imageBuffer=_imageBuffer;
@property (readonly) NSDictionary *properties; // @synthesize properties=_properties;

+ (id)handlerForBuffer:(struct __CVBuffer *)arg1 options:(id)arg2;
+ (id)handlerForCGImage:(struct CGImage *)arg1 options:(id)arg2;
+ (id)handlerForCIImage:(id)arg1 options:(id)arg2;
+ (id)handlerForData:(id)arg1 options:(id)arg2;
+ (id)handlerForURL:(id)arg1 options:(id)arg2;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithBuffer:(struct __CVBuffer *)arg1 options:(id)arg2;
- (id)initWithCGImage:(struct CGImage *)arg1 options:(id)arg2;
- (id)initWithCIImage:(id)arg1 options:(id)arg2;
- (id)initWithData:(id)arg1 options:(id)arg2;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (void)releaseOriginalBuffer;
- (BOOL)useFullImageBufferForFaces:(id)arg1;

@end

