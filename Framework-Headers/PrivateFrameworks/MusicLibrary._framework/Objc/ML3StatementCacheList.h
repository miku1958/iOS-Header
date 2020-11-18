//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ML3StatementCacheNode;

__attribute__((visibility("hidden")))
@interface ML3StatementCacheList : NSObject
{
    ML3StatementCacheNode *_firstNode;
    ML3StatementCacheNode *_lastNode;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) ML3StatementCacheNode *firstNode; // @synthesize firstNode=_firstNode;
@property (readonly, nonatomic) ML3StatementCacheNode *lastNode; // @synthesize lastNode=_lastNode;

- (void).cxx_destruct;
- (void)appendNode:(id)arg1;
- (void)deleteAllNodes;
- (void)deleteOldestNode;
- (id)description;
- (id)oldestNode;
- (void)promoteNodeWithDictionaryKey:(id)arg1;

@end
