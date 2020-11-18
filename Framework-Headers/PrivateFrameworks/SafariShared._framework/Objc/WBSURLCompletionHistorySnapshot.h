//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSURLCompletionDataSource-Protocol.h>

@class NSString, WBSURLCompletionDatabase;
@protocol OS_dispatch_queue;

@interface WBSURLCompletionHistorySnapshot : NSObject <WBSURLCompletionDataSource>
{
    NSObject<OS_dispatch_queue> *_completionDatabaseQueue;
    WBSURLCompletionDatabase *_completionDatabase;
    unique_ptr_91c700ae _items;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_matchSnapshotForCompletionMatch:(id)arg1;
- (void)enumerateMatchDataForTypedStringHint:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)fakeBookmarkMatchDataWithURLString:(id)arg1 title:(id)arg2;
- (void)getBestMatchesForTypedString:(id)arg1 limit:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)init;
- (id)initWithItems:(unique_ptr_91c700ae)arg1;

@end

