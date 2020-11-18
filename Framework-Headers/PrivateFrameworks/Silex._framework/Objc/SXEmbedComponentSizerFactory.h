//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXComponentSizerFactory-Protocol.h>

@class NSString;
@protocol SXDocumentControllerProvider, SXEmbedService;

@interface SXEmbedComponentSizerFactory : NSObject <SXComponentSizerFactory>
{
    id<SXDocumentControllerProvider> _documentControllerProvider;
    id<SXEmbedService> _embedService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id<SXDocumentControllerProvider> documentControllerProvider; // @synthesize documentControllerProvider=_documentControllerProvider;
@property (readonly, nonatomic) id<SXEmbedService> embedService; // @synthesize embedService=_embedService;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) int role;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *type;

- (void).cxx_destruct;
- (id)initWithDocumentControllerProvider:(id)arg1 embedService:(id)arg2;
- (id)sizerForComponent:(id)arg1 componentLayout:(id)arg2 layoutAttributes:(id)arg3;

@end
