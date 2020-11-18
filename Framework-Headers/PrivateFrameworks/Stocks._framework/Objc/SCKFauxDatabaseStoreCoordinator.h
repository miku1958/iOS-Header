//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Stocks/SCKDatabaseStoreCoordinator-Protocol.h>

@protocol OS_dispatch_queue, SCKDatabaseStore;

@interface SCKFauxDatabaseStoreCoordinator : NSObject <SCKDatabaseStoreCoordinator>
{
    id<SCKDatabaseStore> _store;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (strong, nonatomic) id<SCKDatabaseStore> store; // @synthesize store=_store;
@property (readonly, nonatomic) id<SCKDatabaseStore> underlyingStore;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)initWithDatabaseStore:(id)arg1;
- (void)readWithAccessor:(CDUnknownBlockType)arg1;
- (void)readZone:(id)arg1 withAccessor:(CDUnknownBlockType)arg2;
- (void)reloadWithAccessor:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (void)writeWithAccessor:(CDUnknownBlockType)arg1;
- (void)writeZone:(id)arg1 withAccessor:(CDUnknownBlockType)arg2;

@end

