//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFCustomIntentDynamicEnumerationParameter.h>

@interface WFCustomIntentDynamicEnumerationParameter (WFModuleSummarySupporting)
- (BOOL)moduleSummaryShowsAddButtonForState:(id)arg1;
- (id)moduleSummarySlotsForState:(id)arg1;
- (BOOL)wf_allowsMulipleSelection;
- (id)wf_displayLocalizedPrompt;
- (void)wf_loadStatesWithSearchTerm:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)wf_pickerLocalizedImageForState:(id)arg1;
- (id)wf_pickerLocalizedSubtitleForState:(id)arg1;
- (id)wf_pickerLocalizedTitleForState:(id)arg1;
- (void)wf_reloadFromAttributesDidChangeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)wf_shouldValidateCurrentStateOnCollectionChanged;
- (BOOL)wf_supportsSearch;
@end

