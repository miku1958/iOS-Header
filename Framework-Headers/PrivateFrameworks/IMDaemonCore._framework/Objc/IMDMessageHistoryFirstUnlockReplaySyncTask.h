//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMDaemonCore/IMDMessageHistoryIDSTransactionLogSyncTask.h>

@class IMDReplayController;

@interface IMDMessageHistoryFirstUnlockReplaySyncTask : IMDMessageHistoryIDSTransactionLogSyncTask
{
    IMDReplayController *_replayController;
}

- (void)_setupAndBeginSync;
- (void)dealloc;
- (id)initWithReplayController:(id)arg1 accountController:(id)arg2;
- (unsigned long long)syncTaskType;

@end
