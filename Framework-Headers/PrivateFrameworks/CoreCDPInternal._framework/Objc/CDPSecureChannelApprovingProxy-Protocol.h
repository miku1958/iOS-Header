//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreCDPInternal/NSObject-Protocol.h>

@protocol CDPSecureChannelApprovingProxy <NSObject>
- (void)listenForPayloadsWithHandler:(void (^)(NSData *, id *, id *))arg1;
- (void)setApproverBackupRecordsExist:(BOOL)arg1;
- (void)setApproveriCloudKeychainState:(unsigned long long)arg1;
@end
