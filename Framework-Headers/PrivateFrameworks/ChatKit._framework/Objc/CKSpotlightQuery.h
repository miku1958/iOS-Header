//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ChatKit/MDSearchQueryDelegate-Protocol.h>

@class MDSearchQuery, NSArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_group;

@interface CKSpotlightQuery : NSObject <MDSearchQueryDelegate>
{
    MDSearchQuery *_currentQuery;
    unsigned long long _resultIndex;
    NSArray *_searchResults;
    NSMutableDictionary *_chatGUIDToLatestSearchResult;
    NSObject<OS_dispatch_group> *_searchResultLoadingGroup;
    CDUnknownBlockType _completion;
    BOOL _processing;
    BOOL _cancelled;
}

@property (copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_callCompletionIfNecessary;
- (void)_cleanup;
- (void)_processSearchResults;
- (void)cancel;
- (void)dealloc;
- (id)initWithSearchText:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)searchQuery:(id)arg1 didFailWithError:(id)arg2;
- (void)searchQuery:(id)arg1 didReturnItems:(id)arg2;
- (void)searchQuery:(id)arg1 statusChanged:(unsigned long long)arg2;

@end

