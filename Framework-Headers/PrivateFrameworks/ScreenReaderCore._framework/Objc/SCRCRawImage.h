//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface SCRCRawImage : NSObject
{
    struct CGImage *_imageRef;
    char *_data;
    long long _width;
    long long _height;
    long long _bytesPerPixel;
}

@property (nonatomic) long long bytesPerPixel; // @synthesize bytesPerPixel=_bytesPerPixel;
@property (nonatomic) char *data; // @synthesize data=_data;
@property (nonatomic) long long height; // @synthesize height=_height;
@property (strong, nonatomic) struct CGImage *imageRef; // @synthesize imageRef=_imageRef;
@property (nonatomic) long long width; // @synthesize width=_width;

+ (id)rawImageForImage:(struct CGImage *)arg1;
- (void)dealloc;

@end
