//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKit/NSObject-Protocol.h>

@class NSString, NSURL;

@protocol SKUIServiceAccountPageViewController <NSObject>
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)loadWithURL:(NSURL *)arg1;
- (void)performRedeemOperationWithCode:(NSString *)arg1 cameraRecognized:(BOOL)arg2 completion:(void (^)(SKUIRedeem *, NSError *))arg3;
@end

