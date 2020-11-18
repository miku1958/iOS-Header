//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <IMDaemonCore/IMDMessagePTaskStore-Protocol.h>

@class NSString;

@interface IMDMessagePTaskXPCStore : NSObject <IMDMessagePTaskStore>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (BOOL)_networkCall_IMDMessagePTaskDeleteAllCompletedTask;
- (id)_networkCall_IMDMessagePTaskSelectWithLimit:(long long)arg1;
- (BOOL)_networkCall_IMDMessagePTaskUpdateTaskFlagsForGUID:(id)arg1 taskFlags:(long long)arg2;
- (BOOL)_networkCall_InsertRowGuid:(id)arg1 taskFlags:(long long)arg2;
- (BOOL)deleteAllCompletedTasks;
- (id)loadMostRecentMessagePTasks;
- (BOOL)storePTask:(id)arg1;
- (BOOL)updateTaskFlagsForPTask:(id)arg1;

@end

