//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DChartTitleSceneObject.h>

__attribute__((visibility("hidden")))
@interface TSCH3DChartAxisTitleSceneObject : TSCH3DChartTitleSceneObject
{
}

+ (id)paragraphStyleForTitleFontForInfo:(id)arg1;
+ (unsigned long long)styleIndexForInfo:(id)arg1;
- (BOOL)canEditTextForSelectionPath:(id)arg1 forInfo:(id)arg2;
- (BOOL)canRenderSelectionPath:(id)arg1 forInfo:(id)arg2;
- (id)convertSelectionPathTo3D:(id)arg1 path:(id)arg2;
- (BOOL)enabledForInfo:(id)arg1;
- (struct LabelTransform)labelTransformForPositioner:(id)arg1;
- (id)selectionPathForInfo:(id)arg1 scene:(id)arg2 pickedPoint:(id)arg3;
- (id)textForInfo:(id)arg1;

@end

