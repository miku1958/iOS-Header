//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MIME/NSCacheDelegate-Protocol.h>

@class NSCache, NSRecursiveLock, NSString;
@protocol MFLazyCacheDelegate;

@interface MFLazyCache : NSObject <NSCacheDelegate>
{
    NSRecursiveLock *_lock;
    NSCache *_storage;
    struct {
        unsigned int delegateRespondsToLazyCacheWillEvictObject:1;
    } _flags;
    id<MFLazyCacheDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MFLazyCacheDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_exchangeOriginalObject:(id)arg1 forKey:(id)arg2 withObject:(id)arg3;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithCountLimit:(unsigned long long)arg1;
- (id)objectForKey:(id)arg1 generator:(CDUnknownBlockType)arg2;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (id)storedObjectForKey:(id)arg1;
- (long long)waiterCountForKey:(id)arg1;

@end

