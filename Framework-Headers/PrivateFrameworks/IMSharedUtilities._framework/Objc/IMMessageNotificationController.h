//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <IMSharedUtilities/IDSServiceDelegate-Protocol.h>

@class IDSService, NSString;

@interface IMMessageNotificationController : NSObject <IDSServiceDelegate>
{
    IDSService *_messageNotificationControllerIDSService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) IDSService *messageNotificationControllerIDSService; // @synthesize messageNotificationControllerIDSService=_messageNotificationControllerIDSService;
@property (readonly) Class superclass;

+ (id)sharedInstance;
- (id)_copyIDForDevice:(id)arg1;
- (id)_copyIDSIdentifierOrDefault:(id)arg1;
- (BOOL)_deviceIsAudioAccessory:(id)arg1;
- (void)_executeCommandFromMessageRequest:(id)arg1;
- (BOOL)_isCurrentDeviceAudioAccessory;
- (void)_playTone;
- (void)_sendNotificationMessageRequest:(id)arg1 toTokenURI:(id)arg2;
- (BOOL)audioAccessoryDeviceWithTokenURIExists:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)sendNotificationMessageToTokenURI:(id)arg1 withCommmand:(long long)arg2;
- (void)sendNotificationMessageToUniqueID:(id)arg1 withCommmand:(long long)arg2;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;

@end

