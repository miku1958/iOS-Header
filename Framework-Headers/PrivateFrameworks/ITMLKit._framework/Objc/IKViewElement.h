//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/IKAppDocumentStyleChangeObserving-Protocol.h>
#import <ITMLKit/IKStyleableElement-Protocol.h>

@class IKAppDocument, IKViewElementStyle, IKViewElementStyleComposer, NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSString;
@protocol IKStyleableElement;

@interface IKViewElement : NSObject <IKAppDocumentStyleChangeObserving, IKStyleableElement>
{
    BOOL _disabled;
    BOOL _impressionable;
    BOOL _didUpdateAutoHighlightIdentifier;
    IKAppDocument *_appDocument;
    IKViewElementStyleComposer *_styleComposer;
    id<IKStyleableElement> _parentStyleableElement;
    NSString *_elementID;
    unsigned long long _elementType;
    NSString *_elementName;
    IKViewElement *_parent;
    NSArray *_children;
    NSDictionary *_attributes;
    NSString *_accessibilityText;
    NSString *_autoHighlightIdentifier;
    NSDictionary *_impressionableAttributes;
    unsigned long long _updateType;
    NSArray *_features;
    NSMutableDictionary *_metadataDict;
    NSMutableSet *_activeSingularEvents;
    NSString *_itmlID;
}

@property (readonly, copy, nonatomic) NSString *accessibilityText; // @synthesize accessibilityText=_accessibilityText;
@property (strong, nonatomic) NSMutableSet *activeSingularEvents; // @synthesize activeSingularEvents=_activeSingularEvents;
@property (weak, nonatomic) IKAppDocument *appDocument; // @synthesize appDocument=_appDocument;
@property (readonly, strong, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property (copy, nonatomic) NSString *autoHighlightIdentifier; // @synthesize autoHighlightIdentifier=_autoHighlightIdentifier;
@property (strong, nonatomic) NSArray *children; // @synthesize children=_children;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didUpdateAutoHighlightIdentifier; // @synthesize didUpdateAutoHighlightIdentifier=_didUpdateAutoHighlightIdentifier;
@property (nonatomic, getter=isDisabled) BOOL disabled; // @synthesize disabled=_disabled;
@property (readonly, copy, nonatomic) NSString *elementID; // @synthesize elementID=_elementID;
@property (readonly, copy, nonatomic) NSString *elementName; // @synthesize elementName=_elementName;
@property (readonly, nonatomic) unsigned long long elementType; // @synthesize elementType=_elementType;
@property (readonly, copy, nonatomic) NSArray *features; // @synthesize features=_features;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isImpressionable) BOOL impressionable; // @synthesize impressionable=_impressionable;
@property (readonly, nonatomic) NSDictionary *impressionableAttributes; // @synthesize impressionableAttributes=_impressionableAttributes;
@property (readonly, strong, nonatomic) NSString *itmlID; // @synthesize itmlID=_itmlID;
@property (strong, nonatomic) NSMutableDictionary *metadataDict; // @synthesize metadataDict=_metadataDict;
@property (weak, nonatomic) IKViewElement *parent; // @synthesize parent=_parent;
@property (readonly, weak, nonatomic) id<IKStyleableElement> parentStyleableElement; // @synthesize parentStyleableElement=_parentStyleableElement;
@property (readonly, strong, nonatomic) IKViewElementStyle *style;
@property (strong, nonatomic) IKViewElementStyleComposer *styleComposer; // @synthesize styleComposer=_styleComposer;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long updateType; // @synthesize updateType=_updateType;

+ (unsigned long long)evaluateElementUpdateTypeAndReset:(id)arg1;
+ (BOOL)shouldParseChildDOMElement:(id)arg1;
+ (BOOL)shouldParseChildDOMElements;
+ (id)supportedFeatures;
- (void).cxx_destruct;
- (void)_applyUpdatesToChildrenWithElements:(id)arg1;
- (void)_reorderAndUpdateChildrenWithElements:(id)arg1;
- (void)_resetUpdates;
- (void)_setAppDocument:(id)arg1;
- (void)appDocumentDidMarkStylesDirty;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)childElementWithType:(unsigned long long)arg1;
- (id)childElementsWithType:(unsigned long long)arg1;
- (id)childImageElementWithType:(unsigned long long)arg1;
- (id)childTextElementWithStyle:(unsigned long long)arg1;
- (void)dealloc;
- (void)dispatchEvent:(id)arg1 eventAttribute:(id)arg2 canBubble:(BOOL)arg3 isCancelable:(BOOL)arg4 extraInfo:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)dispatchEventOfType:(unsigned long long)arg1 canBubble:(BOOL)arg2 isCancelable:(BOOL)arg3 extraInfo:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)init;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)resetProperty:(unsigned long long)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setViewElementUpdateType:(unsigned long long)arg1;

@end
