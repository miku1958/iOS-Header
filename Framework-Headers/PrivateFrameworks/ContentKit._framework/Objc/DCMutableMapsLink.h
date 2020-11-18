//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/DCMapsLink.h>

@class NSString;

@interface DCMutableMapsLink : DCMapsLink
{
    NSString *_searchQuery;
    NSString *_searchNearQuery;
    NSString *_searchLocation;
    NSString *_startAddress;
    NSString *_destinationAddress;
    unsigned long long _directionsMode;
    NSString *_centerLocation;
    long long _zoomLevel;
    unsigned long long _mapType;
    BOOL _showsTraffic;
    BOOL _showsTransit;
    BOOL _showsStreetView;
    BOOL _showsBicycling;
    NSString *_streetViewLocation;
}

@property (copy, nonatomic) NSString *centerLocation; // @synthesize centerLocation=_centerLocation;
@property (copy, nonatomic) NSString *destinationAddress; // @synthesize destinationAddress=_destinationAddress;
@property (nonatomic) unsigned long long directionsMode; // @synthesize directionsMode=_directionsMode;
@property (nonatomic) unsigned long long mapType; // @synthesize mapType=_mapType;
@property (copy, nonatomic) NSString *searchLocation; // @synthesize searchLocation=_searchLocation;
@property (copy, nonatomic) NSString *searchNearQuery; // @synthesize searchNearQuery=_searchNearQuery;
@property (copy, nonatomic) NSString *searchQuery; // @synthesize searchQuery=_searchQuery;
@property (nonatomic) BOOL showsBicycling; // @synthesize showsBicycling=_showsBicycling;
@property (nonatomic) BOOL showsStreetView; // @synthesize showsStreetView=_showsStreetView;
@property (nonatomic) BOOL showsTraffic; // @synthesize showsTraffic=_showsTraffic;
@property (nonatomic) BOOL showsTransit; // @synthesize showsTransit=_showsTransit;
@property (copy, nonatomic) NSString *startAddress; // @synthesize startAddress=_startAddress;
@property (copy, nonatomic) NSString *streetViewLocation; // @synthesize streetViewLocation=_streetViewLocation;
@property (nonatomic) long long zoomLevel; // @synthesize zoomLevel=_zoomLevel;

- (void).cxx_destruct;

@end
