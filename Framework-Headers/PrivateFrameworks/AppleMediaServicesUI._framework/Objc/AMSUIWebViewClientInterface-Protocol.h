//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSData, NSString;

@protocol AMSUIWebViewClientInterface
- (void)frameFinishedLoading;
- (void)receiveJSObject:(NSData *)arg1 logKey:(NSString *)arg2 completion:(void (^)(NSData *, NSError *))arg3;
- (void)webPlugInDidCreateContext;
- (void)webPlugInWillDestroyContext;
@end

