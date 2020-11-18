//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AXMediaUtilities/NSSecureCoding-Protocol.h>

@class AXMDiagnosticMetricToken, AXMDiagnostics, AXMPipelineContextInput, AXMSequenceRequestManager, AXMVisionAnalysisOptions, AXMVisionResult, NSArray, NSDictionary, NSError, NSMutableArray, NSMutableSet, NSNumber, VNImageRequestHandler, VNSceneObservation;
@protocol NSCopying, NSSecureCoding, OS_dispatch_queue;

@interface AXMVisionPipelineContext : NSObject <NSSecureCoding>
{
    AXMPipelineContextInput *_sourceInput;
    NSDictionary *_sourceParameters;
    BOOL _sourceProvidesOwnResults;
    NSMutableArray *_resultHandlers;
    AXMDiagnosticMetricToken *_processingDiagnosticToken;
    VNSceneObservation *_sceneObservation;
    NSObject<OS_dispatch_queue> *_sceneObservationQueue;
    BOOL _shouldProcessRemotely;
    BOOL _shouldCallCompletionHandlersForEngineBusyError;
    BOOL _shouldCallCompletionHandlersForEmptyResultSet;
    BOOL _evaluationExclusivelyUsesVisionFramework;
    NSError *_error;
    AXMVisionAnalysisOptions *_analysisOptions;
    long long _imageRegistrationState;
    NSObject<NSSecureCoding> *_userContext;
    id<NSCopying> _cacheKey;
    unsigned long long _sequenceID;
    AXMDiagnostics *_diagnostics;
    NSMutableArray *_features;
    NSMutableSet *_evaluatedFeatureTypes;
    AXMVisionResult *_result;
    NSNumber *_appliedImageOrientation;
    VNImageRequestHandler *_visionImageRequestHandler;
    AXMSequenceRequestManager *_sequenceRequestManager;
}

@property (strong, nonatomic) AXMVisionAnalysisOptions *analysisOptions; // @synthesize analysisOptions=_analysisOptions;
@property (strong, nonatomic) NSNumber *appliedImageOrientation; // @synthesize appliedImageOrientation=_appliedImageOrientation;
@property (strong, nonatomic) id<NSCopying> cacheKey; // @synthesize cacheKey=_cacheKey;
@property (strong, nonatomic) AXMDiagnostics *diagnostics; // @synthesize diagnostics=_diagnostics;
@property (strong, nonatomic) NSError *error; // @synthesize error=_error;
@property (strong, nonatomic) NSMutableSet *evaluatedFeatureTypes; // @synthesize evaluatedFeatureTypes=_evaluatedFeatureTypes;
@property (nonatomic) BOOL evaluationExclusivelyUsesVisionFramework; // @synthesize evaluationExclusivelyUsesVisionFramework=_evaluationExclusivelyUsesVisionFramework;
@property (strong, nonatomic) NSMutableArray *features; // @synthesize features=_features;
@property (nonatomic) long long imageRegistrationState; // @synthesize imageRegistrationState=_imageRegistrationState;
@property (strong, nonatomic) AXMVisionResult *result; // @synthesize result=_result;
@property (readonly, nonatomic) NSArray *resultHandlers;
@property (nonatomic) unsigned long long sequenceID; // @synthesize sequenceID=_sequenceID;
@property (strong, nonatomic) AXMSequenceRequestManager *sequenceRequestManager; // @synthesize sequenceRequestManager=_sequenceRequestManager;
@property (nonatomic) BOOL shouldCallCompletionHandlersForEmptyResultSet; // @synthesize shouldCallCompletionHandlersForEmptyResultSet=_shouldCallCompletionHandlersForEmptyResultSet;
@property (nonatomic) BOOL shouldCallCompletionHandlersForEngineBusyError; // @synthesize shouldCallCompletionHandlersForEngineBusyError=_shouldCallCompletionHandlersForEngineBusyError;
@property (nonatomic) BOOL shouldProcessRemotely; // @synthesize shouldProcessRemotely=_shouldProcessRemotely;
@property (readonly, nonatomic) struct CGSize size;
@property (readonly, nonatomic) AXMPipelineContextInput *sourceInput;
@property (readonly, nonatomic) BOOL sourceProvidesResults;
@property (strong, nonatomic) NSObject<NSSecureCoding> *userContext; // @synthesize userContext=_userContext;
@property (strong, nonatomic) VNImageRequestHandler *visionImageRequestHandler; // @synthesize visionImageRequestHandler=_visionImageRequestHandler;
@property (readonly, nonatomic) BOOL visionImageRequestHandlerIsLoaded;

+ (id)contextWithSourceParameters:(id)arg1 options:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_commonInit;
- (id)_makeRequestHandlerForInput:(id)arg1 options:(id)arg2;
- (void)addEvaluatedFeatureType:(unsigned long long)arg1;
- (void)addResultHandler:(CDUnknownBlockType)arg1;
- (void)addResultHandlers:(id)arg1;
- (void)appendFeature:(id)arg1;
- (void)createSceneObservationIfNilWithBlock:(CDUnknownBlockType)arg1;
- (id)description;
- (void)didFinishProcessingContext;
- (void)encodeWithCoder:(id)arg1;
- (void)errorOccurred:(id)arg1;
- (id)generateFileNameForImageWithPrefix:(id)arg1 extension:(id)arg2;
- (id)generateImageRepresentation;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceParameters:(id)arg1 options:(id)arg2;
- (void)produceImage:(CDUnknownBlockType)arg1;
- (id)sceneObservation;
- (id)visionImageRequestHandlerWithOptions:(id)arg1;
- (void)willBeginProcessingContext;

@end
