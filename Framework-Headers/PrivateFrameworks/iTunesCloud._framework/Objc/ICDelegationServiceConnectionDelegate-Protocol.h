//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesCloud/NSObject-Protocol.h>

@class ICDelegationServiceConnection, ICPBDGSRequest, NSError;

@protocol ICDelegationServiceConnectionDelegate <NSObject>

@optional
- (void)delegationServiceConnection:(ICDelegationServiceConnection *)arg1 didEncouterError:(NSError *)arg2;
- (BOOL)delegationServiceConnection:(ICDelegationServiceConnection *)arg1 didReceiveRequest:(ICPBDGSRequest *)arg2;
- (void)delegationServiceConnectionDidClose:(ICDelegationServiceConnection *)arg1;
@end

