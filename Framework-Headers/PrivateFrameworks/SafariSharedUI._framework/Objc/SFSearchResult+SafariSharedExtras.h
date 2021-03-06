//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFSearchResult.h>

#import <SafariSharedUI/WBSCompletionListItem-Protocol.h>

@class NSString, WBSQuerySuggestion;

@interface SFSearchResult (SafariSharedExtras) <WBSCompletionListItem>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned long long engagementDestination;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *lastSearchQuery;
@property (readonly, nonatomic) NSString *parsecDomainIdentifier;
@property (nonatomic) long long parsecQueryID;
@property (readonly, nonatomic) NSString *safari_loggingDescription;
@property (readonly, nonatomic) SFSearchResult *sfSearchResultValue;
@property (strong, nonatomic) WBSQuerySuggestion *siriSuggestion;
@property (readonly) Class superclass;

+ (id)safari_sfSearchResultWithUniqueIdentifier;
- (id)_firstCardSectionOfClass:(Class)arg1 ofCard:(id)arg2 outIndex:(unsigned long long *)arg3;
- (id)safari_firstCardSectionOfClass:(Class)arg1;
- (id)safari_firstInlineCardSectionOfClass:(Class)arg1;
- (unsigned long long)safari_indexOfFirstInlineCardSectionOfClass:(Class)arg1;
@end

