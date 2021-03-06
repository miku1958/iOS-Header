//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/SCLSchoolModeDelegate-Protocol.h>

@class NSString, SCLSchoolMode, SCLState;
@protocol HDSchoolTimeObserverDelegate;

@interface HDSchoolTimeObserver : NSObject <SCLSchoolModeDelegate>
{
    SCLSchoolMode *_schoolMode;
    SCLState *_schoolModeState;
    struct os_unfair_lock_s _lock;
    id<HDSchoolTimeObserverDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) id<HDSchoolTimeObserverDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL inSchoolMode;
@property (readonly) Class superclass;

+ (void)unitTest_setSchoolMode:(BOOL)arg1;
- (void).cxx_destruct;
- (void)_unitTestSchoolModeChanged;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)schoolMode:(id)arg1 didUpdateScheduleSettings:(id)arg2;
- (void)schoolMode:(id)arg1 didUpdateState:(id)arg2 fromState:(id)arg3;
- (void)schoolModeDidUpdateUnlockHistory:(id)arg1;

@end

