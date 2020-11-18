//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFAudioDeviceInfoMutating-Protocol.h>

@class AFAudioDeviceInfo, NSString, NSUUID;

@interface _AFAudioDeviceInfoMutation : NSObject <AFAudioDeviceInfoMutating>
{
    AFAudioDeviceInfo *_baseModel;
    NSString *_route;
    BOOL _isRemoteDevice;
    NSUUID *_deviceUID;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasRoute:1;
        unsigned int hasIsRemoteDevice:1;
        unsigned int hasDeviceUID:1;
    } _mutationFlags;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)generate;
- (id)init;
- (id)initWithBaseModel:(id)arg1;
- (void)setDeviceUID:(id)arg1;
- (void)setIsRemoteDevice:(BOOL)arg1;
- (void)setRoute:(id)arg1;

@end
