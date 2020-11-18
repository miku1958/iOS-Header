//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBFlightLeg-Protocol.h>

@class NSData, NSString, _SFPBAirport, _SFPBDate;

@interface _SFPBFlightLeg : PBCodable <_SFPBFlightLeg, NSSecureCoding>
{
    CDStruct_47fe53f2 _has;
    int _status;
    _SFPBDate *_departurePublishedTime;
    _SFPBDate *_departureActualTime;
    NSString *_departureTerminal;
    NSString *_departureGate;
    _SFPBAirport *_departureAirport;
    _SFPBDate *_arrivalPublishedTime;
    _SFPBDate *_arrivalActualTime;
    NSString *_arrivalTerminal;
    NSString *_arrivalGate;
    _SFPBAirport *_arrivalAirport;
    _SFPBAirport *_divertedAirport;
    NSString *_title;
    NSString *_baggageClaim;
}

@property (strong, nonatomic) _SFPBDate *arrivalActualTime; // @synthesize arrivalActualTime=_arrivalActualTime;
@property (strong, nonatomic) _SFPBAirport *arrivalAirport; // @synthesize arrivalAirport=_arrivalAirport;
@property (copy, nonatomic) NSString *arrivalGate; // @synthesize arrivalGate=_arrivalGate;
@property (strong, nonatomic) _SFPBDate *arrivalPublishedTime; // @synthesize arrivalPublishedTime=_arrivalPublishedTime;
@property (copy, nonatomic) NSString *arrivalTerminal; // @synthesize arrivalTerminal=_arrivalTerminal;
@property (copy, nonatomic) NSString *baggageClaim; // @synthesize baggageClaim=_baggageClaim;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) _SFPBDate *departureActualTime; // @synthesize departureActualTime=_departureActualTime;
@property (strong, nonatomic) _SFPBAirport *departureAirport; // @synthesize departureAirport=_departureAirport;
@property (copy, nonatomic) NSString *departureGate; // @synthesize departureGate=_departureGate;
@property (strong, nonatomic) _SFPBDate *departurePublishedTime; // @synthesize departurePublishedTime=_departurePublishedTime;
@property (copy, nonatomic) NSString *departureTerminal; // @synthesize departureTerminal=_departureTerminal;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) _SFPBAirport *divertedAirport; // @synthesize divertedAirport=_divertedAirport;
@property (readonly, nonatomic) BOOL hasArrivalActualTime;
@property (readonly, nonatomic) BOOL hasArrivalAirport;
@property (readonly, nonatomic) BOOL hasArrivalGate;
@property (readonly, nonatomic) BOOL hasArrivalPublishedTime;
@property (readonly, nonatomic) BOOL hasArrivalTerminal;
@property (readonly, nonatomic) BOOL hasBaggageClaim;
@property (readonly, nonatomic) BOOL hasDepartureActualTime;
@property (readonly, nonatomic) BOOL hasDepartureAirport;
@property (readonly, nonatomic) BOOL hasDepartureGate;
@property (readonly, nonatomic) BOOL hasDeparturePublishedTime;
@property (readonly, nonatomic) BOOL hasDepartureTerminal;
@property (readonly, nonatomic) BOOL hasDivertedAirport;
@property (readonly, nonatomic) BOOL hasStatus;
@property (readonly, nonatomic) BOOL hasTitle;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int status; // @synthesize status=_status;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

