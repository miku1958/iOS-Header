//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSURLCompletionMatch.h>

@protocol WBSURLCompletionMatchData;

@interface WBSBookmarkAndHistoryCompletionMatch : WBSURLCompletionMatch
{
    struct RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch> _match;
}

@property (readonly, nonatomic) id<WBSURLCompletionMatchData> data;
@property (readonly, nonatomic) float weight;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithBookmarkAndHistoryCompletionMatch:(PassRefPtr_8dece646)arg1;
- (id)originalURLString;
- (id)parsecDomainIdentifier;
- (id)title;
- (id)userVisibleURLString;

@end
