//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKWebServiceRequest.h>

@class NSArray, NSDictionary, NSMutableDictionary;

@interface PKOverlayableWebServiceRequest : PKWebServiceRequest
{
    NSMutableDictionary *_overlayParameters;
    NSMutableDictionary *_secureOverlayParameters;
    NSArray *_overridenKeys;
    BOOL _requiresConfigurationForRetry;
    BOOL _requiresConfigurationForRedirect;
}

@property (copy, nonatomic) NSDictionary *overlayParameters;
@property (nonatomic) BOOL requiresConfigurationForRedirect; // @synthesize requiresConfigurationForRedirect=_requiresConfigurationForRedirect;
@property (nonatomic) BOOL requiresConfigurationForRetry; // @synthesize requiresConfigurationForRetry=_requiresConfigurationForRetry;
@property (copy, nonatomic) NSDictionary *secureOverlayParameters;

- (void).cxx_destruct;
- (void)_applyOverlayToDictionary:(id)arg1;
- (void)_applySecureOverlayToDictionary:(id)arg1;
- (void)_setOverriddenKeys:(id)arg1;
- (void)_updateRequestForRedirect:(id)arg1 overrides:(id)arg2 webService:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)_updateRequestForRetry:(id)arg1 retryFields:(id)arg2 webService:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (BOOL)hasOverlayParameters;
- (id)init;
- (id)overlayValueForKey:(id)arg1;
- (id)secureOverlayValueForKey:(id)arg1;
- (void)setOverlayValue:(id)arg1 forKey:(id)arg2;
- (void)setSecureOverlayValue:(id)arg1 forKey:(id)arg2;

@end

