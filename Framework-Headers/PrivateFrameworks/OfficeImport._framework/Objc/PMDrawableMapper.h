//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/CMDrawableMapper.h>

@class CMDrawingContext, OADShape;

__attribute__((visibility("hidden")))
@interface PMDrawableMapper : CMDrawableMapper
{
    OADShape *mShape;
    CMDrawingContext *mDrawingContext;
    BOOL mTopLevelMapper;
}

- (void).cxx_destruct;
- (id)drawingContext;
- (BOOL)isTopLevelMapper;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)mapBounds;
- (void)mapChartAt:(id)arg1 withState:(id)arg2;
- (void)mapDiagramAt:(id)arg1 withState:(id)arg2;
- (void)mapFreeForm:(id)arg1 orientedBounds:(id)arg2 transformedBounds:(struct CGRect *)arg3 state:(id)arg4;
- (void)mapOfficeArtGroupAt:(id)arg1 withState:(id)arg2;
- (void)mapOfficeArtImageAt:(id)arg1 withState:(id)arg2;
- (void)mapOfficeArtShapeAt:(id)arg1 withState:(id)arg2;
- (void)mapRectangularShapeAt:(id)arg1 withState:(id)arg2;
- (void)mapShapeAsBackgroundAt:(id)arg1 withState:(id)arg2;
- (void)setDrawingContext:(id)arg1;
- (void)setTopLevelMapper:(BOOL)arg1;
- (struct CGRect)shapeTextBoxWithState:(id)arg1;
- (struct CGRect)slideRect;
- (struct CGRect)transformRectToPage:(struct CGRect)arg1;

@end

