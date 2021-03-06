//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAction.h>

@class ICAction, NSArray;

@interface WFInterchangeAction : WFAction
{
    ICAction *_interchangeAction;
    NSArray *_contentClasses;
}

@property (strong, nonatomic) NSArray *contentClasses; // @synthesize contentClasses=_contentClasses;
@property (readonly, nonatomic) ICAction *interchangeAction; // @synthesize interchangeAction=_interchangeAction;
@property (readonly, nonatomic) BOOL requiresCallback;

- (void).cxx_destruct;
- (id)app;
- (BOOL)callbackIsCurrentlyDisabled;
- (id)categories;
- (id)creationDate;
- (id)description;
- (id)descriptionDictionary;
- (id)disabledPlatformsForInterchangeActionWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3;
- (id)initWithInterchangeAction:(id)arg1 identifier:(id)arg2 definition:(id)arg3 serializedParameters:(id)arg4;
- (id)initWithInterchangeAction:(id)arg1 serializedParameters:(id)arg2;
- (id)inputContentClasses;
- (id)inputParameterKey;
- (BOOL)inputPassthrough;
- (BOOL)inputRequired;
- (BOOL)inputsMultipleItems;
- (BOOL)isDiscontinued;
- (BOOL)isDiscoverable;
- (id)keywords;
- (id)lastModifiedDate;
- (BOOL)mappedValueIsTrue:(id)arg1 forContentMapping:(id)arg2;
- (id)name;
- (BOOL)neverSuggested;
- (id)outputContentClasses;
- (BOOL)outputsMultipleItems;
- (id)parameterSummary;
- (void)performActionWithInput:(id)arg1 parameters:(id)arg2 userInterface:(id)arg3 successHandler:(CDUnknownBlockType)arg4 errorHandler:(CDUnknownBlockType)arg5;
- (id)requiredResources;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)shortName;
- (BOOL)shouldSuppressCallback;
- (BOOL)skipsProcessingHiddenParameters;
- (id)specifiedInputContentClasses;
- (id)specifiedOutputContentClasses;
- (id)subcategoryForCategory:(id)arg1;
- (id)userInterfaceTypes;

@end

