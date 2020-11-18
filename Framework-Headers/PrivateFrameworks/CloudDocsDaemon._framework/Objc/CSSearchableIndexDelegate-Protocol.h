//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/NSObject-Protocol.h>

@class CSSearchableIndex, NSArray;

@protocol CSSearchableIndexDelegate <NSObject>
- (void)searchableIndex:(CSSearchableIndex *)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(void (^)(void))arg2;
- (void)searchableIndex:(CSSearchableIndex *)arg1 reindexSearchableItemsWithIdentifiers:(NSArray *)arg2 acknowledgementHandler:(void (^)(void))arg3;

@optional
- (void)searchableIndexDidFinishThrottle:(CSSearchableIndex *)arg1;
- (void)searchableIndexDidThrottle:(CSSearchableIndex *)arg1;
@end

