//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVisibilityMonitoring-Protocol.h>
#import <SilexVideo/SVVisibilityReporting-Protocol.h>

@class NFStateMachine, NFStateMachineState, NSMutableArray, NSString;
@protocol SVVisiblePercentageProviding;

@interface SVVisibilityMonitor : NSObject <SVVisibilityReporting, SVVisibilityMonitoring>
{
    BOOL _appeared;
    double _visiblePercentage;
    id _object;
    unsigned long long _state;
    id<SVVisiblePercentageProviding> _visiblePercentageProvider;
    NFStateMachine *_stateMachine;
    NFStateMachineState *_appearingState;
    NFStateMachineState *_appearedState;
    NFStateMachineState *_disappearingState;
    NFStateMachineState *_disappearedState;
    NSMutableArray *_willAppearBlocks;
    NSMutableArray *_didAppearBlocks;
    NSMutableArray *_visiblePercentageBlocks;
    NSMutableArray *_willDisappearBlocks;
    NSMutableArray *_didDisappearBlocks;
    long long _lockCount;
}

@property (readonly, nonatomic) BOOL appeared; // @synthesize appeared=_appeared;
@property (readonly, nonatomic) NFStateMachineState *appearedState; // @synthesize appearedState=_appearedState;
@property (readonly, nonatomic) NFStateMachineState *appearingState; // @synthesize appearingState=_appearingState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMutableArray *didAppearBlocks; // @synthesize didAppearBlocks=_didAppearBlocks;
@property (readonly, nonatomic) NSMutableArray *didDisappearBlocks; // @synthesize didDisappearBlocks=_didDisappearBlocks;
@property (readonly, nonatomic) NFStateMachineState *disappearedState; // @synthesize disappearedState=_disappearedState;
@property (readonly, nonatomic) NFStateMachineState *disappearingState; // @synthesize disappearingState=_disappearingState;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long lockCount; // @synthesize lockCount=_lockCount;
@property (readonly, nonatomic) BOOL locked;
@property (readonly, weak, nonatomic) id object; // @synthesize object=_object;
@property (nonatomic) unsigned long long state; // @synthesize state=_state;
@property (readonly, nonatomic) NFStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property (readonly) Class superclass;
@property (nonatomic) double visiblePercentage; // @synthesize visiblePercentage=_visiblePercentage;
@property (readonly, nonatomic) NSMutableArray *visiblePercentageBlocks; // @synthesize visiblePercentageBlocks=_visiblePercentageBlocks;
@property (readonly, nonatomic) id<SVVisiblePercentageProviding> visiblePercentageProvider; // @synthesize visiblePercentageProvider=_visiblePercentageProvider;
@property (readonly, nonatomic) NSMutableArray *willAppearBlocks; // @synthesize willAppearBlocks=_willAppearBlocks;
@property (readonly, nonatomic) NSMutableArray *willDisappearBlocks; // @synthesize willDisappearBlocks=_willDisappearBlocks;

- (void).cxx_destruct;
- (void)determineVisiblePercentage;
- (void)didAppear;
- (void)didDisappear;
- (id)initWithObject:(id)arg1 visiblePercentageProvider:(id)arg2;
- (void)lock;
- (void)onDidAppear:(CDUnknownBlockType)arg1;
- (void)onDidDisappear:(CDUnknownBlockType)arg1;
- (void)onVisiblePercentageChange:(CDUnknownBlockType)arg1;
- (void)onWillAppear:(CDUnknownBlockType)arg1;
- (void)onWillDisappear:(CDUnknownBlockType)arg1;
- (void)unlock;
- (void)updateVisibility;
- (void)willAppear;
- (void)willDisappear;

@end

