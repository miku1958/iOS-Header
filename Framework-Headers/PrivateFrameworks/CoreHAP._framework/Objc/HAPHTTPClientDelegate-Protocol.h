//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHAP/NSObject-Protocol.h>

@class HAPHTTPClient;

@protocol HAPHTTPClientDelegate <NSObject>
- (void)httpClient:(HAPHTTPClient *)arg1 didReceiveEvent:(id)arg2;
- (void)httpClientDidCloseConnectionDueToServer:(HAPHTTPClient *)arg1;
@end

