//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPFeedbackUUID-Protocol.h>
#import <CoreParsec/_CPProcessableFeedback-Protocol.h>
#import <CoreParsec/_CPStartLocalSearchFeedback-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface _CPStartLocalSearchFeedback : PBCodable <_CPProcessableFeedback, _CPFeedbackUUID, _CPStartLocalSearchFeedback, NSSecureCoding>
{
    struct {
        unsigned int timestamp:1;
        unsigned int triggerEvent:1;
        unsigned int queryId:1;
        unsigned int indexType:1;
    } _has;
    int _triggerEvent;
    int _indexType;
    unsigned long long _timestamp;
    NSString *_input;
    NSString *_uuid;
    unsigned long long _queryId;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) id feedbackJSON;
@property (readonly, nonatomic) BOOL hasIndexType;
@property (readonly, nonatomic) BOOL hasInput;
@property (readonly, nonatomic) BOOL hasQueryId;
@property (readonly, nonatomic) BOOL hasTimestamp;
@property (readonly, nonatomic) BOOL hasTriggerEvent;
@property (readonly, nonatomic) BOOL hasUuid;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (nonatomic) int indexType; // @synthesize indexType=_indexType;
@property (copy, nonatomic) NSString *input; // @synthesize input=_input;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned long long queryId; // @synthesize queryId=_queryId;
@property (readonly, nonatomic) BOOL requiresQueryId;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int triggerEvent; // @synthesize triggerEvent=_triggerEvent;
@property (readonly, copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *uuid;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

