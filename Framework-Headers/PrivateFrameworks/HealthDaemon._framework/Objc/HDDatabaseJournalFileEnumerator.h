//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSMutableArray, NSString;
@protocol HDDatabaseJournalFileEnumeratorTestsDelegate;

@interface HDDatabaseJournalFileEnumerator : NSObject
{
    long long _currentFileIndex;
    BOOL _hasLoadedFiles;
    long long _maxAllowedOpenFileHandleCount;
    long long _totalFilesCount;
    NSError *_cachedError;
    NSString *_path;
    NSMutableArray *_remainingJournalFileNames;
    NSMutableArray *_openJournalFiles;
    id<HDDatabaseJournalFileEnumeratorTestsDelegate> _unitTestDelegate;
}

@property (readonly, nonatomic) unsigned long long currentJournalFileIndex;
@property (readonly, nonatomic) BOOL hasFiles;
@property (readonly, nonatomic, getter=hasMoreJournalFiles) BOOL moreJournalFiles;
@property (strong, nonatomic) NSMutableArray *openJournalFiles; // @synthesize openJournalFiles=_openJournalFiles;
@property (copy, nonatomic) NSString *path; // @synthesize path=_path;
@property (strong, nonatomic) NSMutableArray *remainingJournalFileNames; // @synthesize remainingJournalFileNames=_remainingJournalFileNames;
@property (readonly, nonatomic) unsigned long long totalJournalFileCount;
@property (weak, nonatomic) id<HDDatabaseJournalFileEnumeratorTestsDelegate> unitTestDelegate; // @synthesize unitTestDelegate=_unitTestDelegate;

- (void).cxx_destruct;
- (id)_createFileHandlesForFileNames:(id)arg1 error:(id *)arg2;
- (id)_fileHandleForFileName:(id)arg1 path:(id)arg2 error:(id *)arg3;
- (unsigned long long)_totalOpenFileHandleCount;
- (BOOL)_updateRollingBufferIfRequiredWithError:(id *)arg1;
- (void)closeJournalFiles;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (BOOL)loadSortedJournalFilesWithError:(id *)arg1;
- (long long)maxAllowedOpenFileHandleCount;
- (id)nextJournalFileWithError:(id *)arg1;
- (void)setMaxAllowedOpenFileHandleCount:(long long)arg1;

@end

