//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface MNTraceRouteSelectionsRow : NSObject
{
    double _startTimestamp;
    double _endTimestamp;
    NSData *_routeID;
    unsigned long long _selectedRouteIndex;
}

@property (nonatomic) double endTimestamp; // @synthesize endTimestamp=_endTimestamp;
@property (copy, nonatomic) NSData *routeID; // @synthesize routeID=_routeID;
@property (nonatomic) unsigned long long selectedRouteIndex; // @synthesize selectedRouteIndex=_selectedRouteIndex;
@property (nonatomic) double startTimestamp; // @synthesize startTimestamp=_startTimestamp;

- (void).cxx_destruct;

@end

