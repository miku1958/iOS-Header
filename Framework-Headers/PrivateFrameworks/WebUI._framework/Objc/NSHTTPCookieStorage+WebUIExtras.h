//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CFNetwork/NSHTTPCookieStorage.h>

@interface NSHTTPCookieStorage (WebUIExtras)

@property (readonly) unsigned long long webui_safariCookieAcceptPolicyEnumValue;
@property (readonly) BOOL webui_trackerProtectionEnabled;

- (float)_safariCookieAcceptPolicyFloatValue;
- (void)webui_applySafariCookieAcceptPolicy;
- (id)webui_safariCookieAcceptPolicy;
@end

