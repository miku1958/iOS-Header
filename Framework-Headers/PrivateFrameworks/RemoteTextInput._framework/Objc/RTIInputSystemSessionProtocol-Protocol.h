//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteTextInput/NSObject-Protocol.h>

@class NSString, NSUUID, RTIDocumentState, RTIDocumentTraits;

@protocol RTIInputSystemSessionProtocol <NSObject>
- (oneway void)beginRemoteTextInputSessionWithID:(NSUUID *)arg1 documentTraits:(RTIDocumentTraits *)arg2 initialDocumentState:(RTIDocumentState *)arg3;
- (oneway void)endRemoteTextInputSessionWithID:(NSUUID *)arg1;
- (oneway void)remoteTextInputSessionWithID:(NSUUID *)arg1 documentDidChange:(RTIDocumentState *)arg2;

@optional
- (oneway void)remoteTextInputSessionWithID:(NSUUID *)arg1 didChangePause:(BOOL)arg2 withReason:(NSString *)arg3;
- (oneway void)remoteTextInputSessionWithID:(NSUUID *)arg1 documentTraitsDidChange:(RTIDocumentTraits *)arg2;
@end

