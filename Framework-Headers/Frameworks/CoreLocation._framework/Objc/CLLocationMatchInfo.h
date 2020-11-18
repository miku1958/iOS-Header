//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreLocation/NSCopying-Protocol.h>
#import <CoreLocation/NSSecureCoding-Protocol.h>

@interface CLLocationMatchInfo : NSObject <NSCopying, NSSecureCoding>
{
    id _internal;
}

@property (readonly, nonatomic) CDStruct_c3b9c2ee matchCoordinate;
@property (readonly, nonatomic) double matchCourse;
@property (readonly, nonatomic) int matchFormOfWay;
@property (readonly, nonatomic) long long matchQuality;
@property (readonly, nonatomic) int matchRoadClass;
@property (readonly, nonatomic, getter=isMatchShifted) BOOL matchShifted;

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMatchQuality:(long long)arg1 matchCoordinate:(CDStruct_c3b9c2ee)arg2 matchCourse:(double)arg3 matchFormOfWay:(int)arg4 matchRoadClass:(int)arg5 matchShifted:(BOOL)arg6;
- (id)shortDescription;

@end

