//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/NSObject-Protocol.h>

@class NSString, NSUUID;

@protocol AFBluetoothDeviceInfoMutating <NSObject>
- (void)setAddress:(NSString *)arg1;
- (void)setDeviceUID:(NSUUID *)arg1;
- (void)setIsAdvancedAppleAudioDevice:(BOOL)arg1;
- (void)setProductID:(unsigned int)arg1;
- (void)setSupportsInEarDetection:(BOOL)arg1;
- (void)setSupportsVoiceTrigger:(BOOL)arg1;
- (void)setVendorID:(unsigned int)arg1;
@end

