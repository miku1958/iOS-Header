//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SCRActivityScheduler;
@protocol SCRTaskSchedulerDelegate;

@interface SCRTaskScheduler : NSObject
{
    struct os_unfair_lock_s _lock;
    SCRActivityScheduler *_activityScheduler;
    NSMutableDictionary *_activityForTask;
    id<SCRTaskSchedulerDelegate> _delegate;
}

@property (weak, nonatomic) id<SCRTaskSchedulerDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (void)_performTaskWithIdentifier:(id)arg1;
- (void)cancelTaskWithIdentifier:(id)arg1;
- (void)completeTaskWithIdentifier:(id)arg1;
- (id)initWithTargetQueue:(id)arg1;
- (void)scheduleTaskWithIdentifier:(id)arg1 withConfiguration:(id)arg2;

@end
