//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Catalyst/CATOperation.h>

@class CATMessage, CATXPCTransport;

__attribute__((visibility("hidden")))
@interface _CATXPCTransportSendMessageOperation : CATOperation
{
    CATXPCTransport *_transport;
    CATMessage *_message;
}

@property (strong, nonatomic) CATMessage *message; // @synthesize message=_message;
@property (weak, nonatomic) CATXPCTransport *transport; // @synthesize transport=_transport;

- (void).cxx_destruct;
- (void)didFailWithError:(id)arg1;
- (void)didProcessMessage;
- (BOOL)isAsynchronous;
- (void)main;

@end

