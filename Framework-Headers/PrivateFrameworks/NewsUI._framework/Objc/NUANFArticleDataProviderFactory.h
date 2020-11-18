//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUArticleDataProviderFactory-Protocol.h>

@class NSString, SXHost;
@protocol FCContentContext, NUFontRegistration;

@interface NUANFArticleDataProviderFactory : NSObject <NUArticleDataProviderFactory>
{
    id<FCContentContext> _contentContext;
    id<NUFontRegistration> _fontRegistration;
    SXHost *_host;
}

@property (readonly, nonatomic) id<FCContentContext> contentContext; // @synthesize contentContext=_contentContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id<NUFontRegistration> fontRegistration; // @synthesize fontRegistration=_fontRegistration;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) SXHost *host; // @synthesize host=_host;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createArticleDataProviderWithArticle:(id)arg1;
- (id)initWithContentContext:(id)arg1 fontRegistration:(id)arg2 host:(id)arg3;

@end

