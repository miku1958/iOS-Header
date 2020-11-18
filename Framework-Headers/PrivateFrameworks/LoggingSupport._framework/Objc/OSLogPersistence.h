//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCompoundPredicate, NSDate, NSString, NSURL;
@protocol OSLogPersistenceDelegate, OS_dispatch_queue;

@interface OSLogPersistence : NSObject
{
    struct oslog_persistence_file_tq *_files;
    struct rb_tree *_oversize_rbt;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_sourcePath;
    struct event_indices_tq *_event_indices;
    BOOL _verbose;
    NSURL *_logFile;
    NSURL *_logArchive;
    id<OSLogPersistenceDelegate> _delegate;
    NSCompoundPredicate *_predicate;
    unsigned long long _batchSize;
    unsigned long long _options;
    NSString *_currentFile;
    NSDate *_startDate;
    NSDate *_sparseDataStart;
    NSDate *_endDate;
    unsigned long long _decodeFailures;
    unsigned long long _messagesFiltered;
    unsigned long long _logMessageCount;
}

@property unsigned long long batchSize; // @synthesize batchSize=_batchSize;
@property (readonly, copy) NSString *currentFile; // @synthesize currentFile=_currentFile;
@property (readonly) unsigned long long decodeFailures; // @synthesize decodeFailures=_decodeFailures;
@property (weak) id<OSLogPersistenceDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSDate *endDate; // @synthesize endDate=_endDate;
@property (copy, nonatomic) NSURL *logArchive; // @synthesize logArchive=_logArchive;
@property (copy, nonatomic) NSURL *logFile; // @synthesize logFile=_logFile;
@property (readonly) unsigned long long logMessageCount; // @synthesize logMessageCount=_logMessageCount;
@property (readonly) unsigned long long messagesFiltered; // @synthesize messagesFiltered=_messagesFiltered;
@property unsigned long long options; // @synthesize options=_options;
@property (copy) NSCompoundPredicate *predicate; // @synthesize predicate=_predicate;
@property (readonly, copy) NSDate *sparseDataStart; // @synthesize sparseDataStart=_sparseDataStart;
@property (readonly, copy) NSDate *startDate; // @synthesize startDate=_startDate;
@property BOOL verbose; // @synthesize verbose=_verbose;

+ (id)logPersistenceAtPath:(id)arg1;
- (void).cxx_destruct;
- (void)_enumerateFromStartDate:(id)arg1 toEndDate:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)_reportError:(int)arg1 format:(id)arg2;
- (void)addChunk:(struct oslog_persistence_chunk *)arg1 toHeader:(struct oslog_persistence_header *)arg2;
- (void)addOversizeChunk:(struct oslog_persistence_chunk *)arg1;
- (void)allocateEventListForHeader:(struct oslog_persistence_header *)arg1;
- (BOOL)allowSensitive;
- (void)buildIndexFromTimeInterval:(double)arg1 toTimeInterval:(double)arg2;
- (void)clearOversizeRBT;
- (void)closeFiles;
- (struct oslog_persistence_chunk *)createChunk:(struct tracev3_chunk_s *)arg1 header:(struct tracev3_chunk_s *)arg2;
- (struct oslog_persistence_file *)createFileFromDescriptor:(int)arg1;
- (struct oslog_persistence_file *)createFileFromRegion:(void *)arg1 size:(unsigned long long)arg2 liveData:(BOOL)arg3 path:(char *)arg4;
- (struct oslog_persistence_header *)createHeaderForChunk:(struct tracev3_chunk_s *)arg1 andFile:(struct oslog_persistence_file *)arg2;
- (void)dealloc;
- (void)enumerateFromLastBootWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateFromStartDate:(id)arg1 toEndDate:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)enumerateWithIndex:(struct oslog_persistence_index *)arg1 start:(double)arg2 end:(double)arg3 withBlock:(CDUnknownBlockType)arg4;
- (void)fetchFromStartDate:(id)arg1 toEndDate:(id)arg2;
- (void)growEventListForHeader:(struct oslog_persistence_header *)arg1;
- (id)init;
- (void)openFiles;
- (void)openLogArchive;
- (void)openPath:(id)arg1;
- (void)parseFileMetadata:(struct oslog_persistence_file *)arg1;
- (void)resetWorkingState;
- (id)statistics;

@end
