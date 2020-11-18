//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceManagement/CATOperation.h>

@class NSDate, NSDictionary, NSString;
@protocol CRKIDSListener, CRKIDSLocalPrimitives;

@interface CRKIDSSendMessageOperation : CATOperation
{
    id<CRKIDSLocalPrimitives> _IDSLocalPrimitives;
    NSDictionary *_message;
    NSString *_destinationAddress;
    id<CRKIDSListener> _messageSendListener;
    NSString *_messageSendIdentifier;
    NSDate *_initialSendDate;
}

@property (readonly, nonatomic) id<CRKIDSLocalPrimitives> IDSLocalPrimitives; // @synthesize IDSLocalPrimitives=_IDSLocalPrimitives;
@property (readonly, copy, nonatomic) NSString *destinationAddress; // @synthesize destinationAddress=_destinationAddress;
@property (strong, nonatomic) NSDate *initialSendDate; // @synthesize initialSendDate=_initialSendDate;
@property (readonly, copy, nonatomic) NSDictionary *message; // @synthesize message=_message;
@property (copy, nonatomic) NSString *messageSendIdentifier; // @synthesize messageSendIdentifier=_messageSendIdentifier;
@property (strong, nonatomic) id<CRKIDSListener> messageSendListener; // @synthesize messageSendListener=_messageSendListener;

- (void).cxx_destruct;
- (void)cancel;
- (void)didSendMessageWithIdentifier:(id)arg1 sendSuccess:(BOOL)arg2 error:(id)arg3;
- (id)initWithIDSLocalPrimitives:(id)arg1 message:(id)arg2 destinationAddress:(id)arg3;
- (BOOL)isAsynchronous;
- (void)main;

@end
