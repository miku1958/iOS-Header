//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFRemoteExecutionRequest.h>

#import <WorkflowKit/WFPBCodable-Protocol.h>

@class NSDictionary, NSMutableArray, NSString, WFContentCollection, WFRemoteExecutionCoordinator;

@interface WFRemoteExecutionRunRequest : WFRemoteExecutionRequest <WFPBCodable>
{
    NSString *_actionIdentifier;
    NSDictionary *_variables;
    NSDictionary *_serializedParameters;
    NSDictionary *_processedParameters;
    WFContentCollection *_input;
    NSMutableArray *_variablesData;
    NSMutableArray *_inputData;
    NSMutableArray *_processedParametersData;
    WFRemoteExecutionCoordinator *_coordinator;
}

@property (readonly, nonatomic) NSString *actionIdentifier; // @synthesize actionIdentifier=_actionIdentifier;
@property (strong, nonatomic) WFRemoteExecutionCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) WFContentCollection *input; // @synthesize input=_input;
@property (strong, nonatomic) NSMutableArray *inputData; // @synthesize inputData=_inputData;
@property (readonly, nonatomic) NSDictionary *processedParameters; // @synthesize processedParameters=_processedParameters;
@property (strong, nonatomic) NSMutableArray *processedParametersData; // @synthesize processedParametersData=_processedParametersData;
@property (readonly, nonatomic) NSDictionary *serializedParameters; // @synthesize serializedParameters=_serializedParameters;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDictionary *variables; // @synthesize variables=_variables;
@property (strong, nonatomic) NSMutableArray *variablesData; // @synthesize variablesData=_variablesData;

+ (long long)version;
- (void).cxx_destruct;
- (void)inflateInputData:(id)arg1 fileCoordinator:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)inflateProcessedParametersData:(id)arg1 fileCoordinator:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)inflateVariablesData:(id)arg1 fileCoordinator:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)inflateWithFileCoordinator:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithAction:(id)arg1 workflowControllerState:(id)arg2;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (BOOL)readMessageFromData:(id)arg1 error:(id *)arg2;
- (id)writeMessageToWriter:(id)arg1 error:(id *)arg2;

@end
