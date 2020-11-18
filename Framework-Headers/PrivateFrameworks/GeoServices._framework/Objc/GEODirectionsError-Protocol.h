//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class NSString;
@protocol GEOTransitRoutingIncidentMessage;

@protocol GEODirectionsError <NSObject>

@property (readonly, nonatomic) long long firstDirectionsErrorCode;
@property (readonly, nonatomic) id<GEOTransitRoutingIncidentMessage> incidentMessage;
@property (readonly, nonatomic) NSString *localizedDescription;
@property (readonly, nonatomic) NSString *localizedTitle;

- (BOOL)hasError:(long long)arg1;
@end

