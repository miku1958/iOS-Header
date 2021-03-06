//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IKImageElement, IKTextElement, IKViewElement, NSArray, TVImageProxy, UIColor;

__attribute__((visibility("hidden")))
@interface VUIPopoverGroup : NSObject
{
    IKViewElement *_groupElement;
    IKImageElement *_downImageElement;
    IKImageElement *_upImageElement;
    IKTextElement *_titleElement;
    NSArray *_groupOptions;
    UIColor *_highlightColor;
}

@property (readonly, nonatomic) IKImageElement *downImageElement; // @synthesize downImageElement=_downImageElement;
@property (readonly, nonatomic) TVImageProxy *downImageProxy;
@property (readonly, nonatomic) IKViewElement *groupElement; // @synthesize groupElement=_groupElement;
@property (readonly, copy, nonatomic) NSArray *groupOptions; // @synthesize groupOptions=_groupOptions;
@property (readonly, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property (readonly, nonatomic) IKTextElement *titleElement; // @synthesize titleElement=_titleElement;
@property (readonly, nonatomic) IKImageElement *upImageElement; // @synthesize upImageElement=_upImageElement;
@property (readonly, nonatomic) TVImageProxy *upImageProxy;

- (void).cxx_destruct;
- (id)_init;
- (void)_populateWithElement:(id)arg1;
- (id)init;
- (id)initWithViewElement:(id)arg1;

@end

