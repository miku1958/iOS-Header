//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface _UIFocusGroupHistory : NSObject
{
    NSMapTable *_groupToItemMap;
}

- (void).cxx_destruct;
- (id)init;
- (id)lastFocusedItemForGroup:(id)arg1;
- (void)setLastFocusedItem:(id)arg1 forGroup:(id)arg2;

@end
