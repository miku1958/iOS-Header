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
#import <ITMLKit/_IKJSDOMElement-Protocol.h>
#import <ITMLKit/_IKJSDOMElementProxy-Protocol.h>

@class IKDOMHTMLCollection, IKDOMNamedNodeMap, IKViewElementStyleComposer, NSArray, NSDictionary, NSMutableDictionary, NSString;
@protocol IKStyleableElement;

@interface IKDOMElement : IKDOMNode <IKJDOMParsingElement, IKStyleableElement, IKJSDOMElement, _IKJSDOMElementProxy, _IKJSDOMElement, IKJSDOMParentNode>
{
    NSMutableDictionary *_metadataDict;
    NSArray *_cachedChildElements;
    NSDictionary *_cachedAttributes;
    IKViewElementStyleComposer *styleComposer;
    IKDOMElement *__aliasOf;
}

@property (weak, nonatomic, setter=_setAliasOf:) IKDOMElement *_aliasOf; // @synthesize _aliasOf=__aliasOf;
@property (readonly, nonatomic) BOOL _isPartOfPrototypeElement;
@property (readonly, nonatomic) BOOL _isPrototypeElement;
@property (readonly, copy, nonatomic) IKDOMNamedNodeMap *attributes;
@property (readonly, nonatomic) unsigned long long childElementCount;
@property (readonly, nonatomic) IKDOMHTMLCollection *children;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *elementName;
@property (readonly, nonatomic) IKDOMElement *firstElementChild;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *innerHTML;
@property (readonly, nonatomic) IKDOMElement *lastElementChild;
@property (strong, nonatomic) NSString *outerHTML;
@property (readonly, weak, nonatomic) id<IKStyleableElement> parentStyleableElement;
@property (strong, nonatomic) IKViewElementStyleComposer *styleComposer; // @synthesize styleComposer;
@property (readonly) Class superclass;
@property (readonly, strong, nonatomic) NSString *tagName;

+ (id)_filteredAttributes;
- (void).cxx_destruct;
- (id)_attributes;
- (void)_markUpdatedForChangeInAttribute:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3;
- (id)asPrivateIKJSDOMElement;
- (id)childElementByTagName:(id)arg1;
- (id)childElements;
- (id)childElementsByTagName:(id)arg1;
- (void)childrenUpdatedWithUpdatedChildNodes:(id)arg1 notify:(BOOL)arg2;
- (id)domb_boundCSSRule;
- (id)domb_dataBinding;
- (id)domb_domBindingController;
- (id)domb_mutationRules;
- (void)domb_setBoundCSSRule:(id)arg1;
- (void)domb_setDOMBindingController:(id)arg1;
- (void)domb_setDataBinding:(id)arg1;
- (void)domb_setMutationRules:(id)arg1;
- (id)dombs_items;
- (void)dombs_setItems:(id)arg1;
- (id)domib_appDataSet;
- (id)domib_itemsChangeSet;
- (void)domib_setAppDataSet:(id)arg1;
- (void)domib_setItemsChangeSet:(id)arg1;
- (void)domib_setVisibleIndexRange:(struct _NSRange)arg1;
- (struct _NSRange)domib_visibleIndexRange;
- (id)domp_derivativeDOMElementsBySelector;
- (id)domp_prototype;
- (void)domp_setDerivativeDOMElementsBySelector:(id)arg1;
- (void)domp_setPrototype:(id)arg1;
- (id)getAttribute:(id)arg1;
- (id)getElementsByTagName:(id)arg1;
- (BOOL)hasAttribute:(id)arg1;
- (BOOL)hasAttributes;
- (id)ik_templateElementCSSSelectorList;
- (id)ik_templateName;
- (id)ikve_prototypesID;
- (id)ikve_rulesID;
- (void)ikve_setPrototypesID:(id)arg1;
- (void)ikve_setRulesID:(id)arg1;
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

