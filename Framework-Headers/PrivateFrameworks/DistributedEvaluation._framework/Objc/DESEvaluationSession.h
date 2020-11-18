//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DistributedEvaluation/NSURLSessionDelegate-Protocol.h>

@class DESRecordSet, DESServiceConnection, NSString, NSURL, NSURLSession;
@protocol DESRecipeEvaluation, OS_dispatch_queue;

@interface DESEvaluationSession : NSObject <NSURLSessionDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    DESServiceConnection *_serviceConnection;
    DESRecordSet *_recordSet;
    NSString *_recipeType;
    NSString *_localeIdentifier;
    NSString *_deviceIdentifier;
    NSURL *_baseURL;
    NSURL *_postbackBaseURL;
    id<DESRecipeEvaluation> _evaluator;
    unsigned long long _recipeCountLimit;
    double _timeLimit;
    BOOL _enableOriginReturnRoute;
    BOOL _enableParsecReturnRoute;
    NSURLSession *_session;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isPFLPlugin;
@property (readonly, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property (readonly) Class superclass;

+ (void)downloadAttachments:(id)arg1 signatures:(id)arg2 certificate:(id)arg3 session:(id)arg4 queue:(id)arg5 completion:(CDUnknownBlockType)arg6;
+ (id)downloadedRecipeWithID:(id)arg1 recipeType:(id)arg2 baseURL:(id)arg3 protocolClass:(Class)arg4 error:(id *)arg5;
+ (void)initialize;
+ (BOOL)verifyAttachment:(id)arg1 attachmentURL:(id)arg2 attachmentSignature:(id)arg3;
- (void).cxx_destruct;
- (void)_attemptRecipeMatchWithRecipes:(id)arg1 keepGoing:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_downloadAttachments:(id)arg1 signatures:(id)arg2 certificate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)_ensureEvaluatorWithError:(id *)arg1;
- (void)_fetchPolicyWithCompletion:(CDUnknownBlockType)arg1;
- (void)_fetchRecipe:(id)arg1 matchingRecordSet:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleRecipeResponse:(id)arg1 recipeId:(id)arg2 matchingRecordSet:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_handleTelemetry:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_originReturnRouteEnabled;
- (BOOL)_parsecReturnRouteEnabled;
- (id)_requestObjectWithJSONResult:(id)arg1 binaryResult:(id)arg2 recipe:(id)arg3 duration:(double)arg4 error:(id)arg5;
- (void)_runJSONGETRequestWithPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_runJSONOrMultipartPOSTRequest:(id)arg1 path:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_runJSONPOSTRequest:(id)arg1 URL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_runJSONPOSTRequest:(id)arg1 path:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_runPOSTRequestWithHTTPBody:(id)arg1 contentType:(id)arg2 URL:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_sendRecipeResponseWithJSONResult:(id)arg1 binaryResult:(id)arg2 recipe:(id)arg3 duration:(double)arg4 error:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)initWithServiceConnection:(id)arg1 baseURL:(id)arg2 recordSet:(id)arg3 recipeType:(id)arg4 localeIdentifier:(id)arg5 deviceIdentifier:(id)arg6 evaluatorOverride:(id)arg7 protocolClass:(Class)arg8;
- (id)initWithServiceConnection:(id)arg1 baseURL:(id)arg2 recordSet:(id)arg3 recipeType:(id)arg4 localeIdentifier:(id)arg5 evaluatorOverride:(id)arg6;
- (id)initWithServiceConnection:(id)arg1 baseURL:(id)arg2 recordSet:(id)arg3 recipeType:(id)arg4 localeIdentifier:(id)arg5 evaluatorOverride:(id)arg6 protocolClass:(Class)arg7;
- (void)invalidate;
- (void)postRecipeResponse:(id)arg1 recipeId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)runWithCompletion:(CDUnknownBlockType)arg1;
- (void)sendRecipeResponseWithJSONResult:(id)arg1 binaryResult:(id)arg2 recipe:(id)arg3 duration:(double)arg4 error:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (BOOL)taskIsDeferred;
- (id)telemetryResponse;

@end
