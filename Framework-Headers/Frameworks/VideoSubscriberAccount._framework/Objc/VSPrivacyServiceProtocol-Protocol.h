//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoSubscriberAccount/NSObject-Protocol.h>

@class NSString;

@protocol VSPrivacyServiceProtocol <NSObject>
- (void)preflightCheckForProcessIdentifier:(int)arg1 withCompletionHandler:(void (^)(unsigned long long))arg2;
- (void)requestAccessForAuditToken:(CDStruct_4c969caf)arg1 processIdentifier:(int)arg2 identityProviderDisplayName:(NSString *)arg3 identityProviderID:(NSString *)arg4 allowUI:(BOOL)arg5 completionHandler:(void (^)(unsigned long long, VSOptional *))arg6;
@end

