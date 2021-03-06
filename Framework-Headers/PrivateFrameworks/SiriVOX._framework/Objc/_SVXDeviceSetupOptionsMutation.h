//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriVOX/SVXDeviceSetupOptionsMutating-Protocol.h>

@class NSString, SVXDeviceSetupOptions;

__attribute__((visibility("hidden")))
@interface _SVXDeviceSetupOptionsMutation : NSObject <SVXDeviceSetupOptionsMutating>
{
    SVXDeviceSetupOptions *_baseModel;
    NSString *_languageCode;
    long long _gender;
    long long _hasActiveAccount;
    long long _isNewsRestricted;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasLanguageCode:1;
        unsigned int hasGender:1;
        unsigned int hasHasActiveAccount:1;
        unsigned int hasIsNewsRestricted:1;
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
- (void)setGender:(long long)arg1;
- (void)setHasActiveAccount:(long long)arg1;
- (void)setIsNewsRestricted:(long long)arg1;
- (void)setLanguageCode:(id)arg1;

@end

