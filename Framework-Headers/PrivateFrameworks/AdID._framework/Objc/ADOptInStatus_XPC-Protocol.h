//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol ADOptInStatus_XPC
- (void)advertisingIdentifierChanged:(void (^)(void))arg1;
- (void)refreshOptInStatusRefreshingWeakToken:(BOOL)arg1 withCompletionHandler:(void (^)(long long))arg2;
- (void)setOptInStatus:(BOOL)arg1 completionHandler:(void (^)(long long))arg2;
@end

