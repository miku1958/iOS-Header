//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, _CPSearchResultForFeedback;

@protocol _CPResultSectionForFeedback <NSObject>

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSData *fallbackResultSection;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) BOOL isInitiallyHidden;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int knownBundleIdentifier;
@property (nonatomic) double rankingScore;
@property (copy, nonatomic) NSArray *results;
@property (readonly, nonatomic) unsigned long long whichBundleid;

- (void)addResults:(_CPSearchResultForFeedback *)arg1;
- (void)clearResults;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_CPSearchResultForFeedback *)resultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)resultsCount;
@end
