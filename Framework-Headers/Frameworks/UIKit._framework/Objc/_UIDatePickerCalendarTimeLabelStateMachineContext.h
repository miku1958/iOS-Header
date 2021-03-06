//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIDatePickerCalendarTimeLabelStateMachineContext : NSObject
{
    unsigned long long _currentState;
    CDUnknownBlockType _updateHandler;
    BOOL _isFirstResponder;
    unsigned long long _lastDistinctState;
    unsigned long long _previousState;
}

@property (readonly, nonatomic) unsigned long long currentState; // @synthesize currentState=_currentState;
@property (readonly, nonatomic) unsigned long long *currentStateRef;
@property (nonatomic) BOOL isFirstResponder; // @synthesize isFirstResponder=_isFirstResponder;
@property (readonly, nonatomic) unsigned long long lastDistinctState; // @synthesize lastDistinctState=_lastDistinctState;
@property (readonly, nonatomic) unsigned long long previousState; // @synthesize previousState=_previousState;

- (void).cxx_destruct;
- (void)_updateFromState:(unsigned long long)arg1;
- (BOOL)currentSateCanTransitionWithEvents:(id)arg1;
- (id)initWithUpdateHandler:(CDUnknownBlockType)arg1;

@end

