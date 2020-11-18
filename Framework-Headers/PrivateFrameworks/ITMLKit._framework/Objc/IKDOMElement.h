//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKDOMNode.h>

#import <ITMLKit/IKJDOMParsingElement-Protocol.h>
#import <ITMLKit/IKJSDOMElement-Protocol.h>
#import <ITMLKit/IKJSDOMParentNode-Protocol.h>
#import <ITMLKit/IKStyleableElement-Protocol.h>
#import <ITMLKit/JSExport-Protocol.h>

@class IKDOMHTMLCollection, IKViewElementStyleComposer, NSMutableDictionary, NSString;
@protocol IKStyleableElement;

@interface IKDOMElement : IKDOMNode <IKJDOMParsingElement, IKStyleableElement, IKJSDOMElement, JSExport, IKJSDOMParentNode>
{
    NSMutableDictionary *_metadataDict;
    IKViewElementStyleComposer *styleComposer;
    id<IKStyleableElement> parentStyleableElement;
}

@property (readonly, nonatomic) unsigned long long childElementCount;
@property (readonly, nonatomic) IKDOMHTMLCollection *children;
@property (readonly, copy, nonatomic) NSString *elementName;
@property (readonly, nonatomic) IKDOMElement *firstElementChild;
@property (strong, nonatomic) NSString *innerHTML;
@property (readonly, nonatomic) IKDOMElement *lastElementChild;
@property (strong, nonatomic) NSString *outerHTML;
@property (readonly, weak, nonatomic) id<IKStyleableElement> parentStyleableElement; // @synthesize parentStyleableElement;
@property (strong, nonatomic) IKViewElementStyleComposer *styleComposer; // @synthesize styleComposer;
@property (readonly, strong, nonatomic) NSString *tagName;

- (void).cxx_destruct;
- (id)attributes;
- (id)childElementByTagName:(id)arg1;
- (id)childElements;
- (id)childElementsByTagName:(id)arg1;
- (id)getAttribute:(id)arg1;
- (id)getElementsByTagName:(id)arg1;
- (BOOL)hasAttribute:(id)arg1;
- (void)insertAdjacentHTML:(id)arg1:(id)arg2;
- (id)nodeName;
- (long long)nodeType;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)removeAttribute:(id)arg1;
- (void)setAttribute:(id)arg1:(id)arg2;
- (void)setAttributeValue:(id)arg1 withName:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setTextContent:(id)arg1;
- (id)textContent;

@end

