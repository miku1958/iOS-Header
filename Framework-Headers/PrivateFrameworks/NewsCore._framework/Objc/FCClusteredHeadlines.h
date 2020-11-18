//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface FCClusteredHeadlines : NSObject
{
    NSDictionary *_headlinesByTopicID;
    NSArray *_orphanedHeadlines;
    NSArray *_discardedOrphanedHeadlines;
    NSDictionary *_d_headlinesByNonWhitelistedTopicID;
}

@property (readonly, copy, nonatomic) NSArray *d_allHeadlines;
@property (copy, nonatomic) NSDictionary *d_headlinesByNonWhitelistedTopicID; // @synthesize d_headlinesByNonWhitelistedTopicID=_d_headlinesByNonWhitelistedTopicID;
@property (copy, nonatomic) NSArray *discardedOrphanedHeadlines; // @synthesize discardedOrphanedHeadlines=_discardedOrphanedHeadlines;
@property (copy, nonatomic) NSDictionary *headlinesByTopicID; // @synthesize headlinesByTopicID=_headlinesByTopicID;
@property (copy, nonatomic) NSArray *orphanedHeadlines; // @synthesize orphanedHeadlines=_orphanedHeadlines;

- (void).cxx_destruct;
- (id)d_JSONRepresentationWithTagController:(id)arg1 subscribedTagIDs:(id)arg2;
- (void)d_sanityCheckAgainstInputHeadlines:(id)arg1;
- (void)filterClustersToTopicIDs:(id)arg1;

@end

