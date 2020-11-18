//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameController/NSObject-Protocol.h>

@class NSArray, NSString, _GCCControllerHIDServiceInfo;
@protocol GCDeviceLegacy;

@protocol GCDeviceLegacy <NSObject>

@property (nonatomic, getter=areAllHIDDevicesConnected) BOOL allHIDDevicesConnected;
@property (readonly, nonatomic) NSArray *hidServices;
@property (readonly, nonatomic) NSString *productCategory;
@property (nonatomic, getter=isPublished) BOOL published;

- (void)addServiceRef:(_GCCControllerHIDServiceInfo *)arg1;
- (void)addServiceRefsWithDevice:(id<GCDeviceLegacy>)arg1;
- (void)clearServiceRef;
- (void)handleEvent:(struct __IOHIDEvent *)arg1;
- (BOOL)hasServiceRef:(struct __IOHIDServiceClient *)arg1;
- (id)initWithServiceRef:(struct __IOHIDServiceClient *)arg1;
- (void)removeServiceRef:(struct __IOHIDServiceClient *)arg1;
@end
