//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriVOX/SVXDeviceSetupFlowSiriCapabilitiesHintMutating-Protocol.h>

@class NSString, SVXDeviceSetupFlowSiriCapabilitiesHint;

__attribute__((visibility("hidden")))
@interface _SVXDeviceSetupFlowSiriCapabilitiesHintMutation : NSObject <SVXDeviceSetupFlowSiriCapabilitiesHintMutating>
{
    SVXDeviceSetupFlowSiriCapabilitiesHint *_baseModel;
    long long _style;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasStyle:1;
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
- (void)setStyle:(long long)arg1;

@end
