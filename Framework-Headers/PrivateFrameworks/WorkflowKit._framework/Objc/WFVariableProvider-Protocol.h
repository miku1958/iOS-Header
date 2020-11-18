//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/NSObject-Protocol.h>

@class NSArray, NSOrderedSet, NSString, WFAction;
@protocol WFOutputTraversalContext, WFVariableObserver;

@protocol WFVariableProvider <NSObject>

@property (readonly, nonatomic) NSArray *availableOutputActions;
@property (readonly, nonatomic) NSArray *availableVariableNames;
@property (readonly, nonatomic) NSArray *workflowInputClasses;

- (WFAction *)actionProvidingVariableWithOutputUUID:(NSString *)arg1;
- (NSArray *)actionsProvidingVariableName:(NSString *)arg1;
- (void)addVariableObserver:(id<WFVariableObserver>)arg1;
- (BOOL)hasAvailableActionOutputVariables;
- (BOOL)hasAvailableVariables;
- (BOOL)isVariableWithNameAvailable:(NSString *)arg1;
- (BOOL)isVariableWithOutputUUIDAvailable:(NSString *)arg1;
- (NSOrderedSet *)possibleContentClassesForVariableNamed:(NSString *)arg1 context:(id<WFOutputTraversalContext>)arg2;
- (void)removeVariableObserver:(id<WFVariableObserver>)arg1;
@end
