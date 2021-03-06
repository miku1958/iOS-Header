//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXPresentationAttributesObserver-Protocol.h>
#import <Silex/SXWebContentConfigurationProvider-Protocol.h>

@class NSLocale, NSString;
@protocol SWLocation, SXPresentationAttributesProvider, SXStoreFrontProvider;

@interface SXWebContentConfigurationProvider : NSObject <SXPresentationAttributesObserver, SXWebContentConfigurationProvider>
{
    id<SXPresentationAttributesProvider> _presentationAttributesProvider;
    id<SXStoreFrontProvider> _storeFrontProvider;
    NSLocale *_locale;
    id<SWLocation> _location;
    CDUnknownBlockType _changeBlock;
}

@property (copy, nonatomic) CDUnknownBlockType changeBlock; // @synthesize changeBlock=_changeBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property (readonly, nonatomic) id<SWLocation> location; // @synthesize location=_location;
@property (readonly, nonatomic) id<SXPresentationAttributesProvider> presentationAttributesProvider; // @synthesize presentationAttributesProvider=_presentationAttributesProvider;
@property (readonly, nonatomic) id<SXStoreFrontProvider> storeFrontProvider; // @synthesize storeFrontProvider=_storeFrontProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)configurationForSize:(struct CGSize)arg1 dataSources:(id)arg2 sourceURL:(id)arg3;
- (id)initWithPresentationAttributesProvider:(id)arg1 storeFrontProvider:(id)arg2 locale:(id)arg3 location:(id)arg4;
- (void)invokeChangeListener;
- (void)onChange:(CDUnknownBlockType)arg1;
- (void)presentationAttributesDidChangeFrom:(id)arg1 toAttributes:(id)arg2;

@end

