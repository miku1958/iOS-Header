//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoRegistry/NSObject-Protocol.h>

@class NRTermsEvent, NSUUID;

@protocol NRTermsAcknowledgementRegistry <NSObject>
- (void)add:(NRTermsEvent *)arg1 forDeviceID:(NSUUID *)arg2 withCompletion:(void (^)(NSError *))arg3;
- (void)checkForAcknowledgement:(NRTermsEvent *)arg1 forDeviceID:(NSUUID *)arg2 withCompletion:(void (^)(BOOL, NSError *))arg3;
@end

