//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/SBFFileCacheStore-Protocol.h>

@class NSMutableDictionary, NSString;

@interface SBFFileCacheMemoryStore : NSObject <SBFFileCacheStore>
{
    NSMutableDictionary *_fileWrappers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)fileCache:(id)arg1 loadFileWrapperNamed:(id)arg2;
- (void)fileCache:(id)arg1 removeFileWrapperNamed:(id)arg2;
- (void)fileCache:(id)arg1 storeFileWrapper:(id)arg2;
- (void)removeAllFileWrappersForFileCache:(id)arg1;

@end

