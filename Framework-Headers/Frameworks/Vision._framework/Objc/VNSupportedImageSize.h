//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Vision/NSCopying-Protocol.h>
#import <Vision/NSSecureCoding-Protocol.h>

@class VNSizeRange;

@interface VNSupportedImageSize : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _cachedCalculatedHash;
    BOOL _orientationAgnostic;
    unsigned int _idealImageFormat;
    unsigned int _idealOrientation;
    VNSizeRange *_pixelsWideRange;
    VNSizeRange *_pixelsHighRange;
    unsigned long long _aspectRatioHandling;
}

@property (readonly, nonatomic) unsigned long long aspectRatioHandling; // @synthesize aspectRatioHandling=_aspectRatioHandling;
@property (readonly, nonatomic) unsigned int idealImageFormat; // @synthesize idealImageFormat=_idealImageFormat;
@property (readonly, nonatomic) unsigned int idealOrientation; // @synthesize idealOrientation=_idealOrientation;
@property (readonly, nonatomic, getter=isOrientationAgnostic) BOOL orientationAgnostic; // @synthesize orientationAgnostic=_orientationAgnostic;
@property (readonly, nonatomic) VNSizeRange *pixelsHighRange; // @synthesize pixelsHighRange=_pixelsHighRange;
@property (readonly, nonatomic) VNSizeRange *pixelsWideRange; // @synthesize pixelsWideRange=_pixelsWideRange;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdealFormat:(unsigned int)arg1 pixelsWideRange:(id)arg2 pixelsHighRange:(id)arg3 aspectRatioHandling:(unsigned long long)arg4 idealOrientation:(unsigned int)arg5 orientationAgnostic:(BOOL)arg6;
- (BOOL)isAllowedPixelsWide:(unsigned long long)arg1 pixelsHigh:(unsigned long long)arg2;
- (BOOL)isEqual:(id)arg1;

@end

