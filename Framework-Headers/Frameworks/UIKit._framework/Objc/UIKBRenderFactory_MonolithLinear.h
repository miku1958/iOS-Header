//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIKBRenderFactory_Monolith.h>

__attribute__((visibility("hidden")))
@interface UIKBRenderFactory_MonolithLinear : UIKBRenderFactory_Monolith
{
}

- (struct CGRect)_insetRectForSpaceKeyRect:(struct CGRect)arg1 yOffset:(double)arg2;
- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (BOOL)forceVariantsInsideKeyplane;
- (BOOL)includeDeleteInVariants;
- (BOOL)preferGlyphForClear;
- (BOOL)preferGlyphForDelete;
- (BOOL)smallTextForSpaceAndClear;
- (BOOL)spaceKeyIsPressed;
- (double)tldKeyFontSize;
- (double)tldKeyFontWeight;

@end

