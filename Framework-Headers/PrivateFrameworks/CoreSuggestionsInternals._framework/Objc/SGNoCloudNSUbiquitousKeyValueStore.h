//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSUbiquitousKeyValueStore.h>

@class NSMutableDictionary;

@interface SGNoCloudNSUbiquitousKeyValueStore : NSUbiquitousKeyValueStore
{
    NSMutableDictionary *_kv;
    struct _opaque_pthread_mutex_t _lock;
}

- (void).cxx_destruct;
- (id)arrayForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)objectForKey:(id)arg1;
- (void)setArray:(id)arg1 forKey:(id)arg2;
- (void)setData:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (BOOL)synchronize;

@end
