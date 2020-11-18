//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CoreRecents/NSSecureCoding-Protocol.h>

@class NSArray, NSPredicate;

@interface CRSearchQuery : NSObject <NSSecureCoding>
{
    NSPredicate *_predicate;
    NSArray *_domains;
    unsigned long long _implicitGroupThreshold;
    unsigned long long _options;
    CDUnknownBlockType _weightDecayer;
    CDUnknownBlockType _comparator;
}

@property (copy, nonatomic) CDUnknownBlockType comparator; // @synthesize comparator=_comparator;
@property (copy, nonatomic) NSArray *domains; // @synthesize domains=_domains;
@property (nonatomic) unsigned long long implicitGroupThreshold; // @synthesize implicitGroupThreshold=_implicitGroupThreshold;
@property (nonatomic) unsigned long long options; // @synthesize options=_options;
@property (strong, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property (copy, nonatomic) CDUnknownBlockType weightDecayer; // @synthesize weightDecayer=_weightDecayer;

+ (CDUnknownBlockType)frecencyComparator;
+ (CDUnknownBlockType)frecencyComparatorForSearch:(id)arg1 preferredKinds:(id)arg2 sendingAddress:(id)arg3 queryOptions:(unsigned long long)arg4;
+ (CDUnknownBlockType)rankedFrecencyComparatorWithPreferredSources:(id)arg1;
+ (id)searchQueryForSearchTerm:(id)arg1 preferredKinds:(id)arg2 sendingAddress:(id)arg3 recentsDomain:(id)arg4;
+ (BOOL)supportsSecureCoding;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

