//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreTelephony/CoreTelephonyClientSubscriberDelegate-Protocol.h>

@class CTServiceDescriptor, CoreTelephonyClient, NSData, NSString;
@protocol CTSubscriberDelegate;

@interface CTSubscriber : NSObject <CoreTelephonyClientSubscriberDelegate>
{
    struct queue _queue;
    CoreTelephonyClient *_client;
    id<CTSubscriberDelegate> _delegate;
    CTServiceDescriptor *_descriptor;
}

@property (readonly, strong, nonatomic) NSData *carrierToken; // @dynamic carrierToken;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CTSubscriberDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) CTServiceDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)authTokenChanged:(id)arg1;
- (void)authenticate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)authenticateWithInfo:(id)arg1 handleResult:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithDescriptor:(id)arg1;
- (id)initWithDescriptor:(id)arg1 client:(id)arg2;
- (BOOL)refreshCarrierToken;

@end

