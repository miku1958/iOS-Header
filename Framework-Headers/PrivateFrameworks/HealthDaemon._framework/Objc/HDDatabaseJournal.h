//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileHandle, NSLock, NSString;

@interface HDDatabaseJournal : NSObject
{
    NSString *_path;
    NSLock *_journalLock;
    NSFileHandle *_fileHandle;
    unsigned long long _mergeTransactionOptions;
}

@property (strong, nonatomic) NSFileHandle *fileHandle; // @synthesize fileHandle=_fileHandle;
@property (strong, nonatomic) NSLock *journalLock; // @synthesize journalLock=_journalLock;
@property (nonatomic) unsigned long long mergeTransactionOptions; // @synthesize mergeTransactionOptions=_mergeTransactionOptions;
@property (copy, nonatomic) NSString *path; // @synthesize path=_path;

- (void).cxx_destruct;
- (BOOL)_appendData:(id)arg1 error:(id *)arg2;
- (void)_executeAtomically:(CDUnknownBlockType)arg1;
- (id)_loadJournalEntry:(id)arg1;
- (BOOL)_loadJournalFromMapping:(void *)arg1 size:(unsigned long long)arg2 headerLength:(unsigned long long)arg3 journalEntries:(id *)arg4 error:(id *)arg5;
- (BOOL)_loadJournalWithFileHandle:(id)arg1 journalEntries:(id *)arg2 error:(id *)arg3;
- (void)_mergeJournalEntries:(id)arg1 profile:(id)arg2;
- (id)_nameOfNextJournalFile;
- (BOOL)_openNextJournalFileWithError:(id *)arg1;
- (BOOL)_performPostJournalMergeWithVersion:(unsigned int)arg1 profile:(id)arg2 database:(id)arg3 error:(id *)arg4;
- (unsigned int)_processJournalFile:(id)arg1 profile:(id)arg2 sqlDatabase:(id)arg3 fileHandle:(id)arg4 mapping:(void *)arg5 length:(unsigned long long)arg6 error:(id *)arg7;
- (unsigned int)_processJournalFile:(id)arg1 profile:(id)arg2 sqlDatabase:(id)arg3 fileSize:(unsigned long long *)arg4 error:(id *)arg5;
- (unsigned int)_processMonarchJournalWithVersion:(unsigned int)arg1 fileHandle:(id)arg2 mapping:(void *)arg3 size:(unsigned long long)arg4 headerLength:(unsigned long long)arg5 profile:(id)arg6 database:(id)arg7 error:(id *)arg8;
- (unsigned int)_processOkemoJournalWithVersion:(unsigned int)arg1 fileHandle:(id)arg2 mapping:(void *)arg3 size:(unsigned long long)arg4 headerLength:(unsigned long long)arg5 profile:(id)arg6 database:(id)arg7 error:(id *)arg8;
- (id)_sortedListOfJournalFiles;
- (void)_unitTesting_closeCurrentJournalFile;
- (BOOL)addJournalEntries:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)init;
- (id)initAsSecondaryWithPath:(id)arg1;
- (id)initWithPath:(id)arg1;
- (BOOL)mergeWithProfile:(id)arg1;

@end
