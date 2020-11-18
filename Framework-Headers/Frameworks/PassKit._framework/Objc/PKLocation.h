//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface PKLocation : NSObject <NSSecureCoding>
{
    NSNumber *_latitude;
    NSNumber *_longitude;
    NSNumber *_maxDistance;
    NSNumber *_altitude;
    NSString *_name;
    NSString *_relevantText;
}

@property (readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (copy, nonatomic) NSString *relevantText; // @synthesize relevantText=_relevantText;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)CLLocation;
- (double)altitude;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasAltitude;
- (BOOL)hasEqualCoordinatesToLocation:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (double)latitude;
- (double)longitude;
- (double)maxDistance;
- (void)setAltitude:(id)arg1;
- (void)setLatitude:(id)arg1;
- (void)setLongitude:(id)arg1;
- (void)setMaxDistance:(id)arg1;

@end

