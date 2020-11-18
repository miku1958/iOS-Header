//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol BCSCodePayload, BCSParsedData;

@protocol BCSNotificationServiceProtocol
- (void)cancelNotifications;
- (void)notifyParsedBarcodeWithData:(id<BCSParsedData>)arg1 codePayload:(id<BCSCodePayload>)arg2 reply:(void (^)(NSError *, AWDBarcodeSupportCodeDetectedEvent *))arg3;
@end
