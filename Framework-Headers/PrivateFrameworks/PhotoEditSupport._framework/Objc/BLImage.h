//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoEditSupport/NSCopying-Protocol.h>

@class CIImage, UIImage;

@interface BLImage : NSObject <NSCopying>
{
    UIImage *_UIImage;
    struct CGImage *_CGImage;
    CIImage *_CIImage;
    int _storageType;
    struct CGSize _size;
    BOOL _isPlaceholder;
    int _askedImageType;
    int _obtainedImageType;
}

@property (nonatomic) int askedImageType; // @synthesize askedImageType=_askedImageType;
@property (readonly, nonatomic) long long imageOrientation;
@property (nonatomic) BOOL isPlaceholder; // @synthesize isPlaceholder=_isPlaceholder;
@property (readonly, nonatomic) unsigned long long memoryUsage;
@property (nonatomic) int obtainedImageType; // @synthesize obtainedImageType=_obtainedImageType;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) struct CGSize size;
@property (readonly, nonatomic) int storageType; // @synthesize storageType=_storageType;

+ (id)abbreviatedDescriptionWithImageType:(int)arg1;
+ (id)descriptionWithImageType:(int)arg1;
+ (id)imageWithImage:(id)arg1;
- (void).cxx_destruct;
- (struct CGImage *)CGImage;
- (id)CIImage;
- (id)UIImage;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithFileAtURL:(id)arg1;

@end
