//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;
@protocol HFItemUpdating;

@interface HFItemModule : NSObject
{
    id<HFItemUpdating> _itemUpdater;
}

@property (readonly, nonatomic) NSSet *allItems;
@property (readonly, nonatomic) NSSet *itemProviders;
@property (readonly, weak, nonatomic) id<HFItemUpdating> itemUpdater; // @synthesize itemUpdater=_itemUpdater;

- (void).cxx_destruct;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (BOOL)containsItem:(id)arg1;
- (id)init;
- (id)initWithItemUpdater:(id)arg1;
- (void)registerForExternalUpdates;
- (void)unregisterForExternalUpdates;

@end

