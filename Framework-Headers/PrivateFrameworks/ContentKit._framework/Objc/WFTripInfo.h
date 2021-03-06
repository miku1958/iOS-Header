//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContentKit/NSSecureCoding-Protocol.h>
#import <ContentKit/WFNaming-Protocol.h>

@class NSMeasurement, NSString, WFTimeInterval;

@interface WFTripInfo : NSObject <NSSecureCoding, WFNaming>
{
    NSString *_routeName;
    NSMeasurement *_distance;
    WFTimeInterval *_expectedTravelTime;
}

@property (readonly, nonatomic) NSMeasurement *distance; // @synthesize distance=_distance;
@property (readonly, nonatomic) WFTimeInterval *expectedTravelTime; // @synthesize expectedTravelTime=_expectedTravelTime;
@property (readonly, nonatomic) NSString *routeName; // @synthesize routeName=_routeName;
@property (readonly, copy, nonatomic) NSString *wfName;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMKRoute:(id)arg1;

@end

