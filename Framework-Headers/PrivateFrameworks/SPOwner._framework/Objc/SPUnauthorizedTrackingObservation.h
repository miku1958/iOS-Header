//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SPOwner/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, SPUnauthorizedTrackingAdvertisement;

@interface SPUnauthorizedTrackingObservation : NSObject <NSSecureCoding>
{
    SPUnauthorizedTrackingAdvertisement *_trackingIdentifier;
    NSArray *_observedLocations;
    NSDate *_observedAt;
}

@property (copy, nonatomic) NSDate *observedAt; // @synthesize observedAt=_observedAt;
@property (copy, nonatomic) NSArray *observedLocations; // @synthesize observedLocations=_observedLocations;
@property (strong, nonatomic) SPUnauthorizedTrackingAdvertisement *trackingIdentifier; // @synthesize trackingIdentifier=_trackingIdentifier;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithCurrentAdvertisementAndLocationHistory:(id)arg1 observedLocations:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end

