//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface UNSKeyedDataStoreRepository : NSObject
{
    NSString *_directory;
    NSString *_fileName;
    NSString *_pathExtension;
    long long _maxObjectsPerKey;
    BOOL _shouldExcludeFromBackup;
}

- (void).cxx_destruct;
- (id)_addObject:(id)arg1 replaceObjectUsingTest:(CDUnknownBlockType)arg2 mustReplace:(BOOL)arg3 atPath:(id)arg4;
- (id)_dataAtPath:(id)arg1;
- (id)_directoryForKey:(id)arg1;
- (id)_objectsAtPath:(id)arg1;
- (id)_pathForKey:(id)arg1;
- (void)_removeItemAtPath:(id)arg1;
- (id)_removeObjectsPassingTest:(CDUnknownBlockType)arg1 atPath:(id)arg2;
- (BOOL)_saveObjects:(id)arg1 atPath:(id)arg2;
- (void)_setObjects:(id)arg1 atPath:(id)arg2;
- (id)addObject:(id)arg1 forKey:(id)arg2;
- (id)addObject:(id)arg1 replaceObjectUsingTest:(CDUnknownBlockType)arg2 forKey:(id)arg3;
- (id)addObject:(id)arg1 replaceObjectUsingTest:(CDUnknownBlockType)arg2 mustReplace:(BOOL)arg3 forKey:(id)arg4;
- (id)allKeys;
- (id)directoryForKey:(id)arg1;
- (id)directoryPath;
- (id)initWithDirectory:(id)arg1 fileName:(id)arg2 pathExtension:(id)arg3 maxObjectsPerKey:(long long)arg4 shouldExcludeFromBackup:(BOOL)arg5;
- (id)objectsForKey:(id)arg1;
- (id)pathForKey:(id)arg1;
- (void)removeAllObjectsForKey:(id)arg1;
- (void)removeDataStoreRepository;
- (id)removeObjectsPassingTest:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (void)removeStoreForKey:(id)arg1;
- (id)replaceObject:(id)arg1 usingTest:(CDUnknownBlockType)arg2 forKey:(id)arg3;
- (void)setObjects:(id)arg1 forKey:(id)arg2;

@end

