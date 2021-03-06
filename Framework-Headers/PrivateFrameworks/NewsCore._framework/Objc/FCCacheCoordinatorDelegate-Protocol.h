//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/NSObject-Protocol.h>

@class FCCacheCoordinator, NSSet;

@protocol FCCacheCoordinatorDelegate <NSObject>
- (void)cacheCoordinator:(FCCacheCoordinator *)arg1 flushKeysWithWriteLock:(NSSet *)arg2;
- (unsigned long long)cacheCoordinatorCurrentSizeWithReadLock:(FCCacheCoordinator *)arg1;

@optional
- (unsigned long long)cacheCoordinatorPreemptiveFlushSize:(FCCacheCoordinator *)arg1;
@end

