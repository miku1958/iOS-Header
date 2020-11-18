//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinDistributorCompanion/BLTAbstractIDSService-Protocol.h>

@class IDSService, NSString;
@protocol BLTAbstractIDSDevice;

@interface BLTIDSService : NSObject <BLTAbstractIDSService>
{
    IDSService *_service;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<BLTAbstractIDSDevice> defaultPairedDevice;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (id)initWithService:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (BOOL)sendProtobuf:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id *)arg5 error:(id *)arg6;
- (void)setProtobufAction:(SEL)arg1 forIncomingRequestsOfType:(unsigned short)arg2;
- (void)setProtobufAction:(SEL)arg1 forIncomingResponsesOfType:(unsigned short)arg2;

@end
