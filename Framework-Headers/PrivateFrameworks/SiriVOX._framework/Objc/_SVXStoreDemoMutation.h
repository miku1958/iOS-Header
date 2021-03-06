//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriVOX/SVXStoreDemoMutating-Protocol.h>

@class NSString, SVXStoreDemo;

__attribute__((visibility("hidden")))
@interface _SVXStoreDemoMutation : NSObject <SVXStoreDemoMutating>
{
    SVXStoreDemo *_baseModel;
    long long _transcriptID;
    NSString *_languageCode;
    long long _gender;
    float _outputVolume;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasTranscriptID:1;
        unsigned int hasLanguageCode:1;
        unsigned int hasGender:1;
        unsigned int hasOutputVolume:1;
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
- (void)setLanguageCode:(id)arg1;
- (void)setOutputVolume:(float)arg1;
- (void)setTranscriptID:(long long)arg1;

@end

