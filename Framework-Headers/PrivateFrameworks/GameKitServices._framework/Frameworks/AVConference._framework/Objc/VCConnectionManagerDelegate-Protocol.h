//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/NSObject-Protocol.h>

@protocol VCConnectionProtocol;

@protocol VCConnectionManagerDelegate <NSObject>
- (void)connectionCallback:(id<VCConnectionProtocol>)arg1 isInitialConnection:(BOOL)arg2;
- (void)didEnableDuplication:(BOOL)arg1 activeConnection:(id<VCConnectionProtocol>)arg2;
- (void)primaryConnectionChanged:(id<VCConnectionProtocol>)arg1 oldPrimaryConnection:(id<VCConnectionProtocol>)arg2;

@optional
- (void)discardConnection:(id<VCConnectionProtocol>)arg1;
@end

