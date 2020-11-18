//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFSiriActivationResultMutating-Protocol.h>

@class AFSiriActivationResult, NSError, NSString;

@interface _AFSiriActivationResultMutation : NSObject <AFSiriActivationResultMutating>
{
    AFSiriActivationResult *_baseModel;
    long long _actionType;
    NSError *_error;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasActionType:1;
        unsigned int hasError:1;
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
- (void)setActionType:(long long)arg1;
- (void)setError:(id)arg1;

@end
