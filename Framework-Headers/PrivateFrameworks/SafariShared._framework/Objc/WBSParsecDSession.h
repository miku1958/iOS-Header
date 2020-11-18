//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/PARSessionDelegate-Protocol.h>
#import <SafariShared/WBSParsecSearchSession-Protocol.h>

@class GEOUserSessionEntity, NSString, PARSession, WBSCompletionQuery, WBSParsecDFeedbackDispatcher;
@protocol OS_dispatch_queue, WBSParsecFeedbackDispatcher, WBSParsecSearchSessionDelegate;

@interface WBSParsecDSession : NSObject <PARSessionDelegate, WBSParsecSearchSession>
{
    NSObject<OS_dispatch_queue> *_requestProcessingQueue;
    WBSParsecDFeedbackDispatcher *_feedbackDispatcher;
    long long _currentQueryID;
    GEOUserSessionEntity *_geoUserSessionEntity;
    BOOL _valid;
    id<WBSParsecSearchSessionDelegate> _delegate;
    WBSCompletionQuery *_currentQuery;
    double _uiScale;
    PARSession *_parsecdSession;
}

@property (strong, nonatomic) WBSCompletionQuery *currentQuery; // @synthesize currentQuery=_currentQuery;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<WBSParsecSearchSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id<WBSParsecFeedbackDispatcher> feedbackDispatcher;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) PARSession *parsecdSession; // @synthesize parsecdSession=_parsecdSession;
@property (readonly) Class superclass;
@property (nonatomic, setter=setUIScale:) double uiScale; // @synthesize uiScale=_uiScale;
@property (readonly, nonatomic, getter=isValid) BOOL valid; // @synthesize valid=_valid;

+ (id)sharedCorrectionsProcessor;
+ (id)sharedDomainPolicyProvider;
+ (id)sharedPARSession;
+ (BOOL)shouldUseSearchFoundation;
- (void).cxx_destruct;
- (void)_didReceiveResponse:(id)arg1 error:(id)arg2 forTask:(id)arg3 query:(id)arg4;
- (id)_parsecResultsFromRawResponse:(id)arg1 identifiersToSFSearchResults:(id)arg2 identifiersToSFResultSections:(id)arg3;
- (id)_parsecResultsFromResponse:(id)arg1;
- (void)_updateAutoFillCorrectionSetsIfNeededFromNewBag:(id)arg1;
- (void)_updateAutoFillTLDsIfNeededFromNewBag:(id)arg1;
- (void)fetchCardDetailsForResult:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithParsecdSession:(id)arg1;
- (void)session:(id)arg1 bag:(id)arg2 didLoadWithError:(id)arg3;

@end

