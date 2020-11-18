//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSCompletionListItem-Protocol.h>

@class NSString, SFSearchResult, WBSQuerySuggestion;

@interface WBSURLCompletionMatch : NSObject <WBSCompletionListItem>
{
    long long _matchLocation;
    NSString *_userInput;
    SFSearchResult *_sfSearchResultValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned long long engagementDestination;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *lastSearchQuery;
@property (readonly, nonatomic) long long matchLocation; // @synthesize matchLocation=_matchLocation;
@property (readonly, nonatomic) BOOL matchLocationIsInURL;
@property (readonly, nonatomic) NSString *parsecDomainIdentifier;
@property (readonly, nonatomic) SFSearchResult *sfSearchResultValue;
@property (strong, nonatomic) WBSQuerySuggestion *siriSuggestion;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTopHit) BOOL topHit;

+ (long long)matchLocationForString:(id)arg1 inTitle:(id)arg2;
+ (long long)matchLocationForString:(id)arg1 inURLString:(id)arg2;
- (void).cxx_destruct;
- (id)initWithMatchLocation:(long long)arg1 userInput:(id)arg2;
- (id)matchingStringWithUserTypedPrefix:(id)arg1;
- (id)originalURLString;
- (id)title;
- (id)userVisibleURLString;

@end

