//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC14PagesQuicklook17TPPageLayoutCache : NSObject
{
    MISSING_TYPE *pageLayoutCache;
    MISSING_TYPE *pendingUpdates;
    MISSING_TYPE *accessQueue;
}

- (void).cxx_destruct;
- (void)coalesce;
- (void)enqueueInsertion:(id)arg1;
- (void)enqueueRemoval:(id)arg1;
- (id)init;
- (id)pageLayouts;
- (id)pageLayoutsFromStartIndex:(unsigned long long)arg1;
- (id)pageLayoutsFromStartIndex:(unsigned long long)arg1 toEndIndex:(unsigned long long)arg2;
- (id)pageLayoutsInRange:(struct _NSRange)arg1;
- (id)pageLayoutsUpToPageIndex:(unsigned long long)arg1;
- (id)pageLayoutsWithPageIndex:(unsigned long long)arg1;

@end

