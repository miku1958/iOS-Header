//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantUI/NSObject-Protocol.h>

@class AFUIStateMachine, NSString;

@protocol AFUIStateMachineDelegate <NSObject>
- (void)stateMachine:(AFUIStateMachine *)arg1 didTransitionFromState:(long long)arg2 forEvent:(long long)arg3;

@optional
- (NSString *)stateMachine:(AFUIStateMachine *)arg1 descriptionForEvent:(long long)arg2;
@end

