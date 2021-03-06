//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFParameter.h>

#import <WorkflowKit/WFParameterDialogProvider-Protocol.h>

@class NSArray, NSString;

@interface WFEnumerationParameter : WFParameter <WFParameterDialogProvider>
{
    BOOL _alwaysShowsButton;
    BOOL _liveUpdatesPossibleStatesInEditor;
    NSArray *_staticPossibleStates;
    NSArray *_displayNames;
}

@property (readonly, nonatomic) BOOL alwaysShowsButton; // @synthesize alwaysShowsButton=_alwaysShowsButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *displayNames; // @synthesize displayNames=_displayNames;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL hidesAccessoryIconInEditor;
@property (readonly, nonatomic) BOOL hidesSubtitleInEditor;
@property (readonly, nonatomic) BOOL liveUpdatesPossibleStatesInEditor; // @synthesize liveUpdatesPossibleStatesInEditor=_liveUpdatesPossibleStatesInEditor;
@property (readonly, nonatomic) NSArray *possibleStates;
@property (readonly, nonatomic) NSArray *possibleStatesForLocalization;
@property (readonly, nonatomic) BOOL preferParameterValuePicker;
@property (readonly, nonatomic) NSArray *staticPossibleStates; // @synthesize staticPossibleStates=_staticPossibleStates;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accessoryColorForPossibleState:(id)arg1;
- (id)accessoryIconForPossibleState:(id)arg1;
- (void)createDialogRequestWithAttribution:(id)arg1 defaultState:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)displaysMultipleValueEditor;
- (id)initWithDefinition:(id)arg1;
- (id)localizedLabelForMultipleCompleteState:(id)arg1;
- (id)localizedLabelForMultipleState:(id)arg1;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)localizedLabelForPossibleState:(id)arg1 inMultipleState:(id)arg2;
- (id)localizedSubtitleLabelForPossibleState:(id)arg1;
- (id)localizedTitleForButtonWithState:(id)arg1;
- (id)parameterStateFromDialogResponse:(id)arg1;
- (BOOL)parameterStateIsValid:(id)arg1;
- (void)possibleStatesDidChange;
- (void)setPossibleStatesFromRemoteSource:(id)arg1;
- (Class)singleStateClass;
- (void)startLiveUpdatingPossibleStates;
- (void)stopLiveUpdatingPossibleStates;

@end

