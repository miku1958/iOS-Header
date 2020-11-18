//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICURLBagRadioConfiguration, NSArray, NSDictionary, NSMutableDictionary, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface ICURLBag : NSObject
{
    NSDictionary *_bagValues;
    NSMutableDictionary *_convertedActionsCache;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_GUIDURLRegexPatterns;
    NSSet *_GUIDURLSchemes;
}

@property (strong, nonatomic) NSArray *GUIDURLRegexPatterns; // @synthesize GUIDURLRegexPatterns=_GUIDURLRegexPatterns;
@property (strong, nonatomic) NSSet *GUIDURLSchemes; // @synthesize GUIDURLSchemes=_GUIDURLSchemes;
@property (readonly, copy, nonatomic) NSDictionary *allValues;
@property (strong, nonatomic) NSDictionary *bagValues; // @synthesize bagValues=_bagValues;
@property (readonly, nonatomic) BOOL canPostKeybagSyncData;
@property (strong, nonatomic) NSMutableDictionary *convertedActionsCache; // @synthesize convertedActionsCache=_convertedActionsCache;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly, nonatomic) ICURLBagRadioConfiguration *radioConfiguration;
@property (readonly, copy, nonatomic) NSString *storefrontHeaderSuffix;

- (void).cxx_destruct;
- (BOOL)_shouldMescalSignBodyForURL:(id)arg1 withSignatureConfiguration:(id)arg2;
- (void)_validateGUIDURLConfigIfNeeded;
- (BOOL)hasValueForBagKey:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (long long)int64ValueForBagKey:(id)arg1;
- (id)mescalConfigurationForRequestURL:(id)arg1;
- (id)mescalConfigurationForResponseURL:(id)arg1;
- (BOOL)shouldAppendDeviceGUIDForURL:(id)arg1;
- (BOOL)shouldAppendMachineDataHeadersForURL:(id)arg1;
- (id)urlForBagKey:(id)arg1;
- (id)valueForBagKey:(id)arg1;

@end

