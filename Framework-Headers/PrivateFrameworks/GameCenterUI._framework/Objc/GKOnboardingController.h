//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol GKOnboardingFlowDelegate;

@interface GKOnboardingController : NSObject
{
    id<GKOnboardingFlowDelegate> _delegate;
}

@property (weak, nonatomic) id<GKOnboardingFlowDelegate> delegate; // @synthesize delegate=_delegate;

+ (id)shared;
- (void).cxx_destruct;
- (BOOL)didShowPrivacyNotice;
- (unsigned long long)getPrivacyNoticeVersion;
- (void)presentPersonalizationScreen:(id)arg1;
- (void)presentProfilePrivacyScreen:(id)arg1;
- (void)presentViewController:(id)arg1 presentingViewController:(id)arg2;

@end

