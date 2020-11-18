//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Search/SFSearchResult_Compatibility.h>

@class NSArray, NSDate, NSString;

@interface SPCoreSpotlightResult : SFSearchResult_Compatibility
{
    BOOL _completed;
    NSString *_relatedUniqueIdentifier;
    unsigned long long _buddyScore;
    NSString *_itemIdentifier;
    NSDate *_lastUsedDate;
    NSDate *_interestingDate;
    NSString *_domainIdentifier;
    long long _incomingCount;
    long long _outgoingCount;
    NSString *_relatedBundleID;
    double _contactCDRank;
}

@property unsigned long long buddyScore; // @synthesize buddyScore=_buddyScore;
@property (strong) NSArray *compatibilityDescriptions;
@property BOOL completed; // @synthesize completed=_completed;
@property double contactCDRank; // @synthesize contactCDRank=_contactCDRank;
@property (strong) NSString *domainIdentifier; // @synthesize domainIdentifier=_domainIdentifier;
@property long long incomingCount; // @synthesize incomingCount=_incomingCount;
@property (strong) NSDate *interestingDate; // @synthesize interestingDate=_interestingDate;
@property (strong) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property (strong) NSDate *lastUsedDate; // @synthesize lastUsedDate=_lastUsedDate;
@property long long outgoingCount; // @synthesize outgoingCount=_outgoingCount;
@property (strong) NSString *relatedBundleID; // @synthesize relatedBundleID=_relatedBundleID;
@property (strong) NSString *relatedUniqueIdentifier; // @synthesize relatedUniqueIdentifier=_relatedUniqueIdentifier;

- (void).cxx_destruct;
- (Class)classForCoder;
- (BOOL)hasDetail;
- (id)init;

@end

