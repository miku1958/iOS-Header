//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, WKDOMDocument;

@interface WKDOMNode : NSObject
{
    struct RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node>> _impl;
}

@property (readonly) WKDOMDocument *document;
@property (readonly) WKDOMNode *firstChild;
@property (readonly) WKDOMNode *lastChild;
@property (readonly) WKDOMNode *nextSibling;
@property (readonly) WKDOMNode *parentNode;
@property (readonly) WKDOMNode *previousSibling;
@property (readonly) NSArray *textRects;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct OpaqueWKBundleNodeHandle *)_copyBundleNodeHandleRef;
- (id)_initWithImpl:(struct Node *)arg1;
- (void)appendChild:(id)arg1;
- (void)dealloc;
- (void)insertNode:(id)arg1 before:(id)arg2;
- (void)removeChild:(id)arg1;

@end

