//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPredicate;

@interface PRSRankingItemRelativeFeatureContext : NSObject
{
    unsigned short _relRankFeature;
    unsigned short _absRankFeature;
    NSPredicate *_predicate;
    CDUnknownBlockType _comparator;
}

@property (nonatomic) unsigned short absRankFeature; // @synthesize absRankFeature=_absRankFeature;
@property (copy, nonatomic) CDUnknownBlockType comparator; // @synthesize comparator=_comparator;
@property (strong, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property (nonatomic) unsigned short relRankFeature; // @synthesize relRankFeature=_relRankFeature;

+ (void)_associatedPRSL2FeatureFromRelativeFeature:(unsigned long long)arg1 absRankFeatureOut:(unsigned short *)arg2 relRankFeatureOut:(unsigned short *)arg3;
+ (id)_predicateForRelativeFeature:(unsigned long long)arg1;
+ (id)_relativeContextsForFeatures:(id)arg1;
+ (CDUnknownBlockType)_resultComparatorForRelativeFeature:(unsigned long long)arg1;
+ (id)relativeContextsForBundle:(id)arg1;
+ (id)relativeContextsForResultSet;
- (void).cxx_destruct;
- (id)initWithFeature:(unsigned long long)arg1;

@end

