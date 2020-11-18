//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CSSearchableItem;

@interface SGDHarvestQueueItem : NSObject
{
    long long _itemId;
    CSSearchableItem *_item;
    unsigned long long _fails;
}

@property (readonly, nonatomic) unsigned long long fails; // @synthesize fails=_fails;
@property (readonly, nonatomic) BOOL highPriority;
@property (readonly) CSSearchableItem *item; // @synthesize item=_item;
@property (readonly, nonatomic) long long itemId; // @synthesize itemId=_itemId;

- (void).cxx_destruct;
- (void)finish;
- (id)initWithItemId:(long long)arg1 item:(id)arg2 fails:(int)arg3;
- (void)markAsFailed;

@end

