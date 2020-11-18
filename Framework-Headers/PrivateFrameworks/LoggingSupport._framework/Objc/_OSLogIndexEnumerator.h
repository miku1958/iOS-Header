//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, _OSLogIndex, _OSLogTracepointBuffer;

__attribute__((visibility("hidden")))
@interface _OSLogIndexEnumerator : NSObject
{
    NSMutableArray *_subchunkStartQ;
    NSMutableArray *_subchunkEndQ;
    NSMutableArray *_catalogStartQ;
    NSMutableArray *_fileStartQ;
    NSMutableArray *_fileEndQ;
    struct os_timesync_range_s *_bounds[6];
    struct os_timesync_range_s *_live_bound;
    _OSLogTracepointBuffer *_tracepoints;
    _OSLogIndex *_index;
}

- (void).cxx_destruct;
- (void)_initTimesyncBounds:(CDStruct_b8fedf57 *)arg1;
- (void)dealloc;
- (void)enumerateTracepointsInRange:(struct os_timesync_range_s *)arg1 timesync:(struct _os_timesync_db_s *)arg2 options:(unsigned int)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (id)initWithIndex:(id)arg1 metadata:(CDStruct_b8fedf57 *)arg2 fileStartList:(id)arg3 fileEndList:(id)arg4;

@end

