//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFSearchResult.h>

#import <SafariShared/WBSCompletionListItem-Protocol.h>

@class NSString;

@interface SFSearchResult (SafariSharedExtras) <WBSCompletionListItem>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned long long engagementDestination;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *lastSearchQuery;
@property (readonly, nonatomic) NSString *parsecDomainIdentifier;
@property (readonly, nonatomic) SFSearchResult *sfSearchResultValue;
@property (readonly) Class superclass;

+ (id)safari_sfSearchResultWithUniqueIdentifier;
@end

