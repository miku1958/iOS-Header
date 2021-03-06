//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSFormAutoFillFeedbackDomainPolicyProvider-Protocol.h>

@class NSString;
@protocol WBSCrowdsourcedFeedbackAllowList;

@interface WBSFormAutoFillParsecDomainPolicyProvider : NSObject <WBSFormAutoFillFeedbackDomainPolicyProvider>
{
    id<WBSCrowdsourcedFeedbackAllowList> _feedbackAllowList;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)autoFillFeedbackProcessor:(id)arg1 determineWhetherToSendFeedbackForDomain:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)getLastPolicyRetrievalURLStringWithResultHandler:(CDUnknownBlockType)arg1;
- (id)initWithFeedbackAllowList:(id)arg1;
- (void)setPoliciesWithJSONData:(id)arg1 retrievalURLString:(id)arg2;

@end

