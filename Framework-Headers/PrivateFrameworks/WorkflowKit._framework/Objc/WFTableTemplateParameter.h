//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFParameter.h>

@interface WFTableTemplateParameter : WFParameter
{
    Class _contentItemClass;
}

@property (readonly, copy, nonatomic) id additionalRowSerializedRepresentation;
@property (readonly, nonatomic) Class contentItemClass; // @synthesize contentItemClass=_contentItemClass;

- (void).cxx_destruct;
- (id)defaultSerializedRepresentation;
- (id)defaultSupportedVariableTypes;
- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;
- (BOOL)supportsImportQuestions;

@end
