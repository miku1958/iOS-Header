//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariSharedUI/NSObject-Protocol.h>

@class NSString, SFSearchResult, WBSQuerySuggestion;

@protocol WBSCompletionListItem <NSObject>

@property (readonly, nonatomic) unsigned long long engagementDestination;
@property (readonly, nonatomic) NSString *lastSearchQuery;
@property (readonly, nonatomic) NSString *parsecDomainIdentifier;
@property (nonatomic) long long parsecQueryID;
@property (readonly, nonatomic) SFSearchResult *sfSearchResultValue;
@property (strong, nonatomic) WBSQuerySuggestion *siriSuggestion;


@optional
@end

