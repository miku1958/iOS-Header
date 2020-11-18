//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFQuantityFieldParameter.h>

#import <ActionKit/WFActionEventObserver-Protocol.h>

@class NSArray, NSString, WFAction;

@interface WFWorkoutGoalQuantityFieldParameter : WFQuantityFieldParameter <WFActionEventObserver>
{
    NSArray *_possibleUnits;
    id _defaultSerializedRepresentation;
    WFAction *_action;
}

@property (weak, nonatomic) WFAction *action; // @synthesize action=_action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)unitConversion;
- (void).cxx_destruct;
- (void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2;
- (void)availableUnitsForWorkoutActivityType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)currentWorkoutActivityType;
- (id)defaultSerializedRepresentation;
- (id)defaultState;
- (id)localizedLabelForPossibleUnit:(id)arg1 magnitude:(id)arg2 style:(unsigned long long)arg3;
- (BOOL)parameterStateIsValid:(id)arg1;
- (id)possibleUnits;
- (void)setPossibleUnits:(id)arg1;
- (void)updateCurrentStateWithNewUnitString:(id)arg1 currentState:(id)arg2;
- (void)updatePossibleUnits;
- (void)wasAddedToWorkflow;
- (void)wasRemovedFromWorkflow;

@end
