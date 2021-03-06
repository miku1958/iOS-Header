//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, _CPSearchResultForFeedback;

@protocol _CPVisibleResultsFeedback <NSObject>

@property (strong, nonatomic) _CPSearchResultForFeedback *goTakeoverResult;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *results;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int triggerEvent;

- (void)addResults:(_CPSearchResultForFeedback *)arg1;
- (void)clearResults;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_CPSearchResultForFeedback *)resultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)resultsCount;
@end

