//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPProcessableFeedback-Protocol.h>
#import <CoreParsec/_CPSectionRankingFeedback-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, _CPResultSectionForFeedback;

@interface _CPSectionRankingFeedback : PBCodable <_CPProcessableFeedback, _CPSectionRankingFeedback, NSSecureCoding>
{
    struct {
        unsigned int timestamp:1;
        unsigned int localSectionPosition:1;
        unsigned int personalizationScore:1;
    } _has;
    unsigned int _localSectionPosition;
    unsigned long long _timestamp;
    NSArray *_results;
    _CPResultSectionForFeedback *_section;
    double _personalizationScore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) id feedbackJSON;
@property (readonly, nonatomic) BOOL hasLocalSectionPosition;
@property (readonly, nonatomic) BOOL hasPersonalizationScore;
@property (readonly, nonatomic) BOOL hasSection;
@property (readonly, nonatomic) BOOL hasTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int localSectionPosition; // @synthesize localSectionPosition=_localSectionPosition;
@property (nonatomic) double personalizationScore; // @synthesize personalizationScore=_personalizationScore;
@property (readonly, nonatomic) BOOL requiresQueryId;
@property (copy, nonatomic) NSArray *results; // @synthesize results=_results;
@property (strong, nonatomic) _CPResultSectionForFeedback *section; // @synthesize section=_section;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (void)addResults:(id)arg1;
- (void)clearResults;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)resultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)resultsCount;
- (void)writeTo:(id)arg1;

@end

