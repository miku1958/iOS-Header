//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString;

@interface FIUIState : NSObject
{
    NSMutableDictionary *_transitions;
    BOOL _transitional;
    NSString *_label;
    CDUnknownBlockType _entry;
    CDUnknownBlockType _exit;
    FIUIState *_parentState;
    NSMutableSet *_childStates;
    FIUIState *_entryState;
}

@property (readonly, nonatomic) NSMutableSet *childStates; // @synthesize childStates=_childStates;
@property (copy) CDUnknownBlockType entry; // @synthesize entry=_entry;
@property (weak, nonatomic) FIUIState *entryState; // @synthesize entryState=_entryState;
@property (copy) CDUnknownBlockType exit; // @synthesize exit=_exit;
@property (readonly) NSString *label; // @synthesize label=_label;
@property (weak, nonatomic) FIUIState *parentState; // @synthesize parentState=_parentState;
@property (getter=isTransitional) BOOL transitional; // @synthesize transitional=_transitional;

+ (id)stateWithLabel:(id)arg1;
+ (id)transitionalStateFromState:(id)arg1 toState:(id)arg2 entryEvent:(long long)arg3 exitEvent:(long long)arg4;
- (void).cxx_destruct;
- (void)addChildStates:(id)arg1 withEntryState:(id)arg2;
- (id)allTransitions;
- (id)description;
- (void)enumerateEvents:(CDUnknownBlockType)arg1;
- (id)initWithLabel:(id)arg1;
- (void)registerTransition:(long long)arg1 label:(id)arg2 toState:(id)arg3;
- (void)registerTransition:(long long)arg1 label:(id)arg2 toState:(id)arg3 handler:(CDUnknownBlockType)arg4 gate:(CDUnknownBlockType)arg5;
- (id)transitionForEvent:(long long)arg1;

@end
