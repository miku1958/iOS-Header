//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <coreroutine/NSSecureCoding-Protocol.h>

@interface RTStateModelLocation : NSObject <NSSecureCoding>
{
    double _Latitude_deg;
    double _Longitude_deg;
    double _uncertainty_m;
    double _confidence;
    double _timestamp_s;
}

@property (nonatomic) double Latitude_deg; // @synthesize Latitude_deg=_Latitude_deg;
@property (nonatomic) double Longitude_deg; // @synthesize Longitude_deg=_Longitude_deg;
@property (nonatomic) double confidence; // @synthesize confidence=_confidence;
@property (nonatomic) double timestamp_s; // @synthesize timestamp_s=_timestamp_s;
@property (nonatomic) double uncertainty_m; // @synthesize uncertainty_m=_uncertainty_m;

+ (BOOL)supportsSecureCoding;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLat:(double)arg1 Lon:(double)arg2 Uncertainty:(double)arg3 confidence:(double)arg4 andTimestamp_s:(double)arg5;
- (id)initWithLocation:(id)arg1;

@end

