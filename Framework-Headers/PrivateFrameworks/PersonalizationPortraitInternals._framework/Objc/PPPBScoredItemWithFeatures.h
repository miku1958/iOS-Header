//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PersonalizationPortraitInternals/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface PPPBScoredItemWithFeatures : PBCodable <NSCopying>
{
    unsigned long long _topicId;
    NSMutableArray *_features;
    NSMutableArray *_feedbackItems;
    NSString *_namedEntity;
    NSString *_namedEntityWithFeedback;
    float _score;
    struct {
        unsigned int topicId:1;
        unsigned int score:1;
    } _has;
}

@property (strong, nonatomic) NSMutableArray *features; // @synthesize features=_features;
@property (strong, nonatomic) NSMutableArray *feedbackItems; // @synthesize feedbackItems=_feedbackItems;
@property (readonly, nonatomic) BOOL hasNamedEntity;
@property (readonly, nonatomic) BOOL hasNamedEntityWithFeedback;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) BOOL hasTopicId;
@property (strong, nonatomic) NSString *namedEntity; // @synthesize namedEntity=_namedEntity;
@property (strong, nonatomic) NSString *namedEntityWithFeedback; // @synthesize namedEntityWithFeedback=_namedEntityWithFeedback;
@property (nonatomic) float score; // @synthesize score=_score;
@property (nonatomic) unsigned long long topicId; // @synthesize topicId=_topicId;

+ (Class)featuresType;
+ (Class)feedbackItemsType;
- (void).cxx_destruct;
- (void)addFeatures:(id)arg1;
- (void)addFeedbackItems:(id)arg1;
- (void)clearFeatures;
- (void)clearFeedbackItems;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)featuresAtIndex:(unsigned long long)arg1;
- (unsigned long long)featuresCount;
- (id)feedbackItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)feedbackItemsCount;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
