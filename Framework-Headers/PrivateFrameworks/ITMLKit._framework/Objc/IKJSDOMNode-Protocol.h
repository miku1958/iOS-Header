//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/JSExport-Protocol.h>

@class IKDOMDocument, IKDOMNode, IKDOMNodeList, IKJSObject, JSValue, NSString;

@protocol IKJSDOMNode <JSExport>

@property (readonly, strong, nonatomic) IKDOMNodeList *childNodes;
@property (weak, nonatomic) JSValue *dataItem;
@property (readonly, strong, nonatomic) IKDOMNode *firstChild;
@property (readonly, strong, nonatomic) IKDOMNode *lastChild;
@property (readonly, weak, nonatomic) IKDOMNode *nextSibling;
@property (readonly, strong, nonatomic) NSString *nodeName;
@property (readonly, nonatomic) long long nodeType;
@property (strong, nonatomic) NSString *nodeValue;
@property (readonly, weak, nonatomic) IKDOMDocument *ownerDocument;
@property (readonly, weak, nonatomic) IKDOMNode *parentNode;
@property (readonly, weak, nonatomic) IKDOMNode *previousSibling;
@property (strong, nonatomic) NSString *textContent;

- (IKDOMNode *)appendChild:(IKDOMNode *)arg1;
- (IKDOMNode *)cloneNode:(BOOL)arg1;
- (BOOL)contains:(IKDOMNode *)arg1;
- (IKJSObject *)getFeature:(NSString *)arg1:(NSString *)arg2;
- (BOOL)hasChildNodes;
- (IKDOMNode *)insertBefore:(IKDOMNode *)arg1:(IKDOMNode *)arg2;
- (BOOL)isEqualNode:(IKDOMNode *)arg1;
- (BOOL)isSameNode:(IKDOMNode *)arg1;
- (IKDOMNode *)removeChild:(IKDOMNode *)arg1;
- (IKDOMNode *)replaceChild:(IKDOMNode *)arg1:(IKDOMNode *)arg2;
@end

