//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, OADDrawingTheme, OADGroup, OADOrientedBounds, OADShapeStyle, ODDDiagram;

__attribute__((visibility("hidden")))
@interface ODIState : NSObject
{
    ODDDiagram *mDiagram;
    OADOrientedBounds *mDiagramOrientedBounds;
    struct CGRect mLogicalBounds;
    double mScale;
    OADGroup *mGroup;
    NSMutableArray *mPresentationNames;
    NSMutableArray *mDefaultStyleLabelNames;
    int mPointCount;
    int mPointIndex;
    OADShapeStyle *mTextStyle;
    OADDrawingTheme *mDrawingTheme;
}

- (void).cxx_destruct;
- (id)defaultStyleLabelNameForPointType:(int)arg1;
- (id)diagram;
- (id)diagramOrientedBounds;
- (id)drawingTheme;
- (id)group;
- (id)initWithDiagram:(id)arg1 group:(id)arg2 drawingTheme:(id)arg3;
- (struct CGRect)logicalBounds;
- (int)pointCount;
- (int)pointIndex;
- (id)presentationNameForPointType:(int)arg1;
- (double)scale;
- (void)setDefaultStyleLabelName:(id)arg1 forPointType:(int)arg2;
- (void)setGroup:(id)arg1;
- (void)setLogicalBounds:(struct CGRect)arg1;
- (void)setLogicalBounds:(struct CGRect)arg1 maintainAspectRatio:(BOOL)arg2;
- (void)setPointCount:(int)arg1;
- (void)setPointIndex:(int)arg1;
- (void)setPresentationName:(id)arg1 forPointType:(int)arg2;
- (void)setTextStyle:(id)arg1;
- (id)textStyle;

@end
