//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKDatabaseOperation.h>

@class NSData, NSError, NSString;

@interface CKCodeFunctionInvokeOperation : CKDatabaseOperation
{
    CDUnknownBlockType _functionInvokeCompletionBlock;
    NSString *_serviceName;
    NSString *_functionName;
    NSData *_serializedParameters;
    NSData *_serializedResponse;
    NSError *_reponseError;
}

@property (copy, nonatomic) CDUnknownBlockType functionInvokeCompletionBlock; // @synthesize functionInvokeCompletionBlock=_functionInvokeCompletionBlock;
@property (copy, nonatomic) NSString *functionName; // @synthesize functionName=_functionName;
@property (strong, nonatomic) NSError *reponseError; // @synthesize reponseError=_reponseError;
@property (copy, nonatomic) NSData *serializedParameters; // @synthesize serializedParameters=_serializedParameters;
@property (copy, nonatomic) NSData *serializedResponse; // @synthesize serializedResponse=_serializedResponse;
@property (copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;

- (void).cxx_destruct;
- (BOOL)CKOperationShouldRun:(id *)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id)activityCreate;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (BOOL)hasCKOperationCallbacksSet;
- (id)initWithServiceName:(id)arg1 functionName:(id)arg2 serializedParameters:(id)arg3;
- (void)performCKOperation;

@end
