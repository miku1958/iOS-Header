//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FileProvider/_NSFileProviderServiceEndpointCreating-Protocol.h>

@class FPXDomainContext, NSDictionary;

__attribute__((visibility("hidden")))
@interface FPXServiceEndpointFactory : NSObject <_NSFileProviderServiceEndpointCreating>
{
    NSDictionary *_serviceSources;
    FPXDomainContext *_domainContext;
}

- (void).cxx_destruct;
- (void)getListenerEndpointForServiceName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithServiceSources:(id)arg1 domainContext:(id)arg2;

@end

