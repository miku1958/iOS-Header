//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKitLegacy/NSObject-Protocol.h>

@protocol WebAllowDenyPolicyListener <NSObject>
- (void)allow;
- (void)deny;
- (void)denyOnlyThisRequest;
- (BOOL)shouldClearCache;
@end

