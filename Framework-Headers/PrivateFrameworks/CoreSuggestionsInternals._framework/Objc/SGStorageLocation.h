//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/NSCopying-Protocol.h>
#import <CoreSuggestionsInternals/NSSecureCoding-Protocol.h>
#import <CoreSuggestionsInternals/SGEventLocationForGeocode-Protocol.h>

@class NSData, NSString;

@interface SGStorageLocation : NSObject <NSCopying, NSSecureCoding, SGEventLocationForGeocode>
{
    int _locationType;
    NSString *_label;
    NSString *_address;
    NSString *_airportCode;
    double _latitude;
    double _longitude;
    double _accuracy;
    double _quality;
    NSData *_handle;
}

@property (readonly, nonatomic) double accuracy; // @synthesize accuracy=_accuracy;
@property (readonly, nonatomic) NSString *address; // @synthesize address=_address;
@property (readonly, nonatomic) NSString *airportCode; // @synthesize airportCode=_airportCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSData *handle; // @synthesize handle=_handle;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property (readonly, nonatomic) double latitude; // @synthesize latitude=_latitude;
@property (readonly, nonatomic) int locationType; // @synthesize locationType=_locationType;
@property (readonly, nonatomic) double longitude; // @synthesize longitude=_longitude;
@property (readonly, nonatomic) double quality; // @synthesize quality=_quality;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)convertToLocationWithId:(id)arg1 origin:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (double)geocodeAccuracy;
- (id)geocodeAddress;
- (id)geocodeAirportCode;
- (id)geocodeHandle;
- (BOOL)geocodeIsEnd;
- (BOOL)geocodeIsStart;
- (id)geocodeLabel;
- (double)geocodeLatitude;
- (double)geocodeLongitude;
- (id)geocodedLocationWithLabel:(id)arg1 address:(id)arg2 latitude:(double)arg3 longitude:(double)arg4 accuracy:(double)arg5 handle:(id)arg6;
- (id)geocodedLocationWithLatitude:(double)arg1 longitude:(double)arg2 accuracy:(double)arg3 handle:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(int)arg1 label:(id)arg2 address:(id)arg3 airportCode:(id)arg4 accuracy:(double)arg5 quality:(double)arg6;
- (id)initWithType:(int)arg1 label:(id)arg2 address:(id)arg3 airportCode:(id)arg4 latitude:(double)arg5 longitude:(double)arg6 accuracy:(double)arg7 quality:(double)arg8 handle:(id)arg9;
- (id)initWithType:(int)arg1 label:(id)arg2 airportCode:(id)arg3 latitude:(double)arg4 longitude:(double)arg5 accuracy:(double)arg6 quality:(double)arg7;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToStorageLocation:(id)arg1;

@end

