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
}

@property (strong, nonatomic) NSFileHandle *fileHandle; // @synthesize fileHandle=_fileHandle;
@property (strong, nonatomic) NSLock *journalLock; // @synthesize journalLock=_journalLock;
@property (copy, nonatomic) NSString *path; // @synthesize path=_path;

- (void).cxx_destruct;
- (BOOL)_appendData:(id)arg1;
- (void)_executeAtomically:(CDUnknownBlockType)arg1;
- (id)_loadJournalEntry:(id)arg1;
- (id)_loadJournalFromMapping:(void *)arg1 size:(unsigned long long)arg2 headerLength:(unsigned long long)arg3;
- (id)_loadJournalWithFileHandle:(id)arg1;
- (void)_mergeJournalEntries:(id)arg1 daemon:(id)arg2;
- (id)_nameOfNextJournalFile;
- (void)_performPostJournalMergeWithVersion:(unsigned int)arg1 daemon:(id)arg2 database:(id)arg3;
- (unsigned int)_processJournalFile:(id)arg1 daemon:(id)arg2 sqlDatabase:(id)arg3;
- (unsigned int)_processJournalFile:(id)arg1 daemon:(id)arg2 sqlDatabase:(id)arg3 fileHandle:(id)arg4 mapping:(void *)arg5 length:(unsigned long long)arg6;
- (unsigned int)_processMonarchJournalWithVersion:(unsigned int)arg1 fileHandle:(id)arg2 mapping:(void *)arg3 size:(unsigned long long)arg4 headerLength:(unsigned long long)arg5 daemon:(id)arg6 database:(id)arg7;
- (unsigned int)_processOkemoJournalWithVersion:(unsigned int)arg1 fileHandle:(id)arg2 mapping:(void *)arg3 size:(unsigned long long)arg4 headerLength:(unsigned long long)arg5 daemon:(id)arg6 database:(id)arg7;
- (id)_sortedListOfJournalFiles;
- (void)addJournalEntries:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithPath:(id)arg1;
- (BOOL)mergeWithDaemon:(id)arg1;

@end

