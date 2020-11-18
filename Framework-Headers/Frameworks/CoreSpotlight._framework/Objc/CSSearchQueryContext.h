//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpotlight/NSCopying-Protocol.h>
#import <CoreSpotlight/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface CSSearchQueryContext : NSObject <NSSecureCoding, NSCopying>
{
    unsigned char _flags;
    int _rankingType;
    NSString *_clientBundleID;
    NSArray *_fetchAttributes;
    NSArray *_protectionClasses;
    NSArray *_bundleIDs;
    NSArray *_rankingQueries;
    NSArray *_preferredLanguages;
    NSString *_keyboardLanguage;
    NSArray *_markedTextArray;
    NSArray *_disableBundles;
    NSString *_userQuery;
    NSString *_filterQuery;
    long long _strongRankingQueryCount;
    long long _dominantRankingQueryCount;
    long long _dominatedRankingQueryCount;
    long long _maxCount;
    long long _completionResultCount;
    long long _queryID;
    NSString *_completionString;
    NSArray *_completionAttributes;
}

@property (nonatomic) BOOL attribute;
@property (strong, nonatomic) NSArray *bundleIDs; // @synthesize bundleIDs=_bundleIDs;
@property (strong, nonatomic) NSString *clientBundleID; // @synthesize clientBundleID=_clientBundleID;
@property (strong, nonatomic) NSArray *completionAttributes; // @synthesize completionAttributes=_completionAttributes;
@property (nonatomic) long long completionResultCount; // @synthesize completionResultCount=_completionResultCount;
@property (strong, nonatomic) NSString *completionString; // @synthesize completionString=_completionString;
@property (nonatomic) BOOL counting;
@property (strong, nonatomic) NSArray *disableBundles; // @synthesize disableBundles=_disableBundles;
@property (nonatomic) long long dominantRankingQueryCount; // @synthesize dominantRankingQueryCount=_dominantRankingQueryCount;
@property (nonatomic) long long dominatedRankingQueryCount; // @synthesize dominatedRankingQueryCount=_dominatedRankingQueryCount;
@property (strong, nonatomic) NSArray *fetchAttributes; // @synthesize fetchAttributes=_fetchAttributes;
@property (strong, nonatomic) NSString *filterQuery; // @synthesize filterQuery=_filterQuery;
@property (nonatomic) unsigned char flags; // @synthesize flags=_flags;
@property (nonatomic) BOOL grouped;
@property (nonatomic) BOOL internal;
@property (strong, nonatomic) NSString *keyboardLanguage; // @synthesize keyboardLanguage=_keyboardLanguage;
@property (nonatomic) BOOL live;
@property (nonatomic) BOOL lowPriority;
@property (strong, nonatomic) NSArray *markedTextArray; // @synthesize markedTextArray=_markedTextArray;
@property (nonatomic) long long maxCount; // @synthesize maxCount=_maxCount;
@property (copy, nonatomic) NSDictionary *options;
@property (strong, nonatomic) NSArray *preferredLanguages; // @synthesize preferredLanguages=_preferredLanguages;
@property (strong, nonatomic) NSArray *protectionClasses; // @synthesize protectionClasses=_protectionClasses;
@property (nonatomic) long long queryID; // @synthesize queryID=_queryID;
@property (strong, nonatomic) NSArray *rankingQueries; // @synthesize rankingQueries=_rankingQueries;
@property (nonatomic) int rankingType; // @synthesize rankingType=_rankingType;
@property (nonatomic) long long strongRankingQueryCount; // @synthesize strongRankingQueryCount=_strongRankingQueryCount;
@property (strong, nonatomic) NSString *userQuery; // @synthesize userQuery=_userQuery;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)xpc_dictionary;

@end

