//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/NSCopying-Protocol.h>

@class NSDate, NSSet, NSString;

@interface PPPortraitNamedEntityQuery : NSObject <NSCopying>
{
    BOOL _overrideDecayRate;
    BOOL _matchCategory;
    unsigned long long _limit;
    NSDate *_fromDate;
    NSDate *_toDate;
    NSDate *_scoringDate;
    NSSet *_matchingSourceBundleIds;
    NSSet *_excludingSourceBundleIds;
    unsigned long long _deviceFilter;
    double _decayRate;
    NSString *_matchingName;
    unsigned long long _matchingCategory;
}

@property (nonatomic) double decayRate; // @synthesize decayRate=_decayRate;
@property (nonatomic) unsigned long long deviceFilter; // @synthesize deviceFilter=_deviceFilter;
@property (strong, nonatomic) NSSet *excludingSourceBundleIds; // @synthesize excludingSourceBundleIds=_excludingSourceBundleIds;
@property (strong, nonatomic) NSDate *fromDate; // @synthesize fromDate=_fromDate;
@property (nonatomic) unsigned long long limit; // @synthesize limit=_limit;
@property (nonatomic) BOOL matchCategory; // @synthesize matchCategory=_matchCategory;
@property (nonatomic) unsigned long long matchingCategory; // @synthesize matchingCategory=_matchingCategory;
@property (copy, nonatomic) NSString *matchingName; // @synthesize matchingName=_matchingName;
@property (strong, nonatomic) NSSet *matchingSourceBundleIds; // @synthesize matchingSourceBundleIds=_matchingSourceBundleIds;
@property (nonatomic) BOOL overrideDecayRate; // @synthesize overrideDecayRate=_overrideDecayRate;
@property (strong, nonatomic) NSDate *scoringDate; // @synthesize scoringDate=_scoringDate;
@property (strong, nonatomic) NSDate *toDate; // @synthesize toDate=_toDate;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToNamedEntityQuery:(id)arg1;

@end
