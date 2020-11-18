//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDLayout.h>

@class TSDShadow;
@protocol EQKitLayout, EQKitLayoutContext;

@interface TSWPEquationLayout : TSDLayout
{
    BOOL _equationIsValid;
    id<EQKitLayout> _equationLayout;
    id<EQKitLayoutContext> _equationLayoutContext;
    struct CGColor *_textColor;
    TSDShadow *_textShadow;
}

@property (readonly, nonatomic) BOOL equationIsValid; // @synthesize equationIsValid=_equationIsValid;
@property (readonly, nonatomic) id<EQKitLayout> equationLayout; // @synthesize equationLayout=_equationLayout;
@property (strong, nonatomic) id<EQKitLayoutContext> equationLayoutContext; // @synthesize equationLayoutContext=_equationLayoutContext;
@property (readonly, nonatomic) struct CGColor *textColor; // @synthesize textColor=_textColor;
@property (readonly, nonatomic) TSDShadow *textShadow; // @synthesize textShadow=_textShadow;

- (id)computeLayoutGeometry;
- (void)dealloc;
- (struct CGRect)frameForCulling;
- (double)inlineCenteredAlignmentOffset;
- (double)inlineVerticalOffset;
- (void)validate;
- (BOOL)wantsRoundedInlinePosition;
- (void)willLayoutInlineWithTextAttributes:(struct __CFDictionary *)arg1 columnWidth:(double)arg2;

@end

