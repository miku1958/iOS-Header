//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WKWebViewContentProviderRegistry : NSObject
{
    struct HashMap<WTF::String, Class<WKWebViewContentProvider>, WTF::ASCIICaseInsensitiveHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<Class<WKWebViewContentProvider>>> _contentProviderForMIMEType;
    struct HashCountedSet<WebKit::WebPageProxy *, WTF::PtrHash<WebKit::WebPageProxy *>, WTF::HashTraits<WebKit::WebPageProxy *>> _pages;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (Vector_1e8b6c82)_mimeTypesWithCustomContentProviders;
- (void)addPage:(struct WebPageProxy *)arg1;
- (id)init;
- (Class)providerForMIMEType:(const struct String *)arg1;
- (void)registerProvider:(Class)arg1 forMIMEType:(const struct String *)arg2;
- (void)removePage:(struct WebPageProxy *)arg1;

@end
