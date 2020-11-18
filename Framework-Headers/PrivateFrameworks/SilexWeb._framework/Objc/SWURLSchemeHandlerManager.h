//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexWeb/SWURLSchemeHandlerManager-Protocol.h>

@class NSMapTable, NSMutableDictionary, NSString, WKWebViewConfiguration;
@protocol SWLogger;

@interface SWURLSchemeHandlerManager : NSObject <SWURLSchemeHandlerManager>
{
    WKWebViewConfiguration *_configuration;
    id<SWLogger> _logger;
    NSMutableDictionary *_factories;
    NSMapTable *_handlers;
}

@property (readonly, nonatomic) WKWebViewConfiguration *configuration; // @synthesize configuration=_configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMutableDictionary *factories; // @synthesize factories=_factories;
@property (readonly, nonatomic) NSMapTable *handlers; // @synthesize handlers=_handlers;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<SWLogger> logger; // @synthesize logger=_logger;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)arg1 logger:(id)arg2;
- (void)registerFactory:(id)arg1 forScheme:(id)arg2;
- (void)webView:(id)arg1 startURLSchemeTask:(id)arg2;
- (void)webView:(id)arg1 stopURLSchemeTask:(id)arg2;

@end
