//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CPLResourceTransferTask, NSDate, NSMutableDictionary;

@interface PLCloudPendingResourceTask : NSObject
{
    CPLResourceTransferTask *_transferTask;
    NSMutableDictionary *_pendingTasks;
    NSDate *_lastUpdated;
    BOOL _completed;
    BOOL _transferTaskRemoved;
    BOOL _highPriority;
    BOOL _transferStarted;
    float _lastReportedProgress;
}

@property (readonly, nonatomic, getter=isHighPriority) BOOL highPriority; // @synthesize highPriority=_highPriority;
@property (readonly, nonatomic) float lastReportedProgress; // @synthesize lastReportedProgress=_lastReportedProgress;
@property (readonly, nonatomic) BOOL transferStarted; // @synthesize transferStarted=_transferStarted;

- (void)addProgressBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2 withTaskIdentifier:(id)arg3;
- (void)cancelTaskWithIdentifier:(id)arg1;
- (void)dealloc;
- (id)initWithProgressBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2 forTaskIdentifier:(id)arg3 highPriority:(BOOL)arg4;
- (void)keepAlive;
- (id)lastUpdated;
- (void)reportCompletionWithError:(id)arg1;
- (void)reportProgress:(float)arg1;
- (void)setTransferTask:(id)arg1;
- (id)taskIDs;

@end

