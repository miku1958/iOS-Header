//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray;

@interface WFAccountPickerParameter : WFEnumerationParameter
{
    NSArray *_possibleStates;
    Class _accountClass;
    id _observer;
}

@property (readonly, nonatomic) Class accountClass; // @synthesize accountClass=_accountClass;
@property (readonly, nonatomic) id observer; // @synthesize observer=_observer;
@property (readonly, nonatomic) NSArray *possibleStates; // @synthesize possibleStates=_possibleStates;

- (void).cxx_destruct;
- (id)accountWithName:(id)arg1;
- (void)dealloc;
- (id)defaultSerializedRepresentation;
- (id)initWithDefinition:(id)arg1;
- (BOOL)isHidden;
- (id)localizedLabelForPossibleState:(id)arg1;
- (void)possibleStatesDidChange;
- (void)wasAddedToWorkflow;

@end
