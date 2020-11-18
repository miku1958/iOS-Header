//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXActionActivityProvider-Protocol.h>

@class NSString, SXHost;
@protocol SXLinkActionURLQualifier, SXURLHandling, SXURLPreviewing;

@interface SXLinkActionActivityProvider : NSObject <SXActionActivityProvider>
{
    id<SXURLHandling> _URLHandler;
    id<SXURLPreviewing> _URLPreviewing;
    SXHost *_host;
    id<SXLinkActionURLQualifier> _URLQualifier;
}

@property (readonly, nonatomic) id<SXURLHandling> URLHandler; // @synthesize URLHandler=_URLHandler;
@property (readonly, nonatomic) id<SXURLPreviewing> URLPreviewing; // @synthesize URLPreviewing=_URLPreviewing;
@property (readonly, nonatomic) id<SXLinkActionURLQualifier> URLQualifier; // @synthesize URLQualifier=_URLQualifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) SXHost *host; // @synthesize host=_host;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activityGroupForAction:(id)arg1;
- (id)initWithURLHandler:(id)arg1 URLPreviewing:(id)arg2 host:(id)arg3 URLQualifier:(id)arg4;
- (void)open:(id)arg1;
- (void)openInSafari:(id)arg1;
- (id)previewActivityForAction:(id)arg1;

@end

