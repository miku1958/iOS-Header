//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BRCDumper, NSDate, NSString, PQLConnection, brc_task_tracker;

@interface BRCDumpContext : NSObject
{
    long long _indentation;
    BRCDumper *_dumper;
    NSDate *_nowDate;
    BOOL _liveDaemon;
    BOOL _onlyActiveStuff;
    BOOL _dumpTrackedPendingDownloads;
    struct __sFILE *_fp;
    PQLConnection *_db;
    NSString *_indentationBaseString;
    brc_task_tracker *_taskTracker;
}

@property (readonly, nonatomic) PQLConnection *db; // @synthesize db=_db;
@property (nonatomic) BOOL dumpTrackedPendingDownloads; // @synthesize dumpTrackedPendingDownloads=_dumpTrackedPendingDownloads;
@property (readonly, nonatomic) struct __sFILE *fp; // @synthesize fp=_fp;
@property (strong, nonatomic) NSString *indentationBaseString; // @synthesize indentationBaseString=_indentationBaseString;
@property (readonly, nonatomic) BOOL isCancelled;
@property (nonatomic) BOOL liveDaemon; // @synthesize liveDaemon=_liveDaemon;
@property (nonatomic) BOOL onlyActiveStuff; // @synthesize onlyActiveStuff=_onlyActiveStuff;
@property (strong, nonatomic) brc_task_tracker *taskTracker; // @synthesize taskTracker=_taskTracker;

+ (id)highlightedString:(id)arg1 type:(long long)arg2 context:(id)arg3;
+ (id)nowDateFromContext:(id)arg1;
+ (long long)nowFromContext:(id)arg1;
+ (id)stringFromByteCount:(long long)arg1 context:(id)arg2;
+ (id)stringFromByteCount:(long long)arg1 showActualByteCount:(BOOL)arg2 suffix:(id)arg3 context:(id)arg4;
+ (id)stringFromCount:(long long)arg1 context:(id)arg2;
+ (id)stringFromCount:(long long)arg1 showActualCount:(BOOL)arg2 suffix:(id)arg3 isByteCount:(BOOL)arg4 context:(id)arg5;
+ (id)stringFromDueDate:(id)arg1 allowsPast:(BOOL)arg2 context:(id)arg3;
+ (id)stringFromDueStamp:(long long)arg1 allowsPast:(BOOL)arg2 context:(id)arg3;
+ (id)stringFromError:(id)arg1 context:(id)arg2;
+ (id)stringFromErrorString:(id)arg1 context:(id)arg2;
+ (id)stringFromInterval:(double)arg1 context:(id)arg2;
+ (id)stringFromItemAsString:(id)arg1 context:(id)arg2;
+ (id)stringFromItemID:(id)arg1 context:(id)arg2;
+ (id)stringFromOperationUUID:(unsigned char [16])arg1 context:(id)arg2;
+ (id)stringFromThrottleState:(int)arg1 context:(id)arg2;
- (void).cxx_destruct;
- (id)highlightedString:(id)arg1 type:(long long)arg2;
- (id)initWithDumper:(id)arg1;
- (id)initWithFile:(struct __sFILE *)arg1 db:(id)arg2;
- (void)popIndentation;
- (void)pushIndentation;
- (void)writeLineWithFormat:(id)arg1;

@end

