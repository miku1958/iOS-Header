//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/NSCopying-Protocol.h>

@class NSDictionary, NSMutableDictionary, PGGraphMomentNode;

@interface PGGraphMatchingResult : NSObject <NSCopying>
{
    PGGraphMomentNode *_event;
    NSDictionary *_keywords;
    double _score;
    NSMutableDictionary *_context;
}

@property (readonly, nonatomic) NSMutableDictionary *context; // @synthesize context=_context;
@property (readonly, nonatomic) PGGraphMomentNode *event; // @synthesize event=_event;
@property (readonly, nonatomic) NSDictionary *keywords; // @synthesize keywords=_keywords;
@property (nonatomic) double score; // @synthesize score=_score;

- (void).cxx_destruct;
- (id)_contextItemsSortedByScoreAscending:(BOOL)arg1;
- (id)_highestScoredContextItemWithPreferredRelatedType:(unsigned long long)arg1;
- (void)addKeywords:(id)arg1 forRelatedType:(unsigned long long)arg2;
- (void)clearKeywordsForRelatedType:(unsigned long long)arg1;
- (id)contextItemForRelatedType:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (id)description;
- (void)enumerateContextItems:(CDUnknownBlockType)arg1;
- (unsigned long long)hash;
- (id)initWithEvent:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToResult:(id)arg1;
- (id)keywordsForRelatedType:(unsigned long long)arg1;
- (id)localEndDate;
- (id)localStartDate;
- (void)setContextItem:(id)arg1 forRelatedType:(unsigned long long)arg2;
- (id)sortedCriteria;

@end

