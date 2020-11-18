//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSSet, NSString, PSSearchResults;
@protocol PSSearchOperationDelegate;

@interface PSSearchOperation : NSOperation
{
    BOOL _newQuery;
    NSString *_query;
    NSSet *_rootEntries;
    PSSearchResults *_currentResults;
    id<PSSearchOperationDelegate> _delegate;
}

@property (readonly, copy) PSSearchResults *currentResults; // @synthesize currentResults=_currentResults;
@property (weak) id<PSSearchOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic, getter=isNewQuery) BOOL newQuery; // @synthesize newQuery=_newQuery;
@property (readonly, copy, nonatomic) NSString *query; // @synthesize query=_query;
@property (readonly, copy, nonatomic) NSSet *rootEntries; // @synthesize rootEntries=_rootEntries;

+ (struct __CFStringTokenizer *)_wordBoundaryTokenizer;
- (void).cxx_destruct;
- (void)_didCancel;
- (id)_filterEntriesMatchingQuery:(id)arg1 forQuery:(id)arg2;
- (BOOL)_searchEntries:(id)arg1 forQuery:(id)arg2;
- (BOOL)_systemLanguageHasContinuousScript;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)initWithSearchQuery:(id)arg1 rootEntries:(id)arg2;
- (void)main;

@end
