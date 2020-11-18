//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPProcessableFeedback-Protocol.h>
#import <CoreParsec/_CPRankingFeedback-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@interface _CPRankingFeedback : PBCodable <_CPProcessableFeedback, _CPRankingFeedback, NSSecureCoding>
{
    struct {
        unsigned int timestamp:1;
        unsigned int blendingDuration:1;
    } _has;
    unsigned long long _timestamp;
    double _blendingDuration;
    NSArray *_sections;
}

@property (nonatomic) double blendingDuration; // @synthesize blendingDuration=_blendingDuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) id feedbackJSON;
@property (readonly, nonatomic) BOOL hasBlendingDuration;
@property (readonly, nonatomic) BOOL hasTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) BOOL requiresQueryId;
@property (copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (void)addSections:(id)arg1;
- (void)clearSections;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)sectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)sectionsCount;
- (void)writeTo:(id)arg1;

@end

