//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFQuantityFieldParameter.h>

#import <ActionKit/WFActionEventObserver-Protocol.h>

@class HKQuantityType, NSArray, NSString, WFAction;

@interface WFHealthQuantityFieldParameter : WFQuantityFieldParameter <WFActionEventObserver>
{
    NSArray *_possibleUnits;
    HKQuantityType *_quantityType;
    WFAction *_action;
}

@property (weak, nonatomic) WFAction *action; // @synthesize action=_action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) HKQuantityType *quantityType; // @synthesize quantityType=_quantityType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2;
- (void)attributesDidChange;
- (BOOL)isHidden;
- (id)localizedLabel;
- (id)localizedLabelForPossibleUnit:(id)arg1 magnitude:(id)arg2 style:(unsigned long long)arg3;
- (id)possibleUnits;
- (void)setPossibleUnits:(id)arg1;
- (void)updatePossibleUnits;
- (void)wasAddedToWorkflow;
- (void)wasRemovedFromWorkflow;

@end
