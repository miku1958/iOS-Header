//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UICanvasLifecycleMonitor.h>

__attribute__((visibility("hidden")))
@interface __UICanvasLifecycleMonitor_Compatability : _UICanvasLifecycleMonitor
{
}

- (BOOL)_scheduleFirstCommitForScene:(id)arg1 transition:(id)arg2 firstActivation:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)activateEventsOnly:(BOOL)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deactivateEventsOnly:(BOOL)arg1 withContext:(id)arg2 forceExit:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)didResumeForEventsOnly;
- (void)didResumeUnderLock;
- (void)willSuspendForEventsOnly;
- (void)willSuspendUnderLock;

@end

