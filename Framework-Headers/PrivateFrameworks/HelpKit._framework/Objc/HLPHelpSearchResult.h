//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HLPHelpSearchResult : NSObject
{
    double _relevanceScore;
    long long _weight;
    long long _matchCount;
    NSString *_identifier;
}

@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) long long matchCount; // @synthesize matchCount=_matchCount;
@property (nonatomic) double relevanceScore; // @synthesize relevanceScore=_relevanceScore;
@property (nonatomic) long long weight; // @synthesize weight=_weight;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;

@end

