//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SXImageDecodingTools : NSObject
{
}

+ (id)sharedInstance;
- (struct CGColorSpace *)P3ColorSpace;
- (struct CGColorSpace *)RGBColorSpace;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (struct __CFString *)contentTypeForImageData:(id)arg1;
- (BOOL)dataIsAnimatedImage:(id)arg1;
- (id)decodeImage:(struct CGImage *)arg1;
- (id)imageFromData:(id)arg1;
- (id)imageFromData:(id)arg1 size:(struct CGSize)arg2;
- (id)loadAnimatedImageFromImageData:(id)arg1 size:(struct CGSize)arg2;
- (struct CGImage *)newImageByDecodingImage:(struct CGImage *)arg1 size:(struct CGSize)arg2;

@end

