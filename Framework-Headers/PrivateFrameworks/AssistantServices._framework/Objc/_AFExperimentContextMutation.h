//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFExperimentContextMutating-Protocol.h>

@class AFExperimentContext, NSDictionary, NSString;

@interface _AFExperimentContextMutation : NSObject <AFExperimentContextMutating>
{
    AFExperimentContext *_baseModel;
    NSDictionary *_experimentsByConfigurationIdentifier;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasExperimentsByConfigurationIdentifier:1;
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
- (void)setExperimentsByConfigurationIdentifier:(id)arg1;

@end

