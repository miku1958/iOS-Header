//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Search/SFSearchResult_Compatibility.h>

#import <Search/NSCopying-Protocol.h>

@class NSArray, NSDate, NSString;

@interface SPCoreSpotlightResult : SFSearchResult_Compatibility <NSCopying>
{
    BOOL _completed;
    BOOL _hasAssociatedUserActivity;
    NSString *_relatedUniqueIdentifier;
    NSString *_itemIdentifier;
    NSDate *_interestingDate;
    NSString *_domainIdentifier;
    long long _incomingCount;
    long long _outgoingCount;
    NSString *_relatedBundleID;
    NSString *_mailConversationIdentifier;
    NSArray *_launchDates;
    NSDate *_contentCreationDate;
    NSString *_bundleID;
    struct ranking_index_score_t _buddyScore;
}

@property struct ranking_index_score_t buddyScore; // @synthesize buddyScore=_buddyScore;
@property (strong, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property (strong) NSArray *compatibilityDescriptions;
@property BOOL completed; // @synthesize completed=_completed;
@property (strong, nonatomic) NSDate *contentCreationDate; // @synthesize contentCreationDate=_contentCreationDate;
@property (strong) NSString *domainIdentifier; // @synthesize domainIdentifier=_domainIdentifier;
@property (nonatomic) BOOL hasAssociatedUserActivity; // @synthesize hasAssociatedUserActivity=_hasAssociatedUserActivity;
@property long long incomingCount; // @synthesize incomingCount=_incomingCount;
@property (strong) NSDate *interestingDate; // @synthesize interestingDate=_interestingDate;
@property (strong) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property (strong, nonatomic) NSArray *launchDates; // @synthesize launchDates=_launchDates;
@property (strong) NSString *mailConversationIdentifier; // @synthesize mailConversationIdentifier=_mailConversationIdentifier;
@property long long outgoingCount; // @synthesize outgoingCount=_outgoingCount;
@property (strong) NSString *relatedBundleID; // @synthesize relatedBundleID=_relatedBundleID;
@property (strong) NSString *relatedUniqueIdentifier; // @synthesize relatedUniqueIdentifier=_relatedUniqueIdentifier;
@property int title_maxlines;

- (void).cxx_destruct;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (BOOL)hasDetail;
- (id)init;

@end

