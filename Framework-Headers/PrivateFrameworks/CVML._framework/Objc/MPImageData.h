//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MPImageData : NSObject
{
    BOOL _freeImageInDealloc;
    struct vImage_Buffer *_image;
    struct __CVBuffer *_imageCVPixelBuffer;
    NSString *_imageFilePath;
    NSString *_externalImageId;
    long long _exifTimestamp;
}

@property (readonly) long long exifTimestamp; // @synthesize exifTimestamp=_exifTimestamp;
@property (readonly) NSString *externalImageId; // @synthesize externalImageId=_externalImageId;
@property BOOL freeImageInDealloc; // @synthesize freeImageInDealloc=_freeImageInDealloc;
@property (readonly) struct vImage_Buffer *image; // @synthesize image=_image;
@property (readonly) struct __CVBuffer *imageCVPixelBuffer; // @synthesize imageCVPixelBuffer=_imageCVPixelBuffer;
@property (strong) NSString *imageFilePath; // @synthesize imageFilePath=_imageFilePath;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCVPixelBufferImage:(struct __CVBuffer *)arg1 externalImageId:(id)arg2 andExifTimestampString:(id)arg3 error:(id *)arg4;
- (id)initWithCVPixelBufferImage:(struct __CVBuffer *)arg1 externalImageId:(id)arg2 andExifTimestampValue:(long long)arg3 error:(id *)arg4;
- (id)initWithVImage:(struct vImage_Buffer *)arg1 externalImageId:(id)arg2 andExifTimestampString:(id)arg3 error:(id *)arg4;
- (id)initWithVImage:(struct vImage_Buffer *)arg1 externalImageId:(id)arg2 andExifTimestampValue:(long long)arg3 error:(id *)arg4;

@end

