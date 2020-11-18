//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNTracePlayerTimelineStreamObjectType-Protocol.h>

@class NSString;

@interface MNTraceVehicleHeadingRow : NSObject <MNTracePlayerTimelineStreamObjectType>
{
    double _timestamp;
    double _vehicleHeading;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) double position;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property (nonatomic) double vehicleHeading; // @synthesize vehicleHeading=_vehicleHeading;


@end

