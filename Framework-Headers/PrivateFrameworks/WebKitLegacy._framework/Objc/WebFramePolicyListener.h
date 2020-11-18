//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKitLegacy/WebFormSubmissionListener-Protocol.h>
#import <WebKitLegacy/WebPolicyDecisionListener-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebFramePolicyListener : NSObject <WebPolicyDecisionListener, WebFormSubmissionListener>
{
    struct RefPtr<WebCore::Frame> _frame;
    function_9acd5659 _policyFunction;
    struct RetainPtr<NSURL> _appLinkURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)continue;
- (void)dealloc;
- (void)download;
- (void)ignore;
- (id)initWithFrame:(struct Frame *)arg1 policyFunction:(function_9acd5659)arg2;
- (id)initWithFrame:(struct Frame *)arg1 policyFunction:(function_9acd5659)arg2 appLinkURL:(id)arg3;
- (void)invalidate;
- (void)receivedPolicyDecision:(int)arg1;
- (void)use;

@end

