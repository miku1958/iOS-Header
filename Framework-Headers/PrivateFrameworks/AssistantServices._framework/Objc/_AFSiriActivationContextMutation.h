//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFSiriActivationContextMutating-Protocol.h>

@class AFSiriActivationContext, NSDictionary, NSString;

@interface _AFSiriActivationContextMutation : NSObject <AFSiriActivationContextMutating>
{
    AFSiriActivationContext *_baseModel;
    unsigned long long _timestamp;
    long long _source;
    long long _event;
    unsigned long long _options;
    NSString *_deviceID;
    NSDictionary *_userInfo;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasTimestamp:1;
        unsigned int hasSource:1;
        unsigned int hasEvent:1;
        unsigned int hasOptions:1;
        unsigned int hasDeviceID:1;
        unsigned int hasUserInfo:1;
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
- (void)setDeviceID:(id)arg1;
- (void)setEvent:(long long)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setSource:(long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUserInfo:(id)arg1;

@end

