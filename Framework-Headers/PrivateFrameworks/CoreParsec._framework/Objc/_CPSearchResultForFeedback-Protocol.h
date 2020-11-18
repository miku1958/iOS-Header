//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, _CPActionItemForFeedback, _CPPunchoutForFeedback, _CPStruct;

@protocol _CPSearchResultForFeedback <NSObject>

@property (strong, nonatomic) _CPActionItemForFeedback *action;
@property (copy, nonatomic) NSString *applicationBundleIdentifier;
@property (copy, nonatomic) NSString *completedQuery;
@property (copy, nonatomic) NSString *correctedQuery;
@property (copy, nonatomic) NSString *fbr;
@property (readonly, nonatomic) BOOL hasAction;
@property (readonly, nonatomic) BOOL hasApplicationBundleIdentifier;
@property (readonly, nonatomic) BOOL hasCompletedQuery;
@property (readonly, nonatomic) BOOL hasCorrectedQuery;
@property (readonly, nonatomic) BOOL hasFbr;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasIntendedQuery;
@property (readonly, nonatomic) BOOL hasIsLocalApplicationResult;
@property (readonly, nonatomic) BOOL hasIsStaticCorrection;
@property (readonly, nonatomic) BOOL hasLocalFeatures;
@property (readonly, nonatomic) BOOL hasPubliclyIndexable;
@property (readonly, nonatomic) BOOL hasPunchout;
@property (readonly, nonatomic) BOOL hasQueryId;
@property (readonly, nonatomic) BOOL hasRankingScore;
@property (readonly, nonatomic) BOOL hasResultBundleId;
@property (readonly, nonatomic) BOOL hasResultType;
@property (readonly, nonatomic) BOOL hasSectionBundleIdentifier;
@property (readonly, nonatomic) BOOL hasSrf;
@property (readonly, nonatomic) BOOL hasTopHit;
@property (readonly, nonatomic) BOOL hasType;
@property (readonly, nonatomic) BOOL hasUserInput;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *intendedQuery;
@property (nonatomic) BOOL isLocalApplicationResult;
@property (nonatomic) BOOL isStaticCorrection;
@property (readonly, nonatomic) NSData *jsonData;
@property (strong, nonatomic) _CPStruct *localFeatures;
@property (nonatomic) BOOL publiclyIndexable;
@property (strong, nonatomic) _CPPunchoutForFeedback *punchout;
@property (nonatomic) unsigned long long queryId;
@property (nonatomic) double rankingScore;
@property (copy, nonatomic) NSString *resultBundleId;
@property (copy, nonatomic) NSString *resultType;
@property (copy, nonatomic) NSString *sectionBundleIdentifier;
@property (copy, nonatomic) NSString *srf;
@property (nonatomic) int topHit;
@property (nonatomic) int type;
@property (copy, nonatomic) NSString *userInput;

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

