//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FlightUtilities/NSCopying-Protocol.h>
#import <FlightUtilities/NSSecureCoding-Protocol.h>

@class FUAirline, FUFlightStep, NSArray, NSDate, NSString;

@interface FUFlight : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_queriedAirlineTitle;
    FUAirline *_displayAirline;
    unsigned long long _displayFlightNumber;
    FUAirline *_airline;
    unsigned long long _flightNumber;
    NSString *_flightIdentifier;
    NSString *_cancellationMessage;
    NSArray *_legs;
    NSArray *_codeShares;
    NSArray *_allLegs;
    NSString *_identifier;
    unsigned long long _departureLegIndex;
    unsigned long long _arrivalLegIndex;
    NSDate *_expirationDate;
    NSString *_rawResponse;
}

@property (strong) FUAirline *airline; // @synthesize airline=_airline;
@property (strong, nonatomic) NSArray *allLegs; // @synthesize allLegs=_allLegs;
@property (readonly) FUFlightStep *arrival;
@property unsigned long long arrivalLegIndex; // @synthesize arrivalLegIndex=_arrivalLegIndex;
@property (strong) NSString *cancellationMessage; // @synthesize cancellationMessage=_cancellationMessage;
@property (strong) NSArray *codeShares; // @synthesize codeShares=_codeShares;
@property (readonly) FUFlightStep *departure;
@property unsigned long long departureLegIndex; // @synthesize departureLegIndex=_departureLegIndex;
@property (strong) FUAirline *displayAirline; // @synthesize displayAirline=_displayAirline;
@property (readonly) NSString *displayFlightCode;
@property unsigned long long displayFlightNumber; // @synthesize displayFlightNumber=_displayFlightNumber;
@property (readonly) double duration;
@property (strong) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property (readonly) NSString *flightCode;
@property (strong) NSString *flightIdentifier; // @synthesize flightIdentifier=_flightIdentifier;
@property unsigned long long flightNumber; // @synthesize flightNumber=_flightNumber;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong) NSArray *legs; // @synthesize legs=_legs;
@property (strong) NSString *queriedAirlineTitle; // @synthesize queriedAirlineTitle=_queriedAirlineTitle;
@property (strong) NSString *rawResponse; // @synthesize rawResponse=_rawResponse;
@property (readonly) long long status;

+ (void)loadFlightsWithNumber:(unsigned long long)arg1 airlineCode:(id)arg2 date:(id)arg3 dateType:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (BOOL)supportsSecureCoding;
+ (id)timeFormatterForIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)firstLeg;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)lastLeg;
- (id)legsAsFlights;
- (id)relevantLeg;
- (void)setDepartureLegIndex:(unsigned long long)arg1 arrivalLegIndex:(unsigned long long)arg2;

@end

