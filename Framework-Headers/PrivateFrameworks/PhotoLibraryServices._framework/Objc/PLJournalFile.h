//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, PLJournal;

@interface PLJournalFile : NSObject
{
    NSURL *_url;
    PLJournal *_journal;
}

@property (weak, nonatomic) PLJournal *journal; // @synthesize journal=_journal;
@property (readonly, nonatomic) NSURL *url; // @synthesize url=_url;

+ (BOOL)copyURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
+ (BOOL)createEmptyURL:(id)arg1 error:(id *)arg2;
+ (BOOL)fileExistsAtURL:(id)arg1;
+ (BOOL)moveURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
+ (BOOL)removeURL:(id)arg1 error:(id *)arg2;
+ (BOOL)writeData:(id)arg1 toURL:(id)arg2 atomically:(BOOL)arg3 error:(id *)arg4;
- (void).cxx_destruct;
- (BOOL)_fileSize:(unsigned long long *)arg1 forKey:(id)arg2 error:(id *)arg3;
- (BOOL)allocatedFileSize:(unsigned long long *)arg1 error:(id *)arg2;
- (BOOL)appendEntries:(id)arg1 error:(id *)arg2;
- (BOOL)copyToURL:(id)arg1 error:(id *)arg2;
- (BOOL)createEmptyFileWithError:(id *)arg1;
- (BOOL)enumerateEntriesUsingBlock:(CDUnknownBlockType)arg1 decodePayload:(BOOL)arg2 error:(id *)arg3;
- (BOOL)fileExists;
- (BOOL)fileSize:(unsigned long long *)arg1 error:(id *)arg2;
- (id)initWithURL:(id)arg1 journal:(id)arg2;
- (BOOL)moveToURL:(id)arg1 error:(id *)arg2;
- (BOOL)openForReadingUsingBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (BOOL)openForWritingUsingBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (BOOL)removeFileWithError:(id *)arg1;

@end
