//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceShortcutsUICardKitProviderSupport/NSObject-Protocol.h>

@class SUICProgressStateMachine;

@protocol SUICProgressStateMachineObserving <NSObject>
- (void)progressStateMachine:(SUICProgressStateMachine *)arg1 didTransitionToState:(unsigned long long)arg2 fromState:(unsigned long long)arg3 forEvent:(unsigned long long)arg4;
- (void)progressStateMachine:(SUICProgressStateMachine *)arg1 ignoredEvent:(unsigned long long)arg2;
@end
