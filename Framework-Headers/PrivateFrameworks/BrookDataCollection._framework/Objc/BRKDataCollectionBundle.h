//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSMutableSet, NSString;

@interface BRKDataCollectionBundle : NSObject
{
    NSMutableDictionary *_writers;
    NSMutableSet *_manifest;
    struct os_unfair_lock_s _writersLock;
    BOOL _isPackaged;
    NSString *_folderName;
    NSString *_basePath;
}

@property (readonly, nonatomic) NSArray *addedFiles;
@property (readonly, nonatomic) NSString *basePath; // @synthesize basePath=_basePath;
@property (readonly, nonatomic) NSString *folderName; // @synthesize folderName=_folderName;
@property (readonly, nonatomic) BOOL isPackaged; // @synthesize isPackaged=_isPackaged;

+ (id)defaultLogDirectory;
- (void).cxx_destruct;
- (void)_writeData:(id)arg1 toFile:(id)arg2 updateManifest:(BOOL)arg3;
- (id)_writerForClass:(Class)arg1 file:(id)arg2 configuration:(CDUnknownBlockType)arg3;
- (id)accelerationWriterForFile:(id)arg1;
- (id)accelerationWriterForFile:(id)arg1 valueCount:(unsigned long long)arg2;
- (id)audioWriterForFile:(id)arg1;
- (void)closeWriterForFile:(id)arg1;
- (id)embeddingsWriterForFile:(id)arg1;
- (id)initWithFolderNamed:(id)arg1;
- (id)logWriterForFile:(id)arg1;
- (BOOL)packageBundleToPath:(id *)arg1 filePrioritization:(id)arg2;
- (BOOL)removeBundle;
- (void)writeData:(id)arg1 toFile:(id)arg2;
- (void)writeJSON:(id)arg1 toFile:(id)arg2;

@end
