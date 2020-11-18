//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBApiResults-Protocol.h>

@class NSArray, NSData, NSString;

@interface _SFPBApiResults : PBCodable <_SFPBApiResults, NSSecureCoding>
{
    int _status;
    int _resultType;
    NSArray *_flights;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *flights; // @synthesize flights=_flights;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int resultType; // @synthesize resultType=_resultType;
@property (nonatomic) int status; // @synthesize status=_status;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addFlights:(id)arg1;
- (void)clearFlights;
- (id)dictionaryRepresentation;
- (id)flightsAtIndex:(unsigned long long)arg1;
- (unsigned long long)flightsCount;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

