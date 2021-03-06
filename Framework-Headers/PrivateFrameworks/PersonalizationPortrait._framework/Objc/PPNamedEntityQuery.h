//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/NSCopying-Protocol.h>
#import <PersonalizationPortrait/NSSecureCoding-Protocol.h>

@class NSDate, NSSet, NSString;

@interface PPNamedEntityQuery : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _matchCategory;
    BOOL _excludeWithoutSentiment;
    BOOL _orderByName;
    BOOL _removeNearDuplicates;
    BOOL _isForRecordMonitoring;
    unsigned long long _limit;
    NSDate *_fromDate;
    NSDate *_toDate;
    NSDate *_scoringDate;
    NSSet *_matchingSourceBundleIds;
    NSSet *_excludingSourceBundleIds;
    NSSet *_matchingSourceGroupIds;
    NSSet *_matchingSourceDocumentIds;
    unsigned long long _deviceFilter;
    double _decayRate;
    NSString *_matchingName;
    NSSet *_matchingCategories;
    NSSet *_excludingAlgorithms;
    NSString *_matchingContactHandle;
    NSString *_matchingEntityTrie;
    unsigned long long _locationConsumer;
}

@property (nonatomic) double decayRate; // @synthesize decayRate=_decayRate;
@property (nonatomic) unsigned long long deviceFilter; // @synthesize deviceFilter=_deviceFilter;
@property (nonatomic) BOOL excludeWithoutSentiment; // @synthesize excludeWithoutSentiment=_excludeWithoutSentiment;
@property (strong, nonatomic) NSSet *excludingAlgorithms; // @synthesize excludingAlgorithms=_excludingAlgorithms;
@property (strong, nonatomic) NSSet *excludingSourceBundleIds; // @synthesize excludingSourceBundleIds=_excludingSourceBundleIds;
@property (strong, nonatomic) NSDate *fromDate; // @synthesize fromDate=_fromDate;
@property (nonatomic) BOOL isForRecordMonitoring; // @synthesize isForRecordMonitoring=_isForRecordMonitoring;
@property (nonatomic) unsigned long long limit; // @synthesize limit=_limit;
@property (nonatomic) unsigned long long locationConsumer; // @synthesize locationConsumer=_locationConsumer;
@property (nonatomic) BOOL matchCategory; // @synthesize matchCategory=_matchCategory;
@property (strong, nonatomic) NSSet *matchingCategories; // @synthesize matchingCategories=_matchingCategories;
@property (strong, nonatomic) NSString *matchingContactHandle; // @synthesize matchingContactHandle=_matchingContactHandle;
@property (strong, nonatomic) NSString *matchingEntityTrie; // @synthesize matchingEntityTrie=_matchingEntityTrie;
@property (copy, nonatomic) NSString *matchingName; // @synthesize matchingName=_matchingName;
@property (strong, nonatomic) NSSet *matchingSourceBundleIds; // @synthesize matchingSourceBundleIds=_matchingSourceBundleIds;
@property (strong, nonatomic) NSSet *matchingSourceDocumentIds; // @synthesize matchingSourceDocumentIds=_matchingSourceDocumentIds;
@property (strong, nonatomic) NSSet *matchingSourceGroupIds; // @synthesize matchingSourceGroupIds=_matchingSourceGroupIds;
@property (nonatomic) BOOL orderByName; // @synthesize orderByName=_orderByName;
@property (nonatomic) BOOL overrideDecayRate;
@property (nonatomic) BOOL removeNearDuplicates; // @synthesize removeNearDuplicates=_removeNearDuplicates;
@property (strong, nonatomic) NSDate *scoringDate; // @synthesize scoringDate=_scoringDate;
@property (strong, nonatomic) NSDate *toDate; // @synthesize toDate=_toDate;

+ (id)_excludingAlgorithmsDescription:(id)arg1;
+ (id)_matchingCategoriesDescription:(id)arg1;
+ (id)locationQueryWithLimit:(unsigned long long)arg1 fromDate:(id)arg2 consumerType:(unsigned long long)arg3;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)customizedDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToNamedEntityQuery:(id)arg1;

@end

