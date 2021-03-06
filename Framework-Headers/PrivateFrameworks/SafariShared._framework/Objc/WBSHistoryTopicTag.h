//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSHistoryTag.h>

@class NSArray, NSMutableOrderedSet;

@interface WBSHistoryTopicTag : WBSHistoryTag
{
    NSMutableOrderedSet *_taggedItems;
}

@property (readonly, copy, nonatomic) NSArray *historyItems;

+ (void)initialize;
- (void).cxx_destruct;
- (void)_historyItemsWereRemoved:(id)arg1;
- (BOOL)containsHistoryItem:(id)arg1;
- (void)dealloc;
- (void)groupHistoryItemsBySessionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithTag:(id)arg1 historyItems:(id)arg2;
- (id)initWithTitle:(id)arg1 identifier:(id)arg2 databaseID:(long long)arg3 modificationTimestamp:(double)arg4 level:(long long)arg5;
- (void)removeHistoryItems:(id)arg1;
- (void)tagHistoryItem:(id)arg1;

@end

