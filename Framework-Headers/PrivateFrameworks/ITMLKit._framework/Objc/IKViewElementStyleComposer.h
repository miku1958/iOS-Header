//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IKStyleList, IKViewElementStyle;

@interface IKViewElementStyleComposer : NSObject
{
    BOOL _requiresMediaQueryEvaluation;
    BOOL _compositionDone;
    IKViewElementStyleComposer *_defaultStyleComposer;
    IKViewElementStyleComposer *_parentStyleComposer;
    IKStyleList *_styleList;
    IKViewElementStyle *_elementStyleOverrides;
    IKViewElementStyle *_composedSansDefaultStyle;
    IKViewElementStyle *_composedStyle;
}

@property (strong, nonatomic) IKViewElementStyle *composedSansDefaultStyle; // @synthesize composedSansDefaultStyle=_composedSansDefaultStyle;
@property (strong, nonatomic) IKViewElementStyle *composedStyle; // @synthesize composedStyle=_composedStyle;
@property (nonatomic, getter=isCompositionDone) BOOL compositionDone; // @synthesize compositionDone=_compositionDone;
@property (readonly, strong, nonatomic) IKViewElementStyleComposer *defaultStyleComposer; // @synthesize defaultStyleComposer=_defaultStyleComposer;
@property (readonly, strong, nonatomic) IKViewElementStyle *elementStyleOverrides; // @synthesize elementStyleOverrides=_elementStyleOverrides;
@property (readonly, strong, nonatomic) IKViewElementStyleComposer *parentStyleComposer; // @synthesize parentStyleComposer=_parentStyleComposer;
@property (readonly, nonatomic) BOOL requiresMediaQueryEvaluation; // @synthesize requiresMediaQueryEvaluation=_requiresMediaQueryEvaluation;
@property (readonly, strong, nonatomic) IKStyleList *styleList; // @synthesize styleList=_styleList;

+ (id)styleComposerWithDefaultStyleComposer:(id)arg1 parentStyleComposer:(id)arg2 styleList:(id)arg3 elementStyleOverrides:(id)arg4;
- (void).cxx_destruct;
- (void)_composeWithMediaQueryEvaluator:(id)arg1;
- (id)composedSansDefaultStyleWithMediaQueryEvaluator:(id)arg1;
- (id)composedStyleWithMediaQueryEvaluator:(id)arg1;
- (id)consolidatedDefaultStyleList;
- (id)initWithDefaultStyleComposer:(id)arg1 parentStyleComposer:(id)arg2 styleList:(id)arg3 elementStyleOverrides:(id)arg4;
- (void)setNeedsRecomposition;

@end

