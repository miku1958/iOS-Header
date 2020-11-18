//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol PGPersonResult;

@interface PGSharingSuggestionResult : NSObject
{
    id<PGPersonResult> _person;
    double _weight;
    double _sourceWeight;
    NSArray *_sourceDescriptions;
}

@property (readonly, nonatomic) id<PGPersonResult> person; // @synthesize person=_person;
@property (readonly, nonatomic) NSArray *sourceDescriptions; // @synthesize sourceDescriptions=_sourceDescriptions;
@property (readonly, nonatomic) double sourceWeight; // @synthesize sourceWeight=_sourceWeight;
@property (readonly, nonatomic) double weight; // @synthesize weight=_weight;

+ (id)suggestionResultWithPerson:(id)arg1 weight:(double)arg2 sourceWeight:(double)arg3 sourceDescription:(id)arg4;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPerson:(id)arg1 weight:(double)arg2 sourceWeight:(double)arg3 sourceDescription:(id)arg4;
- (void)mergeWithSuggestionResult:(id)arg1;

@end

