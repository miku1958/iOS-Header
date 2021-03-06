//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SISchemaIntercomMessageRecorded : PBCodable
{
    long long _durationInMs;
    BOOL _isReply;
    BOOL _disambiguationRequired;
    int _intercomTarget;
    struct {
        unsigned int durationInMs:1;
        unsigned int isReply:1;
        unsigned int disambiguationRequired:1;
        unsigned int intercomTarget:1;
    } _has;
}

@property (nonatomic) BOOL disambiguationRequired; // @synthesize disambiguationRequired=_disambiguationRequired;
@property (nonatomic) long long durationInMs; // @synthesize durationInMs=_durationInMs;
@property (nonatomic) BOOL hasDisambiguationRequired;
@property (nonatomic) BOOL hasDurationInMs;
@property (nonatomic) BOOL hasIntercomTarget;
@property (nonatomic) BOOL hasIsReply;
@property (nonatomic) int intercomTarget; // @synthesize intercomTarget=_intercomTarget;
@property (nonatomic) BOOL isReply; // @synthesize isReply=_isReply;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

