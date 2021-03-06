//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle, NSString, UIImage;

@interface PSLazyImagePromise : NSObject
{
    NSString *_imagePath;
    NSString *_imageName;
    NSBundle *_imageBundle;
    CDUnknownBlockType _loadBlock;
    UIImage *_image;
    BOOL _imageLoaded;
}

@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic, getter=isImageLoaded) BOOL imageLoaded; // @synthesize imageLoaded=_imageLoaded;

+ (id)imagePromiseWithImageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)imagePromiseWithImagePath:(id)arg1;
+ (id)imagePromiseWithLoadBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)loadImage;

@end

