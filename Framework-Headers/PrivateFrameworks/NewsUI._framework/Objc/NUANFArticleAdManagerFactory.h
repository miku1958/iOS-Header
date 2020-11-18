//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUArticleAdManagerFactory-Protocol.h>

@class NSString;
@protocol NUAdMetadataFactory, NUAdProvider, NUAdSettings, NUDevice;

@interface NUANFArticleAdManagerFactory : NSObject <NUArticleAdManagerFactory>
{
    id<NUAdProvider> _adProvider;
    id<NUAdMetadataFactory> _adMetadataFactory;
    id<NUAdSettings> _settings;
    id<NUDevice> _device;
}

@property (readonly, nonatomic) id<NUAdMetadataFactory> adMetadataFactory; // @synthesize adMetadataFactory=_adMetadataFactory;
@property (readonly, nonatomic) id<NUAdProvider> adProvider; // @synthesize adProvider=_adProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id<NUDevice> device; // @synthesize device=_device;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<NUAdSettings> settings; // @synthesize settings=_settings;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createArticleAdManagerForArticle:(id)arg1;
- (id)initWithAdProvider:(id)arg1 adMetadataFactory:(id)arg2 settings:(id)arg3 device:(id)arg4;

@end

