//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriCore/SiriCoreSessionObject-Protocol.h>
#import <SiriCore/SiriCoreThunking-Protocol.h>

@class NSArray, NSString;

@interface SiriCoreSpeechPacket : NSObject <SiriCoreThunking, SiriCoreSessionObject>
{
    NSString *_aceId;
    NSString *_refId;
    NSArray *_packets;
    long long _packetNumber;
}

@property (copy, nonatomic) NSString *aceId; // @synthesize aceId=_aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long packetNumber; // @synthesize packetNumber=_packetNumber;
@property (strong, nonatomic) NSArray *packets; // @synthesize packets=_packets;
@property (copy, nonatomic) NSString *refId; // @synthesize refId=_refId;
@property (readonly) Class superclass;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)siriCore_addSendCompletion:(CDUnknownBlockType)arg1;
- (BOOL)siriCore_bufferingAllowedDuringActiveSession;
- (void)siriCore_dispatchSendCompletionsWithResult:(long long)arg1 error:(id)arg2;
- (void)siriCore_invokeThunk;
- (void)siriCore_logDiagnostics;
- (id)siriCore_serializedAceDataError:(id *)arg1;
- (BOOL)siriCore_supportsSendCompletions;

@end
