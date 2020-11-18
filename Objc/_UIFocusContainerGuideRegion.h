//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIFocusGuideRegion.h>

@protocol _UIFocusRegionContainer;

@interface _UIFocusContainerGuideRegion : _UIFocusGuideRegion
{
    id<_UIFocusRegionContainer> _contentFocusRegionContainer;
}

@property (weak, nonatomic) id<_UIFocusRegionContainer> contentFocusRegionContainer; // @synthesize contentFocusRegionContainer=_contentFocusRegionContainer;

- (void).cxx_destruct;
- (void)_drawDebugQuickLookImageWithInfo:(id)arg1 inContext:(struct CGContext *)arg2;
- (id)_fallbackFocusItemForMovement:(id)arg1 inFocusMap:(id)arg2;
- (unsigned long long)_focusableBoundaries;
- (BOOL)_shouldDrawDebugQuickLookImageWithInfo:(id)arg1;
- (id)_visualRepresentationColor;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

