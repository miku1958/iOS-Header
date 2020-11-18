//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DeviceManager, NSString;
@protocol ICDeviceDelegate;

@interface ICDevice : NSObject
{
    void *_deviceProperties;
}

@property (copy) NSString *UUIDString;
@property BOOL autoOpenSession;
@property BOOL closeSessionPending;
@property id<ICDeviceDelegate> delegate;
@property DeviceManager *deviceManager;
@property BOOL hasOpenSession;
@property (readonly) struct CGImage *icon;
@property (readonly) BOOL isAppleDevice; // @dynamic isAppleDevice;
@property (copy) NSString *name;
@property BOOL openSessionPending;
@property (copy) NSString *productKind;
@property (copy) NSString *transportType;
@property int usbLocationID;
@property int usbProductID;
@property int usbVendorID;

- (void)dealloc;
- (id)description;
- (void)handleCommandCompletionNotification:(id)arg1;
- (void)handleImageCaptureEventNotification:(id)arg1;
- (id)init;
- (void)requestCloseSession;
- (void)requestOpenSession;
- (id)valueForUndefinedKey:(id)arg1;

@end

