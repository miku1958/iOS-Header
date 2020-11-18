//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/IKDOMBindingControllerDelegate-Protocol.h>
#import <ITMLKit/IKJSDataItemObserver-Protocol.h>
#import <ITMLKit/IKStyleableElement-Protocol.h>

@class IKAppDocument, IKDOMBindingController, IKElementChangeSet, IKViewElementStyle, IKViewElementStyleComposer, NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSString;
@protocol IKStyleableElement;

@interface IKViewElement : NSObject <IKJSDataItemObserver, IKStyleableElement, IKDOMBindingControllerDelegate>
{
    NSArray *_unfilteredChildren;
    NSArray *_visibleChildren;
    BOOL _isPartOfPrototypeElement;
    BOOL _isProxyElement;
    BOOL _disabled;
    BOOL _impressionable;
    BOOL _didUpdateAutoHighlightIdentifier;
    BOOL _areChildrenBound;
    BOOL _prototypesUpdated;
    IKAppDocument *_appDocument;
    IKViewElementStyleComposer *_styleComposer;
    id<IKStyleableElement> _parentStyleableElement;
    NSString *_elementID;
    unsigned long long _elementType;
    NSString *_elementName;
    IKViewElement *_parent;
    NSDictionary *_attributes;
    NSString *_accessibilityText;
    NSString *_autoHighlightIdentifier;
    NSDictionary *_impressionableAttributes;
    unsigned long long _updateType;
    IKElementChangeSet *_unfilteredChildrenChangeset;
    NSArray *_features;
    NSMutableDictionary *_metadataDict;
    NSMutableSet *_activeSingularEvents;
    NSDictionary *_prototypesByType;
    NSString *_itmlID;
    IKDOMBindingController *_bindingController;
}

