//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Translation/FTSpeechTranslationServerEndpointFeatures.h>

@class FTServerEndpointFeatures, NSString;

__attribute__((visibility("hidden")))
@interface FTMutableSpeechTranslationServerEndpointFeatures : FTSpeechTranslationServerEndpointFeatures
{
}

@property (copy, nonatomic) NSString *conversation_id;
@property (copy, nonatomic) NSString *request_id;
@property (copy, nonatomic) FTServerEndpointFeatures *server_endpoint_features;
@property (copy, nonatomic) NSString *source_locale;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

