//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVFoundation/NSSecureCoding-Protocol.h>

@class AVOutputContextInternal, NSString;

@interface AVOutputContext : NSObject <NSSecureCoding>
{
    AVOutputContextInternal *_outputContext;
}

@property (readonly, nonatomic) NSString *deviceName;

+ (struct OpaqueFigEndpointPicker *)copySystemVideoPicker;
+ (id)outputContext;
+ (BOOL)outputContextExistsWithRemoteOutputDevice;
+ (void)resetOutputDeviceForAllOutputContexts;
+ (id)sharedSystemAudioContext;
+ (id)sharedSystemScreenContext;
+ (BOOL)supportsSecureCoding;
- (void)_addFigEndpointPickerNotifications;
- (int)_configureFigEndpointPickerWithFeature:(unsigned long long)arg1 options:(id)arg2;
- (void)_handlePickerServerConnectionDiedNotification;
- (void)_removeFigEndpointPickerNotifications;
- (id)_weakReference;
- (int)applicationProcessID;
- (id)contextUUID;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContextUUID:(id)arg1;
- (id)initWithFeature:(unsigned long long)arg1 options:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)outputDevice;
- (void)setApplicationProcessID:(int)arg1;
- (BOOL)setOutputDevice:(id)arg1 forFeatures:(unsigned long long)arg2;

@end

