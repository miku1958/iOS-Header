//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOComposedWaypoint, NSString;

@interface MNTraceCommuteDestinationRow : NSObject
{
    unsigned long long _destinationID;
    NSString *_name;
    GEOComposedWaypoint *_waypoint;
}

@property (nonatomic) unsigned long long destinationID; // @synthesize destinationID=_destinationID;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) GEOComposedWaypoint *waypoint; // @synthesize waypoint=_waypoint;

- (void).cxx_destruct;

@end

