//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/NSCopying-Protocol.h>
#import <ARKit/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;

@interface ARReferenceImage : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_name;
    struct __CVBuffer *_pixelBuffer;
    struct __CVBuffer *_alphaMask;
    NSUUID *_identifier;
    struct CGSize _physicalSize;
}

@property (readonly, nonatomic) struct __CVBuffer *alphaMask; // @synthesize alphaMask=_alphaMask;
@property (readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) struct CGSize imageSize;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) struct CGSize physicalSize; // @synthesize physicalSize=_physicalSize;
@property (readonly, nonatomic) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;

+ (id)referenceImagesInGroupNamed:(id)arg1 bundle:(id)arg2;
+ (id)referenceImagesInGroupNamed:(id)arg1 catalog:(id)arg2;
+ (id)referenceImagesInGroupNamed:(id)arg1 catalogName:(id)arg2 bundle:(id)arg3;
+ (id)referenceImagesInGroupNamed:(id)arg1 catalogURL:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCGImage:(struct CGImage *)arg1 orientation:(unsigned int)arg2 physicalWidth:(double)arg3;
- (id)initWithCIImage:(id)arg1 orientation:(unsigned int)arg2 physicalWidth:(double)arg3 alphaInfo:(unsigned int *)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 orientation:(unsigned int)arg2 physicalWidth:(double)arg3;
- (BOOL)isEqual:(id)arg1;

@end
