//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreFollowUp/NSObject-Protocol.h>

@class FLFollowUpItem, NSArray;

@protocol FLViewModel <NSObject>
- (NSArray *)allPendingItems;
- (void)setItemChangeHandler:(void (^)(void))arg1;

@optional
- (NSArray *)groups;
- (void)refreshItems:(NSArray *)arg1 withCompletionHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)refreshItemsForItem:(FLFollowUpItem *)arg1 withCompletionHandler:(void (^)(BOOL, NSError *))arg2;
@end

