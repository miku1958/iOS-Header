//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/NSObject-Protocol.h>

@class NSDictionary, NSString;
@protocol WBSFormAutoFillFeedbackDomainPolicyProvider;

@protocol WBSFormAutoFillFeedbackProcessor <NSObject>

@property (strong, nonatomic) id<WBSFormAutoFillFeedbackDomainPolicyProvider> domainPolicyProvider;

- (void)sendFeedbackWithCorrections:(NSDictionary *)arg1 forFingerprint:(NSString *)arg2 onDomain:(NSString *)arg3;
@end
