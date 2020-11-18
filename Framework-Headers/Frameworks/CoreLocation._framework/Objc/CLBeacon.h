//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreLocation/NSCopying-Protocol.h>
#import <CoreLocation/NSSecureCoding-Protocol.h>

@class NSNumber, NSUUID;

@interface CLBeacon : NSObject <NSCopying, NSSecureCoding>
{
    NSUUID *_proximityUUID;
    NSNumber *_major;
    NSNumber *_minor;
    long long _proximity;
    double _accuracy;
    long long _rssi;
}

@property (readonly, nonatomic) double accuracy; // @synthesize accuracy=_accuracy;
@property (readonly, nonatomic) NSNumber *major; // @synthesize major=_major;
@property (readonly, nonatomic) NSNumber *minor; // @synthesize minor=_minor;
@property (readonly, nonatomic) long long proximity; // @synthesize proximity=_proximity;
@property (readonly, nonatomic) NSUUID *proximityUUID; // @synthesize proximityUUID=_proximityUUID;
@property (readonly, nonatomic) long long rssi; // @synthesize rssi=_rssi;

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProximityUUID:(id)arg1 major:(id)arg2 minor:(id)arg3 proximity:(long long)arg4 accuracy:(double)arg5 rssi:(long long)arg6;

@end

