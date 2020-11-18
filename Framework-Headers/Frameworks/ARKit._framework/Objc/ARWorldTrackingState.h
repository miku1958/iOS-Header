//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/NSCopying-Protocol.h>
#import <ARKit/NSSecureCoding-Protocol.h>

@interface ARWorldTrackingState : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _majorRelocalization;
    BOOL _minorRelocalization;
    BOOL _poseGraphUpdated;
    long long _state;
    long long _reason;
    long long _vioTrackingState;
    double _lastMajorRelocalizationTimestamp;
    double _originTimestamp;
}

@property (nonatomic) double lastMajorRelocalizationTimestamp; // @synthesize lastMajorRelocalizationTimestamp=_lastMajorRelocalizationTimestamp;
@property (nonatomic) BOOL majorRelocalization; // @synthesize majorRelocalization=_majorRelocalization;
@property (nonatomic) BOOL minorRelocalization; // @synthesize minorRelocalization=_minorRelocalization;
@property (nonatomic) double originTimestamp; // @synthesize originTimestamp=_originTimestamp;
@property (nonatomic) BOOL poseGraphUpdated; // @synthesize poseGraphUpdated=_poseGraphUpdated;
@property (nonatomic) long long reason; // @synthesize reason=_reason;
@property (nonatomic) long long state; // @synthesize state=_state;
@property (nonatomic) long long vioTrackingState; // @synthesize vioTrackingState=_vioTrackingState;

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
