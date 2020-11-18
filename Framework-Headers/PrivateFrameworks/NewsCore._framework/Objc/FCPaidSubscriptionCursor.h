//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCFeedGroupEmittingCursor.h>

@class NSMutableDictionary, NSMutableSet;

@interface FCPaidSubscriptionCursor : FCFeedGroupEmittingCursor
{
    NSMutableSet *_processedChannelIDs;
    NSMutableDictionary *_supplementalArticleIDs;
    NSMutableDictionary *_expiredChannelIDs;
}

@property (strong, nonatomic) NSMutableDictionary *expiredChannelIDs; // @synthesize expiredChannelIDs=_expiredChannelIDs;
@property (strong, nonatomic) NSMutableSet *processedChannelIDs; // @synthesize processedChannelIDs=_processedChannelIDs;
@property (strong, nonatomic) NSMutableDictionary *supplementalArticleIDs; // @synthesize supplementalArticleIDs=_supplementalArticleIDs;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (unsigned long long)countForFeedItem:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)expiredGroupEmitCountForChannelWithIdentifier:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)purgeExpiredChannelIdentifiersNotInArray:(id)arg1;
- (void)purgeSupplementalArticleIDsNotInArray:(id)arg1 forChannel:(id)arg2;
- (void)trackSupplementalFeedItem:(id)arg1;

@end
