//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SASBulletinCacheNode;

@interface SASBulletinCache : NSObject
{
    unsigned long long _count;
    SASBulletinCacheNode *_oldestNode;
    SASBulletinCacheNode *_newestNode;
}

- (void).cxx_destruct;
- (void)_deleteNode:(id)arg1;
- (id)_findNodeForBulletinID:(id)arg1;
- (BOOL)_isFeedRelevant:(unsigned long long)arg1;
- (void)_purgeOldestNodes;
- (id)allBulletins;
- (id)cachedBulletinForID:(id)arg1;
- (id)init;
- (void)insertBulletin:(id)arg1 fromFeed:(unsigned long long)arg2;
- (BOOL)removeBulletinForID:(id)arg1;

@end

