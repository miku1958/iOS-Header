//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DocumentManagerUICore/NSObject-Protocol.h>

@class DOCItemQueryCollector, FPItem, NSArray, NSError, NSPredicate;

@protocol DOCItemQueryObserver <NSObject>
- (BOOL)collector:(DOCItemQueryCollector *)arg1 canRemoveItemIDs:(NSArray *)arg2;
- (void)collector:(DOCItemQueryCollector *)arg1 didEncounterError:(NSError *)arg2;
- (void)collector:(DOCItemQueryCollector *)arg1 didGatherItems:(NSArray *)arg2;
- (void)collector:(DOCItemQueryCollector *)arg1 didRemoveItemIDs:(NSArray *)arg2;
- (void)collector:(DOCItemQueryCollector *)arg1 didUpdateItemOrigin:(unsigned long long)arg2;
- (void)collector:(DOCItemQueryCollector *)arg1 didUpdateItems:(NSArray *)arg2;
- (BOOL)collector:(DOCItemQueryCollector *)arg1 itemIsSufficient:(FPItem *)arg2;
- (NSPredicate *)itemPredicateForCollector:(DOCItemQueryCollector *)arg1;
- (unsigned long long)maximumNumberOfItemsForCollector:(DOCItemQueryCollector *)arg1;
@end

