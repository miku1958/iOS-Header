//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/NSObject-Protocol.h>

@class PKPushPayload;

@protocol CKPKPushRegistryDelegate <NSObject>
- (void)didReceiveIncomingPushWithPayload:(PKPushPayload *)arg1 withCompletionHandler:(void (^)(void))arg2;
@end

