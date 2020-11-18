//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableRoutineLocationResponse, HDCodableRoutinePredictedLocationsResponse, NSString;

@interface HDCodableRoutineResponseMessage : PBCodable <NSCopying>
{
    NSString *_errorDescription;
    HDCodableRoutineLocationResponse *_fetchLocationResponse;
    HDCodableRoutinePredictedLocationsResponse *_fetchNextLocationResponse;
    NSString *_requestIdentifier;
    int _requestType;
    CDStruct_7c66fec0 _has;
}

@property (strong, nonatomic) NSString *errorDescription; // @synthesize errorDescription=_errorDescription;
@property (strong, nonatomic) HDCodableRoutineLocationResponse *fetchLocationResponse; // @synthesize fetchLocationResponse=_fetchLocationResponse;
@property (strong, nonatomic) HDCodableRoutinePredictedLocationsResponse *fetchNextLocationResponse; // @synthesize fetchNextLocationResponse=_fetchNextLocationResponse;
@property (readonly, nonatomic) BOOL hasErrorDescription;
@property (readonly, nonatomic) BOOL hasFetchLocationResponse;
@property (readonly, nonatomic) BOOL hasFetchNextLocationResponse;
@property (readonly, nonatomic) BOOL hasRequestIdentifier;
@property (nonatomic) BOOL hasRequestType;
@property (strong, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property (nonatomic) int requestType; // @synthesize requestType=_requestType;

- (void).cxx_destruct;
- (int)StringAsRequestType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)requestTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

