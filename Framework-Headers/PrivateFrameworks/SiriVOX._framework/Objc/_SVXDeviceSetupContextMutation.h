//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriVOX/SVXDeviceSetupContextMutating-Protocol.h>

@class NSString, SVXDeviceSetupContext, SVXDeviceSetupFlowScene, SVXDeviceSetupOptions;

__attribute__((visibility("hidden")))
@interface _SVXDeviceSetupContextMutation : NSObject <SVXDeviceSetupContextMutating>
{
    SVXDeviceSetupContext *_baseModel;
    unsigned long long _timestamp;
    SVXDeviceSetupOptions *_options;
    SVXDeviceSetupFlowScene *_flowScene;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasTimestamp:1;
        unsigned int hasOptions:1;
        unsigned int hasFlowScene:1;
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
- (void)setFlowScene:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;

@end

