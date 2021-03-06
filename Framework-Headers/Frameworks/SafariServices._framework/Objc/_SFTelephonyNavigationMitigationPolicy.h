//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;
@protocol _SFDialogPresenting;

@interface _SFTelephonyNavigationMitigationPolicy : NSObject
{
    long long _classification;
    NSDate *_dateUserLastDeclined;
    id<_SFDialogPresenting> _dialogPresenter;
}

@property (weak, nonatomic) id<_SFDialogPresenting> dialogPresenter; // @synthesize dialogPresenter=_dialogPresenter;

+ (double)test_suspiciousClassificationExpirationDuration;
- (void).cxx_destruct;
- (void)_checkIfSuspiciousClassificationHasExpiredAndTransitionIfNeeded;
- (void)_handleInput:(long long)arg1;
- (void)handleNavigationToURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)policyAppliesToURL:(id)arg1;
- (void)userAcceptedCallPrompt;
- (void)userDeclinedCallPrompt;

@end

