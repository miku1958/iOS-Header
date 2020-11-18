//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebCore/DOMObject.h>

#import <WebCore/DOMEventTarget-Protocol.h>

@class DOMDocument, DOMElement, DOMNamedNodeMap, DOMNodeList, NSString;

@interface DOMNode : DOMObject <DOMEventTarget>
{
}

@property (readonly) DOMNamedNodeMap *attributes;
@property (readonly, copy) NSString *baseURI;
@property (readonly) DOMNodeList *childNodes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) DOMNode *firstChild;
@property (readonly) unsigned long long hash;
@property (readonly) BOOL isContentEditable;
@property (readonly) DOMNode *lastChild;
@property (readonly, copy) NSString *localName;
@property (readonly, copy) NSString *namespaceURI;
@property (readonly) DOMNode *nextSibling;
@property (readonly, copy) NSString *nodeName;
@property (readonly) unsigned short nodeType;
@property (copy) NSString *nodeValue;
@property (readonly) DOMDocument *ownerDocument;
@property (readonly) DOMElement *parentElement;
@property (readonly) DOMNode *parentNode;
@property (copy) NSString *prefix;
@property (readonly) DOMNode *previousSibling;
@property (readonly) Class superclass;
@property (copy) NSString *textContent;

+ (id)_nodeFromJSWrapper:(struct OpaqueJSValue *)arg1;
- (struct Element *)_linkElement;
- (struct RootObject *)_rootObject;
- (struct _WKQuad)absoluteQuad;
- (struct _WKQuad)absoluteQuadAndInsideFixedPosition:(BOOL *)arg1;
- (id)absoluteQuads;
- (void)addEventListener:(id)arg1:(id)arg2:(BOOL)arg3;
- (void)addEventListener:(id)arg1 listener:(id)arg2 useCapture:(BOOL)arg3;
- (id)appendChild:(id)arg1;
- (id)borderRadii;
- (struct CGRect)boundingBox;
- (struct CGRect)boundingBoxUsingTransforms;
- (id)boundingBoxes;
- (struct CGRect)boundingFrame;
- (id)cloneNode:(BOOL)arg1;
- (unsigned short)compareDocumentPosition:(id)arg1;
- (float)computedFontSize;
- (BOOL)contains:(id)arg1;
- (BOOL)containsOnlyInlineObjects;
- (void)dealloc;
- (BOOL)dispatchEvent:(id)arg1;
- (id)findExplodedTextNodeAtPoint:(struct CGPoint)arg1;
- (void)getPreviewSnapshotImage:(struct CGImage **)arg1 andRects:(id *)arg2;
- (BOOL)hasAttributes;
- (BOOL)hasChildNodes;
- (struct CGRect)hrefFrame;
- (id)hrefLabel;
- (id)hrefTarget;
- (id)hrefTitle;
- (id)hrefURL;
- (struct _WKQuad)innerFrameQuad;
- (id)insertBefore:(id)arg1:(id)arg2;
- (id)insertBefore:(id)arg1 refChild:(id)arg2;
- (void)inspect;
- (BOOL)isConnected;
- (BOOL)isDefaultNamespace:(id)arg1;
- (BOOL)isEqualNode:(id)arg1;
- (BOOL)isSameNode:(id)arg1;
- (BOOL)isSelectableBlock;
- (BOOL)isSupported:(id)arg1:(id)arg2;
- (BOOL)isSupported:(id)arg1 version:(id)arg2;
- (id)lineBoxQuads;
- (id)lineBoxRects;
- (id)lookupNamespaceURI:(id)arg1;
- (id)lookupPrefix:(id)arg1;
- (id)nextFocusNode;
- (void)normalize;
- (id)previousFocusNode;
- (id)rangeOfContainingParagraph;
- (id)removeChild:(id)arg1;
- (void)removeEventListener:(id)arg1:(id)arg2:(BOOL)arg3;
- (void)removeEventListener:(id)arg1 listener:(id)arg2 useCapture:(BOOL)arg3;
- (id)replaceChild:(id)arg1:(id)arg2;
- (id)replaceChild:(id)arg1 oldChild:(id)arg2;
- (double)textHeight;
- (id)textRects;

@end

