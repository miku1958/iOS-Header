//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol ICDeviceBrowserDelegate;

@interface ICDeviceBrowser : NSObject
{
    id _privateData;
    unsigned long long _browsedDeviceTypeMask;
    NSArray *_devices;
}

@property unsigned long long browsedDeviceTypeMask; // @synthesize browsedDeviceTypeMask=_browsedDeviceTypeMask;
@property (readonly, getter=isBrowsing) BOOL browsing;
@property id<ICDeviceBrowserDelegate> delegate;
@property (nonatomic) NSArray *devices; // @synthesize devices=_devices;
@property (nonatomic, getter=isSuspended) BOOL suspended;

- (id)contentsAuthorizationStatus;
- (id)controlAuthorizationStatus;
- (void)dealloc;
- (id)init;
- (id)internalDevices;
- (void)requestContentsAuthorizationWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestControlAuthorizationWithCompletion:(CDUnknownBlockType)arg1;
- (void)start;
- (void)stop;
- (BOOL)suspended;

@end
