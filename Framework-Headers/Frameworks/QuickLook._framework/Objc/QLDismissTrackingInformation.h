//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QuickLook/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface QLDismissTrackingInformation : NSObject <NSSecureCoding>
{
    double _progress;
    double _animationDuration;
    double _animationSpringDamping;
    struct CGPoint _center;
    struct CGRect _bounds;
    struct PHDisplayVelocity _velocity;
    struct CGAffineTransform _transform;
}

@property double animationDuration; // @synthesize animationDuration=_animationDuration;
@property double animationSpringDamping; // @synthesize animationSpringDamping=_animationSpringDamping;
@property struct CGRect bounds; // @synthesize bounds=_bounds;
@property struct CGPoint center; // @synthesize center=_center;
@property double progress; // @synthesize progress=_progress;
@property struct CGAffineTransform transform; // @synthesize transform=_transform;
@property struct PHDisplayVelocity velocity; // @synthesize velocity=_velocity;

+ (id)dismissTrackingInformationFromTracker:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

