//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IKImageElement, IKTextElement, IKViewElement, TVImageProxy, UIColor;

__attribute__((visibility("hidden")))
@interface VUIPopoverOption : NSObject
{
    IKViewElement *_cardElement;
    IKImageElement *_imageElement;
    IKViewElement *_optionElement;
    IKTextElement *_titleElement;
    unsigned long long _type;
    UIColor *_highlightColor;
}

@property (readonly, nonatomic) IKViewElement *cardElement; // @synthesize cardElement=_cardElement;
@property (readonly, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property (readonly, nonatomic) IKImageElement *imageElement; // @synthesize imageElement=_imageElement;
@property (readonly, nonatomic) TVImageProxy *imageProxy;
@property (readonly, nonatomic) IKViewElement *optionElement; // @synthesize optionElement=_optionElement;
@property (readonly, nonatomic) IKTextElement *titleElement; // @synthesize titleElement=_titleElement;
@property (readonly, nonatomic) unsigned long long type; // @synthesize type=_type;

- (void).cxx_destruct;
- (id)_init;
- (void)_populateWithElement:(id)arg1;
- (id)init;
- (id)initWithViewElement:(id)arg1;

@end

