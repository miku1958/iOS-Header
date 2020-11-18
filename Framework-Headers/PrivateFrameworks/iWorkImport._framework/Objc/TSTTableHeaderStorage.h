//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPContainedObject.h>

#import <iWorkImport/TSTTableHeaderStorage-Protocol.h>

@class NSString, TSTTableHeaderStorageBucket;

__attribute__((visibility("hidden")))
@interface TSTTableHeaderStorage : TSPContainedObject <TSTTableHeaderStorage>
{
    TSTTableHeaderStorageBucket *mBuckets[1];
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (long long)count;
- (void)dealloc;
- (void)enumerateHeadersWithBlock:(CDUnknownBlockType)arg1;
- (id)headerForKey:(unsigned int)arg1 willModify:(BOOL)arg2;
- (id)headerForKey:(unsigned int)arg1 willModify:(BOOL)arg2 createIfNotThere:(BOOL)arg3;
- (id)initWithArchive:(const struct HeaderStorage *)arg1 unarchiver:(id)arg2 owner:(id)arg3;
- (id)initWithOwner:(id)arg1;
- (unsigned int)lowerBound:(unsigned int)arg1;
- (unsigned int)maxKey;
- (unsigned int)minKey;
- (void)removeAllHeaders;
- (void)removeHeaderForKey:(unsigned int)arg1;
- (void)saveToArchive:(struct HeaderStorage *)arg1 archiver:(id)arg2;
- (void)setHeader:(id)arg1 forKey:(unsigned int)arg2;
- (void)shiftKeysAtIndex:(unsigned int)arg1 amount:(int)arg2;
- (unsigned int)upperBound:(unsigned int)arg1;
- (void)willModifyAllHeaders;

@end

