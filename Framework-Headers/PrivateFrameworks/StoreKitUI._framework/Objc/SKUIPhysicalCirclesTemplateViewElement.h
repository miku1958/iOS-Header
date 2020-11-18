//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class NSArray, SKUILabelViewElement, SKUIPaletteViewElement, SKUIPhysicalCirclesTemplateDOMFeature;

@interface SKUIPhysicalCirclesTemplateViewElement : SKUIViewElement
{
    SKUIPhysicalCirclesTemplateDOMFeature *_scriptInterface;
}

@property (readonly, nonatomic) NSArray *circleItemElements;
@property (readonly, nonatomic) SKUIPaletteViewElement *footerPaletteElement;
@property (readonly, nonatomic) SKUIPhysicalCirclesTemplateDOMFeature *scriptInterface; // @synthesize scriptInterface=_scriptInterface;
@property (readonly, nonatomic) SKUILabelViewElement *subtitleElement;
@property (readonly, nonatomic) SKUILabelViewElement *titleElement;

+ (id)supportedFeatures;
- (void).cxx_destruct;
- (void)dispatchRemovedEventWithChildViewElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end
