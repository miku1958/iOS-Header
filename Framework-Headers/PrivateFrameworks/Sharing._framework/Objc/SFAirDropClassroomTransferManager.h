//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Sharing/SFXPCClient.h>

#import <Sharing/SFAirDropClassroomTransferManagerProtocol-Protocol.h>

@class NSString;
@protocol SFAirDropClassroomTransferDelegate;

@interface SFAirDropClassroomTransferManager : SFXPCClient <SFAirDropClassroomTransferManagerProtocol>
{
    id<SFAirDropClassroomTransferDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SFAirDropClassroomTransferDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_getRemoteObjectProxyOnQueue:(CDUnknownBlockType)arg1;
- (id)exportedInterface;
- (id)machServiceName;
- (id)remoteObjectInterface;
- (BOOL)shouldEscapeXpcTryCatch;
- (void)transferWithIdentifierWasAccepted:(id)arg1;
- (void)transferWithIdentifierWasDeclined:(id)arg1;
- (void)updateTransferWithIdentifier:(id)arg1 withState:(long long)arg2 information:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

