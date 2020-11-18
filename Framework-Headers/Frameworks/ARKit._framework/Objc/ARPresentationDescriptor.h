//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/NSCopying-Protocol.h>
#import <ARKit/NSSecureCoding-Protocol.h>

@class MISSING_TYPE, NSArray;

@interface ARPresentationDescriptor : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long _colorPixelFormat;
    unsigned long long _depthPixelFormat;
    MISSING_TYPE *_depthRange;
    long long _layout;
    long long _multisampleCount;
    long long _HUDOption;
    long long _presentationWarp;
    unsigned long long _drawablePixelFormat;
    unsigned long long _drawableCount;
    NSArray *_supportedMultisampleCount;
}

@property (nonatomic) long long HUDOption; // @synthesize HUDOption=_HUDOption;
@property (nonatomic) unsigned long long colorPixelFormat; // @synthesize colorPixelFormat=_colorPixelFormat;
@property (nonatomic) unsigned long long depthPixelFormat; // @synthesize depthPixelFormat=_depthPixelFormat;
@property (nonatomic) MISSING_TYPE *depthRange; // @synthesize depthRange=_depthRange;
@property (nonatomic) unsigned long long drawableCount; // @synthesize drawableCount=_drawableCount;
@property (nonatomic) unsigned long long drawablePixelFormat; // @synthesize drawablePixelFormat=_drawablePixelFormat;
@property (nonatomic) long long layout; // @synthesize layout=_layout;
@property (nonatomic) long long multisampleCount; // @synthesize multisampleCount=_multisampleCount;
@property (nonatomic) long long presentationWarp; // @synthesize presentationWarp=_presentationWarp;
@property (readonly, nonatomic) NSArray *supportedMultisampleCount; // @synthesize supportedMultisampleCount=_supportedMultisampleCount;
@property (readonly, nonatomic) MISSING_TYPE *viewportDepthRange;
@property (readonly, nonatomic) MISSING_TYPE *viewportDepthRangeNDC;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToDescriptor:(id)arg1;
- (BOOL)isReverseZ;

@end
