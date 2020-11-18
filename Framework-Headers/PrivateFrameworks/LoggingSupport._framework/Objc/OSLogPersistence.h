//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCompoundPredicate, NSDate, NSDictionary, NSString, NSURL, _OSLogCollectionReference, _OSLogIndex, _OSLogVersioning;
@protocol OSLogPersistenceDelegate;

@interface OSLogPersistence : NSObject
{
    _OSLogCollectionReference *_oslcr;
    _OSLogVersioning *_version;
    _OSLogIndex *_index;
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

@property (readonly, nonatomic) long long archiveState;
@property (readonly, nonatomic) long long archiveVersion;
@property (nonatomic) unsigned long long batchSize; // @synthesize batchSize=_batchSize;
@property (readonly, copy, nonatomic) NSString *currentFile; // @synthesize currentFile=_currentFile;
@property (readonly, nonatomic) unsigned long long decodeFailures; // @synthesize decodeFailures=_decodeFailures;
@property (weak, nonatomic) id<OSLogPersistenceDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property (copy, nonatomic) NSURL *logArchive; // @synthesize logArchive=_logArchive;
@property (copy, nonatomic) NSURL *logFile; // @synthesize logFile=_logFile;
@property (readonly, nonatomic) unsigned long long logMessageCount; // @synthesize logMessageCount=_logMessageCount;
@property (readonly, nonatomic) unsigned long long messagesFiltered; // @synthesize messagesFiltered=_messagesFiltered;
@property (nonatomic) unsigned long long options; // @synthesize options=_options;
@property (copy, nonatomic) NSCompoundPredicate *predicate; // @synthesize predicate=_predicate;
@property (readonly, copy, nonatomic) NSDate *sparseDataStart; // @synthesize sparseDataStart=_sparseDataStart;
@property (readonly, copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property (readonly, strong, nonatomic) NSDictionary *statistics;
@property (readonly, nonatomic) struct _os_timesync_db_s *timesync;
@property (nonatomic) BOOL verbose; // @synthesize verbose=_verbose;

- (void).cxx_destruct;
- (void)_openFiles;
- (void)_openLocalPersistenceDir;
- (void)_openPath:(id)arg1;
- (BOOL)allowSensitive;
- (void)dealloc;
- (void)enumerateFromLastBootWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateFromStartDate:(id)arg1 toEndDate:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)fetchFromStartDate:(id)arg1 toEndDate:(id)arg2;
- (id)init;
- (void)resetWorkingState;
- (BOOL)streamChunks:(CDUnknownBlockType)arg1 andEntries:(CDUnknownBlockType)arg2 flags:(unsigned int)arg3;

@end

