//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPClientTimingFeedback-Protocol.h>
#import <CoreParsec/_CPProcessableFeedback-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface _CPClientTimingFeedback : PBCodable <_CPProcessableFeedback, _CPClientTimingFeedback, NSSecureCoding>
{
    struct {
        unsigned int timestamp:1;
        unsigned int queryId:1;
        unsigned int nanosecondInterval:1;
    } _has;
    unsigned long long _timestamp;
    NSString *_input;
    NSString *_eventName;
    unsigned long long _queryId;
    unsigned long long _nanosecondInterval;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property (readonly, nonatomic) id feedbackJSON;
@property (readonly, nonatomic) BOOL hasEventName;
@property (readonly, nonatomic) BOOL hasInput;
@property (readonly, nonatomic) BOOL hasNanosecondInterval;
@property (readonly, nonatomic) BOOL hasQueryId;
@property (readonly, nonatomic) BOOL hasTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *input; // @synthesize input=_input;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned long long nanosecondInterval; // @synthesize nanosecondInterval=_nanosecondInterval;
@property (nonatomic) unsigned long long queryId; // @synthesize queryId=_queryId;
@property (readonly, nonatomic) BOOL requiresQueryId;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

