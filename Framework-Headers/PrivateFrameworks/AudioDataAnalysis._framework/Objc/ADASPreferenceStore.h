//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NPSDomainAccessor, NSDictionary;

@interface ADASPreferenceStore : NSObject
{
    NSDictionary *_keyMap;
    NSDictionary *_defaultValues;
    NSDictionary *_specialDarwinKeys;
    NPSDomainAccessor *_coreAudioDomain;
    NPSDomainAccessor *_coreAudioDeviceDomain;
}

@property (strong, nonatomic) NPSDomainAccessor *coreAudioDeviceDomain; // @synthesize coreAudioDeviceDomain=_coreAudioDeviceDomain;
@property (strong, nonatomic) NPSDomainAccessor *coreAudioDomain; // @synthesize coreAudioDomain=_coreAudioDomain;
@property (readonly, nonatomic) NSDictionary *defaultValues; // @synthesize defaultValues=_defaultValues;
@property (readonly, nonatomic) NSDictionary *keyMap; // @synthesize keyMap=_keyMap;
@property (readonly, nonatomic) NSDictionary *specialDarwinKeys; // @synthesize specialDarwinKeys=_specialDarwinKeys;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)init;

@end
