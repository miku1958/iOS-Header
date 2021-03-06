//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NSCopying-Protocol.h>
#import <NanoTimeKitCompanion/NSSecureCoding-Protocol.h>

@class UIImage;

@interface NTKUpNextCurvedMetadata : NSObject <NSSecureCoding, NSCopying>
{
    double _radius;
    double _angle;
    UIImage *_maskImage;
    struct CGPoint _center;
}

@property (readonly, nonatomic) double angle; // @synthesize angle=_angle;
@property (readonly, nonatomic) struct CGPoint center; // @synthesize center=_center;
@property (readonly, nonatomic) UIImage *maskImage; // @synthesize maskImage=_maskImage;
@property (readonly, nonatomic) double radius; // @synthesize radius=_radius;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRadius:(double)arg1 angle:(double)arg2 center:(struct CGPoint)arg3 maskImage:(id)arg4;

@end