@property (readonly, copy, nonatomic) NSString *accessibilityText; // @synthesize accessibilityText=_accessibilityText;
@property (strong, nonatomic) NSMutableSet *activeSingularEvents; // @synthesize activeSingularEvents=_activeSingularEvents;
@property (weak, nonatomic) IKAppDocument *appDocument; // @synthesize appDocument=_appDocument;
@property (readonly, nonatomic) BOOL areChildrenBound; // @synthesize areChildrenBound=_areChildrenBound;
@property (readonly, strong, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property (copy, nonatomic) NSString *autoHighlightIdentifier; // @synthesize autoHighlightIdentifier=_autoHighlightIdentifier;
@property (readonly, nonatomic) IKDOMBindingController *bindingController; // @synthesize bindingController=_bindingController;
@property (readonly, strong, nonatomic) NSArray *children;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didUpdateAutoHighlightIdentifier; // @synthesize didUpdateAutoHighlightIdentifier=_didUpdateAutoHighlightIdentifier;
@property (nonatomic, getter=isDisabled) BOOL disabled; // @synthesize disabled=_disabled;
@property (readonly, copy, nonatomic) NSString *elementID; // @synthesize elementID=_elementID;
@property (readonly, copy, nonatomic) NSString *elementName; // @synthesize elementName=_elementName;
@property (readonly, nonatomic) unsigned long long elementType; // @synthesize elementType=_elementType;
@property (readonly, copy, nonatomic) NSArray *features; // @synthesize features=_features;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (nonatomic, getter=isImpressionable) BOOL impressionable; // @synthesize impressionable=_impressionable;
@property (readonly, nonatomic) NSDictionary *impressionableAttributes; // @synthesize impressionableAttributes=_impressionableAttributes;
@property (readonly, nonatomic) BOOL isPartOfPrototypeElement; // @synthesize isPartOfPrototypeElement=_isPartOfPrototypeElement;
@property (readonly, nonatomic) BOOL isProxyElement; // @synthesize isProxyElement=_isProxyElement;
@property (readonly, strong, nonatomic) NSString *itmlID; // @synthesize itmlID=_itmlID;
@property (strong, nonatomic) NSMutableDictionary *metadataDict; // @synthesize metadataDict=_metadataDict;
@property (weak, nonatomic) IKViewElement *parent; // @synthesize parent=_parent;
@property (readonly, weak, nonatomic) id<IKStyleableElement> parentStyleableElement; // @synthesize parentStyleableElement=_parentStyleableElement;
@property (strong, nonatomic) NSDictionary *prototypesByType; // @synthesize prototypesByType=_prototypesByType;
@property (readonly, nonatomic) BOOL prototypesUpdated; // @synthesize prototypesUpdated=_prototypesUpdated;
@property (readonly, strong, nonatomic) IKViewElementStyle *style;
@property (strong, nonatomic) IKViewElementStyleComposer *styleComposer; // @synthesize styleComposer=_styleComposer;
@property (readonly) Class superclass;
@property (readonly, strong, nonatomic) NSArray *unfilteredChildren; // @synthesize unfilteredChildren=_unfilteredChildren;
@property (readonly, nonatomic) IKElementChangeSet *unfilteredChildrenChangeset; // @synthesize unfilteredChildrenChangeset=_unfilteredChildrenChangeset;
@property (nonatomic) unsigned long long updateType; // @synthesize updateType=_updateType;

+ (id)_prototypesByTypeForDOMElement:(id)arg1 prototypesDOMElement:(id *)arg2;
+ (unsigned long long)evaluateElementUpdateType:(id)arg1;
+ (id)instantiateDOMElementForItem:(id)arg1 withPrototype:(id)arg2 parentDOMElement:(id)arg3 existingDOMElement:(id)arg4;
+ (BOOL)shouldParseChildDOMElement:(id)arg1;
+ (BOOL)shouldParseChildDOMElements;
+ (id)supportedFeatures;
+ (unsigned long long)updateTypeForChangeInAttribute:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3;
+ (void)willParseDOMElement:(id)arg1;
- (void).cxx_destruct;
- (void)_applyChildrenValueWithItems:(id)arg1 domBindingController:(id)arg2;
- (void)_applyUpdatedIndexesValueWithIndexes:(id)arg1 domBindingController:(id)arg2;
- (void)_updateSubtreeWithElement:(id)arg1;
- (id)actualElementForProxyElement:(id)arg1 jsContext:(id)arg2;
- (id)additionalKeysToResolveForDOMBindingController:(id)arg1;
- (void)appDocumentDidMarkStylesDirty;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)childElementWithType:(unsigned long long)arg1;
- (id)childElementsWithType:(unsigned long long)arg1;
- (id)childImageElementWithType:(unsigned long long)arg1;
- (id)childTextElementWithStyle:(unsigned long long)arg1;
- (void)configureUpdatesWithElement:(id)arg1;
- (void)dataItem:(id)arg1 didChangeSubPropertyPathWithString:(id)arg2 forPropertyPathWithString:(id)arg3 subscriptIndex:(long long)arg4;
- (void)dealloc;
- (void)dispatchEvent:(id)arg1 eventAttribute:(id)arg2 canBubble:(BOOL)arg3 isCancelable:(BOOL)arg4 extraInfo:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)dispatchEventOfType:(unsigned long long)arg1 canBubble:(BOOL)arg2 isCancelable:(BOOL)arg3 extraInfo:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)disperseUpdateType:(unsigned long long)arg1;
- (BOOL)domBindingController:(id)arg1 applyValue:(id)arg2 forKey:(id)arg3;
- (void)domBindingController:(id)arg1 didLoadBinding:(id)arg2;
- (void)domBindingController:(id)arg1 didResolveKeys:(id)arg2;
- (BOOL)domBindingController:(id)arg1 doKeysAffectChildren:(id)arg2;
- (BOOL)domBindingController:(id)arg1 doKeysAffectSubtree:(id)arg2;
- (id)findPrototypeForType:(id)arg1;
- (id)init;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)initWithPrototypeElement:(id)arg1 parent:(id)arg2 appDataItem:(id)arg3;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)resetProperty:(unsigned long long)arg1;
- (void)resetUpdates;
- (void)retrievePresentationDocument:(CDUnknownBlockType)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (BOOL)shouldResolveDataForDOMBindingController:(id)arg1;

@end
