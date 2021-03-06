//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SPOwner/NSSecureCoding-Protocol.h>

@class NSDate, NSUUID, SPObservationLocation;

@interface SPBeaconObservation : NSObject <NSSecureCoding>
{
    NSUUID *_beaconIdentifier;
    long long _type;
    NSDate *_date;
    SPObservationLocation *_location;
}

@property (readonly, copy, nonatomic) NSUUID *beaconIdentifier; // @synthesize beaconIdentifier=_beaconIdentifier;
@property (readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property (readonly, copy, nonatomic) SPObservationLocation *location; // @synthesize location=_location;
@property (readonly, nonatomic) long long type; // @synthesize type=_type;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithBeaconIdentifier:(id)arg1 type:(long long)arg2 date:(id)arg3 location:(id)arg4;
- (id)initWithCoder:(id)arg1;

@end

