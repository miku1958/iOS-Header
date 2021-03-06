//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMediaStream/IDSServiceDelegate-Protocol.h>

@class IDSService, MSASAlbum, MSASStateMachine, NSMutableDictionary, NSString;

@interface MSASPhoneInvitations : NSObject <IDSServiceDelegate>
{
    MSASStateMachine *_stateMachine;
    MSASAlbum *_album;
    IDSService *_idsService;
    NSMutableDictionary *_sendMessageIdentifierToPhone;
}

@property (strong, nonatomic) MSASAlbum *album; // @synthesize album=_album;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) IDSService *idsService; // @synthesize idsService=_idsService;
@property (strong, nonatomic) NSMutableDictionary *sendMessageIdentifierToPhone; // @synthesize sendMessageIdentifierToPhone=_sendMessageIdentifierToPhone;
@property (strong, nonatomic) MSASStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addPendingPhoneInvitations:(id)arg1 toOwnedAlbum:(id)arg2 inStateMachin:(id)arg3;
- (id)init;
- (void)removeSharingRelationships:(id)arg1 forAlbum:(id)arg2;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5;

@end

