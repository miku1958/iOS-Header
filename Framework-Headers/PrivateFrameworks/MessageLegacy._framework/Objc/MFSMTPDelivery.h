//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MessageLegacy/MFMailDelivery.h>

@class MFSMTPConnection;

@interface MFSMTPDelivery : MFMailDelivery
{
    MFSMTPConnection *_connection;
}

- (void)_openConnection;
- (void)dealloc;
- (id)deliverMessageData:(id)arg1 toRecipients:(id)arg2;
- (Class)deliveryClass;
- (void)setAccount:(id)arg1;

@end

