//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ARKit/ARAnchor.h>

#import <ARKit/ARTrackable-Protocol.h>

@class NSString;

@interface ARGeoAnchor : ARAnchor <ARTrackable>
{
    BOOL isTracked;
    double _altitude;
    long long _altitudeSource;
    struct CLLocationCoordinate2D _coordinate;
}

@property (readonly, nonatomic) double altitude; // @synthesize altitude=_altitude;
@property (readonly, nonatomic) long long altitudeSource; // @synthesize altitudeSource=_altitudeSource;
@property (readonly, nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isTracked; // @synthesize isTracked;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1 altitude:(double)arg2;
- (id)initWithName:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2;
- (id)initWithName:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2 altitude:(double)arg3;

@end

