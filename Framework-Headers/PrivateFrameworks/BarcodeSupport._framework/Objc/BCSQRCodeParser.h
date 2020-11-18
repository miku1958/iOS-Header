//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BCSNotificationServiceConnection, BCSParsingServiceConnection;

@interface BCSQRCodeParser : NSObject
{
    BCSParsingServiceConnection *_parsingServiceConnection;
    BCSNotificationServiceConnection *_notificationServiceConnection;
}

@property (readonly, nonatomic) BCSNotificationServiceConnection *notificationServiceConnection;

- (void).cxx_destruct;
- (void)_parseMetadataObject:(id)arg1 reply:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_qrCodeFeatureFromImage:(struct CGImage *)arg1;
- (void)parseCodeFromImage:(struct CGImage *)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)parseCodeFromMetadataMachineReadableCodeObject:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)parseCodeFromString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)postNotificationAfterParsingCodeFromImage:(struct CGImage *)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startQRCodeParsingSessionWithMetadataObject:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)stopQRCodeParsingSession;

@end

