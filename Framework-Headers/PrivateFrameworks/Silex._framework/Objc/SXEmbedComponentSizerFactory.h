//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXComponentSizerFactory-Protocol.h>

@class NSString;
@protocol SXDOMObjectProviding, SXEmbedDataProvider;

@interface SXEmbedComponentSizerFactory : NSObject <SXComponentSizerFactory>
{
    id<SXDOMObjectProviding> _DOMObjectProvider;
    id<SXEmbedDataProvider> _embedDataProvider;
}

@property (readonly, nonatomic) id<SXDOMObjectProviding> DOMObjectProvider; // @synthesize DOMObjectProvider=_DOMObjectProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id<SXEmbedDataProvider> embedDataProvider; // @synthesize embedDataProvider=_embedDataProvider;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) int role;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *type;

- (void).cxx_destruct;
- (id)initWithDOMObjectProvider:(id)arg1 embedDataProvider:(id)arg2;
- (id)sizerForComponent:(id)arg1 componentLayout:(id)arg2 layoutOptions:(id)arg3 DOMObjectProvider:(id)arg4;

@end

