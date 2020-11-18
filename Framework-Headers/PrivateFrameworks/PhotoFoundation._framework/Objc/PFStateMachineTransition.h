//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PFStateMachineTransition : NSObject
{
    NSString *_eventName;
    NSString *_destinationName;
    CDUnknownBlockType _action;
}

@property (readonly) NSString *destinationName; // @synthesize destinationName=_destinationName;
@property (readonly) NSString *eventName; // @synthesize eventName=_eventName;

+ (id)returnTransitionOn:(id)arg1;
+ (id)transitionOn:(id)arg1 subflow:(id)arg2 to:(id)arg3;
+ (id)transitionOn:(id)arg1 to:(id)arg2;
+ (id)transitionOn:(id)arg1 to:(id)arg2 action:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (id)_dotReachableNodes:(id)arg1;
- (id)description;
- (id)destination:(id)arg1;
- (id)dot:(id)arg1 prefix:(id)arg2 graph:(id)arg3;
- (id)initWithEventName:(id)arg1 to:(id)arg2 action:(CDUnknownBlockType)arg3;
- (void)performAction:(id)arg1;
- (void)setAction:(CDUnknownBlockType)arg1;

@end

