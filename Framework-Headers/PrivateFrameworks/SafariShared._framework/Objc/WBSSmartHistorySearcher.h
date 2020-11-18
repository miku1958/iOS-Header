//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol OS_dispatch_queue;

@interface WBSSmartHistorySearcher : NSObject
{
    NSArray *_topics;
    NSObject<OS_dispatch_queue> *_searchQueue;
}

- (void).cxx_destruct;
- (id)_searchItemsInTopic:(id)arg1 forText:(id)arg2 options:(unsigned long long)arg3;
- (id)_searchTopicsForText:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithTopics:(id)arg1;
- (void)performSearchWithText:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
