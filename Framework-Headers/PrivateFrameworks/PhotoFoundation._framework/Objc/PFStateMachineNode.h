//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface PFStateMachineNode : NSObject
{
    NSString *_name;
    NSMutableDictionary *_transitions;
    CDUnknownBlockType _action;
}

@property (readonly) NSString *name; // @synthesize name=_name;

+ (id)nodeWithName:(id)arg1;
- (void).cxx_destruct;
- (id)_dotReachableNodes:(id)arg1 graph:(id)arg2;
- (id)addReturnTransitionOn:(id)arg1;
- (id)addTransition:(id)arg1;
- (id)addTransitionOn:(id)arg1 subflow:(id)arg2 to:(id)arg3;
- (id)addTransitionOn:(id)arg1 to:(id)arg2;
- (id)description;
- (id)dot:(id)arg1 prefix:(id)arg2 graph:(id)arg3;
- (id)initWithName:(id)arg1;
- (id)performAction:(id)arg1;
- (void)setAction:(CDUnknownBlockType)arg1;
- (id)transitionForEventName:(id)arg1;

@end

