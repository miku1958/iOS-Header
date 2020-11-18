//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSFormAutoFillFeedbackProcessor-Protocol.h>

@class NSString, WBSFormAutoFillCorrectionsDomainNormalizer;
@protocol WBSFormAutoFillFeedbackDomainPolicyProvider, WBSParsecGlobalFeedbackDispatcher;

@interface WBSFormAutoFillParsecFeedbackProcessor : NSObject <WBSFormAutoFillFeedbackProcessor>
{
    id<WBSParsecGlobalFeedbackDispatcher> _globalFeedbackDispatcher;
    unsigned long long _autoFillVersion;
    WBSFormAutoFillCorrectionsDomainNormalizer *_domainNormalizer;
    id<WBSFormAutoFillFeedbackDomainPolicyProvider> _domainPolicyProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) id<WBSFormAutoFillFeedbackDomainPolicyProvider> domainPolicyProvider; // @synthesize domainPolicyProvider=_domainPolicyProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_feedbackWithCorrections:(id)arg1 forFingerprint:(id)arg2 onDomain:(id)arg3 includeOrigin:(BOOL)arg4;
- (void)_getFeedbackWithCorrections:(id)arg1 forFingerprint:(id)arg2 onDomain:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)init;
- (id)initWithGlobalFeedbackDispatcher:(id)arg1 domainPolicyProvider:(id)arg2 autoFillVersion:(unsigned long long)arg3;
- (void)sendFeedbackWithCorrections:(id)arg1 forFingerprint:(id)arg2 onDomain:(id)arg3;

@end

