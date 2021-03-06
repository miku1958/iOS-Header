//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSArray, NSData, SISchemaSiriResponseContext;

@interface SISchemaUUFRCompletion : PBCodable
{
    int _completionStatus;
    NSArray *_homeKitAccessoryResponses;
    SISchemaSiriResponseContext *_siriResponseContext;
    struct {
        unsigned int completionStatus:1;
    } _has;
    BOOL _hasSiriResponseContext;
}

@property (nonatomic) int completionStatus; // @synthesize completionStatus=_completionStatus;
@property (nonatomic) BOOL hasCompletionStatus;
@property (nonatomic) BOOL hasSiriResponseContext; // @synthesize hasSiriResponseContext=_hasSiriResponseContext;
@property (copy, nonatomic) NSArray *homeKitAccessoryResponses; // @synthesize homeKitAccessoryResponses=_homeKitAccessoryResponses;
@property (readonly, nonatomic) NSData *jsonData;
@property (strong, nonatomic) SISchemaSiriResponseContext *siriResponseContext; // @synthesize siriResponseContext=_siriResponseContext;

- (void).cxx_destruct;
- (void)addHomeKitAccessoryResponse:(id)arg1;
- (void)clearHomeKitAccessoryResponse;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)homeKitAccessoryResponseAtIndex:(unsigned long long)arg1;
- (unsigned long long)homeKitAccessoryResponseCount;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

