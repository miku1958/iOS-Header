//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol BCSParsedData;

@protocol BCSNotificationServiceProtocol
- (void)cancelNotifications;
- (void)notifyParsedBarcodeWithData:(id<BCSParsedData>)arg1 reply:(void (^)(NSError *, AWDBarcodeSupportCodeDetectedEvent *))arg2;
@end

