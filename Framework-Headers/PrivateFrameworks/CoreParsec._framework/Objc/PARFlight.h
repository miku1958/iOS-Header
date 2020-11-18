//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface PARFlight : NSObject
{
    NSString *_flightId;
    NSString *_contentHash;
    NSString *_carrierCode;
    NSString *_carrierName;
    NSString *_flightNumber;
    NSArray *_legs;
}

@property (strong, nonatomic) NSString *carrierCode; // @synthesize carrierCode=_carrierCode;
@property (strong, nonatomic) NSString *carrierName; // @synthesize carrierName=_carrierName;
@property (strong, nonatomic) NSString *contentHash; // @synthesize contentHash=_contentHash;
@property (strong, nonatomic) NSString *flightId; // @synthesize flightId=_flightId;
@property (strong, nonatomic) NSString *flightNumber; // @synthesize flightNumber=_flightNumber;
@property (strong, nonatomic) NSArray *legs; // @synthesize legs=_legs;

- (void).cxx_destruct;
- (id)description;

@end

