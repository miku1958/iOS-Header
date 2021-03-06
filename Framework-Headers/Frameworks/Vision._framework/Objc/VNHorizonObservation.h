//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNObservation.h>

@interface VNHorizonObservation : VNObservation
{
    struct CGAffineTransform _transform;
    double _angle;
}

@property (nonatomic) double angle; // @synthesize angle=_angle;
@property (nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

