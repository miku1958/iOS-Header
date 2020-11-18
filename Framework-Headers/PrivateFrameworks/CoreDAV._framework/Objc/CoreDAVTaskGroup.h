//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CoreDAV/CoreDAVSubmittable-Protocol.h>

@class NSError, NSMutableSet, NSString;
@protocol CoreDAVAccountInfoProvider, CoreDAVTaskGroupDelegate, CoreDAVTaskManager;

@interface CoreDAVTaskGroup : NSObject <CoreDAVSubmittable>
{
    id<CoreDAVTaskManager> _taskManager;
    id<CoreDAVAccountInfoProvider> _accountInfoProvider;
    double _timeoutInterval;
    NSMutableSet *_outstandingTasks;
    BOOL _isCancelling;
    BOOL _isTearingDown;
    BOOL _isFinished;
    id<CoreDAVTaskGroupDelegate> _delegate;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completionBlock;
    NSError *_error;
    id _context;
}

@property (nonatomic) id<CoreDAVAccountInfoProvider> accountInfoProvider; // @synthesize accountInfoProvider=_accountInfoProvider;
@property (copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property (strong, nonatomic) id context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<CoreDAVTaskGroupDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSError *error; // @synthesize error=_error;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSMutableSet *outstandingTasks; // @synthesize outstandingTasks=_outstandingTasks;
@property (copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property (readonly) Class superclass;
@property (nonatomic) id<CoreDAVTaskManager> taskManager; // @synthesize taskManager=_taskManager;
@property (nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;

- (void)_tearDownAllTasks;
- (void)bailWithError:(id)arg1;
- (void)cancelTaskGroup;
- (void)dealloc;
- (void)finishCoreDAVTaskGroupWithError:(id)arg1;
- (void)finishCoreDAVTaskGroupWithError:(id)arg1 delegateCallbackBlock:(CDUnknownBlockType)arg2;
- (void)finishEarlyWithError:(id)arg1;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2;
- (void)startTaskGroup;
- (void)submitWithTaskManager:(id)arg1;
- (void)syncAway;
- (void)taskGroupWillCancelWithError:(id)arg1;

@end

