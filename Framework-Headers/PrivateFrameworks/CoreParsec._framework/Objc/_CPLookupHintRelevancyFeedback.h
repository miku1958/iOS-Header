//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPLookupHintRelevancyFeedback-Protocol.h>
#import <CoreParsec/_CPProcessableFeedback-Protocol.h>

@class NSData, NSDictionary, NSString, _CPRange;

@interface _CPLookupHintRelevancyFeedback : PBCodable <_CPProcessableFeedback, _CPLookupHintRelevancyFeedback, NSSecureCoding>
{
    struct {
        unsigned int timestamp:1;
        unsigned int discarded:1;
        unsigned int grade:1;
    } _has;
    BOOL _discarded;
    int _grade;
    unsigned long long _timestamp;
    _CPRange *_hintRange;
    NSString *_domain;
    NSString *_context;
}

@property (copy, nonatomic) NSString *context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (nonatomic) BOOL discarded; // @synthesize discarded=_discarded;
@property (copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property (readonly, nonatomic) id feedbackJSON;
@property (nonatomic) int grade; // @synthesize grade=_grade;
@property (readonly, nonatomic) BOOL hasContext;
@property (readonly, nonatomic) BOOL hasDiscarded;
@property (readonly, nonatomic) BOOL hasDomain;
@property (readonly, nonatomic) BOOL hasGrade;
@property (readonly, nonatomic) BOOL hasHintRange;
@property (readonly, nonatomic) BOOL hasTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _CPRange *hintRange; // @synthesize hintRange=_hintRange;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) BOOL requiresQueryId;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

