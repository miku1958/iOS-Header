//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NUSharableImage-Protocol.h>

@class NSString;
@protocol NUPurgeableStorage, OS_dispatch_queue;

@interface _NUImageTile : NSObject <NUSharableImage>
{
    NSObject<OS_dispatch_queue> *_queue;
    id<NUPurgeableStorage> _storage;
    unsigned long long _accessCount;
    BOOL _wasPurged;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_decrementAccessCount;
- (BOOL)_incrementAccessCount;
- (void)_markAsPurgeable;
- (BOOL)_markAsUnpurgeable;
- (void)_visitRead:(CDUnknownBlockType)arg1;
- (unsigned long long)accessCount;
- (long long)copyFromTile:(id)arg1 region:(id)arg2;
- (void)dealloc;
- (BOOL)decrementAccessAndUseCount;
- (BOOL)decrementAccessAndUseCountButLeaveAccessedIfLastUse;
- (BOOL)decrementAccessCount;
- (BOOL)decrementUseCount;
- (BOOL)incrementAccessCount;
- (void)incrementUseCount;
- (id)initWithStorage:(id)arg1;
- (BOOL)isInUse;
- (BOOL)isShared;
- (BOOL)isValid;
- (long long)readStorageInRegion:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)returnToStorageFactory:(id)arg1;
- (int)useCount;
- (long long)writeStorageInRegion:(id)arg1 block:(CDUnknownBlockType)arg2;

@end

