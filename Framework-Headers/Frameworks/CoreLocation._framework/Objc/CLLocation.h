//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreLocation/NSCopying-Protocol.h>
#import <CoreLocation/NSSecureCoding-Protocol.h>

@class CLFloor, CLLocationMatchInfo, NSDate, NSString;

@interface CLLocation : NSObject <NSCopying, NSSecureCoding>
{
    id _internal;
}

@property (readonly, nonatomic) double altitude;
@property (readonly, nonatomic) CDStruct_0aa5cb5c clientLocation;
@property (readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
@property (readonly, nonatomic) double course;
@property (readonly, copy, nonatomic) CLFloor *floor;
@property (readonly, nonatomic) double horizontalAccuracy;
@property (readonly, nonatomic) unsigned int integrity;
@property (readonly, nonatomic) NSString *iso6709Notation;
@property (readonly, nonatomic) CLLocationMatchInfo *matchInfo;
@property (readonly, nonatomic) struct CLLocationCoordinate2D rawCoordinate;
@property (readonly, nonatomic) double rawCourse;
@property (nonatomic) int referenceFrame;
@property (readonly, nonatomic) double speed;
@property (readonly, nonatomic) double speedAccuracy;
@property (readonly, copy, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) double trustedTimestamp;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) double verticalAccuracy;

+ (BOOL)supportsSecureCoding;
- (id)_initWithCoordinate:(struct CLLocationCoordinate2D)arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 course:(double)arg5 speed:(double)arg6 timestamp:(id)arg7 floor:(int)arg8;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (double)distanceFromLocation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (double)getDistanceFrom:(id)arg1;
- (id)init;
- (id)initWithClientLocation:(CDStruct_0aa5cb5c)arg1;
- (id)initWithClientLocation:(CDStruct_0aa5cb5c)arg1 matchInfo:(id)arg2;
- (id)initWithClientLocation:(CDStruct_0aa5cb5c)arg1 matchInfo:(id)arg2 trustedTimestamp:(double)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 course:(double)arg5 speed:(double)arg6 timestamp:(id)arg7;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 timestamp:(id)arg5;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
- (id)propagateLocationToTime:(double)arg1;
- (void)setHorizontalAccuracy:(double)arg1;
- (id)shortDescription;
- (id)snapToResolution:(double)arg1;

@end

