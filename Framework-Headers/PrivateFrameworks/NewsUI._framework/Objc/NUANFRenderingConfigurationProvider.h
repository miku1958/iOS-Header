//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/SXRenderingConfigurationProvider-Protocol.h>

@class NSString, SXRenderingConfiguration;
@protocol FCNewsAppConfigurationManager;

@interface NUANFRenderingConfigurationProvider : NSObject <SXRenderingConfigurationProvider>
{
    SXRenderingConfiguration *_configuration;
    id<FCNewsAppConfigurationManager> _appConfigurationManager;
}

@property (readonly, nonatomic) id<FCNewsAppConfigurationManager> appConfigurationManager; // @synthesize appConfigurationManager=_appConfigurationManager;
@property (readonly, nonatomic) SXRenderingConfiguration *configuration; // @synthesize configuration=_configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithAppConfigurationManager:(id)arg1;

@end
