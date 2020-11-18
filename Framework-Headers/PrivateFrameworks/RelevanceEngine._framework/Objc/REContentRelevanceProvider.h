//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/RERelevanceProvider.h>

@class NSArray;

@interface REContentRelevanceProvider : RERelevanceProvider
{
    NSArray *_keywords;
}

@property (readonly, nonatomic) NSArray *keywords; // @synthesize keywords=_keywords;

+ (id)relevanceSimulatorID;
- (void).cxx_destruct;
- (unsigned long long)_hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryEncoding;
- (id)init;
- (id)initWithContent:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithKeywords:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
