//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ML3StatementCacheList, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ML3DatabaseStatementCache : NSObject
{
    NSMutableDictionary *_statementsDictionary;
    ML3StatementCacheList *_nodeList;
    unsigned long long _cacheSize;
}

@property (readonly, nonatomic) unsigned long long cacheSize; // @synthesize cacheSize=_cacheSize;

- (void).cxx_destruct;
- (id)allStatements;
- (void)cacheStatement:(id)arg1;
- (id)cachedStatementForSQL:(id)arg1;
- (void)clearCache;
- (void)dealloc;
- (id)initWithCacheSize:(unsigned long long)arg1;

@end

