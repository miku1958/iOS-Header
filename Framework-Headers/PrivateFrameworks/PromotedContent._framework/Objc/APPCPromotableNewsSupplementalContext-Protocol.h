//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PromotedContent/APPCSecureCodable-Protocol.h>
#import <PromotedContent/NSCopying-Protocol.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@protocol APPCPromotableNewsSupplementalContext <APPCSecureCodable, NSCopying>

@property (nonatomic, readonly) NSString *advertisementType;
@property (nonatomic, readonly) NSDictionary *anfComponentMetadata;
@property (nonatomic, readonly) NSString *contentEnvironment;
@property (nonatomic, readonly) NSString *creativeType;
@property (nonatomic, readonly) NSString *currentArticleArticleId;
@property (nonatomic, readonly) NSNumber *currentArticleIsSponsored;
@property (nonatomic, readonly) NSDictionary *currentArticlePublicationMetadata;
@property (nonatomic, readonly) NSString *currentArticleRating;
@property (nonatomic, readonly) NSString *currentArticleSourceChannel;
@property (nonatomic, readonly) NSString *currentArticleSourceChannelRating;
@property (nonatomic, readonly) NSNumber *currentArticleSourceContentProviderId;
@property (nonatomic, readonly) NSArray *currentArticleSourceSections;
@property (nonatomic, readonly) NSString *currentIssueId;
@property (nonatomic, readonly) long long currentIssueIsCurrent;
@property (nonatomic, readonly) long long currentIssueIsDraft;
@property (nonatomic, readonly) NSArray *feedMetadataCategories;
@property (nonatomic, readonly) NSString *feedMetadataChannelId;
@property (nonatomic, readonly) NSNumber *feedMetadataContentProviderID;
@property (nonatomic, readonly) NSArray *feedMetadataKeywords;
@property (nonatomic, readonly) NSArray *feedMetadataLanguages;
@property (nonatomic, readonly) NSString *feedMetadataRating;
@property (nonatomic, readonly) NSString *feedMetadataSectionId;
@property (nonatomic, readonly) NSString *feedMetadataTagId;
@property (nonatomic, readonly) NSArray *groupContextAboveCategories;
@property (nonatomic, readonly) NSString *groupContextAboveChannelId;
@property (nonatomic, readonly) NSNumber *groupContextAboveContentProviderId;
@property (nonatomic, readonly) NSString *groupContextAboveId;
@property (nonatomic, readonly) NSArray *groupContextAboveKeywords;
@property (nonatomic, readonly) NSArray *groupContextAboveLanguages;
@property (nonatomic, readonly) NSString *groupContextAboveTagId;
@property (nonatomic, readonly) NSString *groupContextAboveType;
@property (nonatomic, readonly) NSArray *groupContextBelowCategories;
@property (nonatomic, readonly) NSString *groupContextBelowChannelId;
@property (nonatomic, readonly) NSNumber *groupContextBelowContentProviderId;
@property (nonatomic, readonly) NSString *groupContextBelowId;
@property (nonatomic, readonly) NSArray *groupContextBelowKeywords;
@property (nonatomic, readonly) NSArray *groupContextBelowLanguages;
@property (nonatomic, readonly) NSString *groupContextBelowTagId;
@property (nonatomic, readonly) NSString *groupContextBelowType;
@property (nonatomic, readonly) NSArray *groupContextCategories;
@property (nonatomic, readonly) NSNumber *groupContextContentProviderId;
@property (nonatomic, readonly) NSString *groupContextId;
@property (nonatomic, readonly) NSArray *groupContextKeywords;
@property (nonatomic, readonly) NSArray *groupContextLanguages;
@property (nonatomic, readonly) NSString *groupContextType;
@property (nonatomic, readonly) NSNumber *isDraft;
@property (nonatomic, readonly) NSString *nextArticleArticleId;
@property (nonatomic, readonly) NSNumber *nextArticleIsSponsored;
@property (nonatomic, readonly) NSDictionary *nextArticlePublicationMetadata;
@property (nonatomic, readonly) NSString *nextArticleRating;
@property (nonatomic, readonly) NSString *nextArticleSourceChannel;
@property (nonatomic, readonly) NSString *nextArticleSourceChannelRating;
@property (nonatomic, readonly) NSNumber *nextArticleSourceContentProviderId;
@property (nonatomic, readonly) NSArray *nextArticleSourceSections;
@property (nonatomic, readonly) NSNumber *numOfArticlesSeenSinceLastInterstitial;
@property (nonatomic, readonly) NSNumber *onboardStatus;
@property (nonatomic, readonly) NSString *placement;
@property (nonatomic, readonly) NSNumber *playerAspectRatio;
@property (nonatomic, readonly) NSString *referralLocation;
@property (nonatomic, readonly) NSNumber *referralPublisherInventory;
@property (nonatomic, readonly) NSString *subscriptionType;

@end

