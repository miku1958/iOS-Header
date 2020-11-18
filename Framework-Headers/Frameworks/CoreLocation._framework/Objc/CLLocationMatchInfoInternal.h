//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreLocation/NSCopying-Protocol.h>

@interface CLLocationMatchInfoInternal : NSObject <NSCopying>
{
    long long fMatchQuality;
    struct CLLocationCoordinate2D fMatchCoordinate;
    double fMatchCourse;
    int fMatchFormOfWay;
    int fMatchRoadClass;
    BOOL fMatchShifted;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMatchQuality:(long long)arg1 matchCoordinate:(struct CLLocationCoordinate2D)arg2 matchCourse:(double)arg3 matchFormOfWay:(int)arg4 matchRoadClass:(int)arg5 matchShifted:(BOOL)arg6;

@end
