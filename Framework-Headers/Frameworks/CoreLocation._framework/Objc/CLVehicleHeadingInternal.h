//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreLocation/NSCopying-Protocol.h>

@interface CLVehicleHeadingInternal : NSObject <NSCopying>
{
    struct {
        double trueHeading;
        double timestamp;
    } fHeading;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithClientVehicleHeading:(CDStruct_c3b9c2ee)arg1;

@end

