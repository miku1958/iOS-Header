//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, _CPSearchResultForFeedback;

@protocol _CPResultEngagementFeedback <NSObject>

@property (nonatomic) BOOL actionEngaged;
@property (nonatomic) int actionTarget;
@property (nonatomic) int destination;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) BOOL matchesUnengagedSuggestion;
@property (strong, nonatomic) _CPSearchResultForFeedback *result;
@property (nonatomic) unsigned long long timestamp;
@property (copy, nonatomic) NSString *titleText;
@property (nonatomic) int triggerEvent;

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

