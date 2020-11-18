//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CDAttribute, NSDate, NSNumber, NSString;
@protocol OS_dispatch_queue;

@interface _CDActivity : NSObject
{
    BOOL _allowOnBattery;
    BOOL _afterUserIsInactive;
    BOOL _beforeUserIsActive;
    BOOL _cpuIntensive;
    BOOL _memoryIntensive;
    BOOL _ioIntensive;
    BOOL _discretionaryActivity;
    BOOL _budgeted;
    BOOL _triggersRestart;
    BOOL _deviceWakeAllowed;
    int _budgetedPid;
    int _pid;
    NSDate *_startAfter;
    NSDate *_executeBefore;
    NSString *_name;
    NSObject<OS_dispatch_queue> *_handlerQueue;
    CDUnknownBlockType _startHandler;
    CDUnknownBlockType _suspendHandler;
    NSString *_networkAvailability;
    NSString *_bundleId;
    NSNumber *_identifier;
    unsigned long long _state;
    NSDate *_scheduledTime;
    double _leeway;
    CDAttribute *_meteringAttribute;
    CDAttribute *_admissionAttribute;
    unsigned long long _budgetingToken;
}

@property (strong) CDAttribute *admissionAttribute; // @synthesize admissionAttribute=_admissionAttribute;
@property (nonatomic) BOOL afterUserIsInactive; // @synthesize afterUserIsInactive=_afterUserIsInactive;
@property (nonatomic) BOOL allowOnBattery; // @synthesize allowOnBattery=_allowOnBattery;
@property (nonatomic) BOOL beforeUserIsActive; // @synthesize beforeUserIsActive=_beforeUserIsActive;
@property (nonatomic) BOOL budgeted; // @synthesize budgeted=_budgeted;
@property (nonatomic) int budgetedPid; // @synthesize budgetedPid=_budgetedPid;
@property unsigned long long budgetingToken; // @synthesize budgetingToken=_budgetingToken;
@property (strong, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property (nonatomic) BOOL cpuIntensive; // @synthesize cpuIntensive=_cpuIntensive;
@property (nonatomic) BOOL deviceWakeAllowed; // @synthesize deviceWakeAllowed=_deviceWakeAllowed;
@property (nonatomic) BOOL discretionaryActivity; // @synthesize discretionaryActivity=_discretionaryActivity;
@property (copy, nonatomic) NSDate *executeBefore; // @synthesize executeBefore=_executeBefore;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue; // @synthesize handlerQueue=_handlerQueue;
@property (strong) NSNumber *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) BOOL ioIntensive; // @synthesize ioIntensive=_ioIntensive;
@property double leeway; // @synthesize leeway=_leeway;
@property (nonatomic) BOOL memoryIntensive; // @synthesize memoryIntensive=_memoryIntensive;
@property (strong) CDAttribute *meteringAttribute; // @synthesize meteringAttribute=_meteringAttribute;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) NSString *networkAvailability; // @synthesize networkAvailability=_networkAvailability;
@property int pid; // @synthesize pid=_pid;
@property (strong) NSDate *scheduledTime; // @synthesize scheduledTime=_scheduledTime;
@property (copy, nonatomic) NSDate *startAfter; // @synthesize startAfter=_startAfter;
@property (copy, nonatomic) CDUnknownBlockType startHandler; // @synthesize startHandler=_startHandler;
@property unsigned long long state; // @synthesize state=_state;
@property (copy, nonatomic) CDUnknownBlockType suspendHandler; // @synthesize suspendHandler=_suspendHandler;
@property (nonatomic) BOOL triggersRestart; // @synthesize triggersRestart=_triggersRestart;

+ (id)activityWithName:(id)arg1 startAfter:(id)arg2 executeBefore:(id)arg3 handlerQueue:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (void).cxx_destruct;
- (BOOL)checkForBudget;
- (id)init;
- (id)initWithName:(id)arg1 startAfter:(id)arg2 executeBefore:(id)arg3 handlerQueue:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (void)startBudgetAccounting;
- (void)stopBudgetAccounting;
- (BOOL)updateAttribute;

@end
