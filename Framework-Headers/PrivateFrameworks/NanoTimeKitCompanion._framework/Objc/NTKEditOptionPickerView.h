//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NTKPolygonCylinderView;

@interface NTKEditOptionPickerView : UIView
{
    NSArray *_rows;
    unsigned long long _visibleRowBufferSize;
    CDUnknownBlockType _optionToViewMapper;
    BOOL _active;
    NTKPolygonCylinderView *_cylinderView;
    unsigned long long _numberOfSides;
    UIView *_selectedOptionView;
    unsigned long long _numberOfRows;
    unsigned long long _selectedRowIndex;
    struct UIEdgeInsets _padding;
}

@property (nonatomic) BOOL active; // @synthesize active=_active;
@property (readonly, nonatomic) NTKPolygonCylinderView *cylinderView; // @synthesize cylinderView=_cylinderView;
@property (readonly, nonatomic) unsigned long long numberOfRows; // @synthesize numberOfRows=_numberOfRows;
@property (nonatomic) unsigned long long numberOfSides; // @synthesize numberOfSides=_numberOfSides;
@property (copy, nonatomic) CDUnknownBlockType optionToViewMapper; // @synthesize optionToViewMapper=_optionToViewMapper;
@property (nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property (readonly, nonatomic) id selectedOption;
@property (readonly, nonatomic) UIView *selectedOptionView; // @synthesize selectedOptionView=_selectedOptionView;
@property (nonatomic) unsigned long long selectedRowIndex; // @synthesize selectedRowIndex=_selectedRowIndex;

- (void).cxx_destruct;
- (void)_configureFaceView:(id)arg1 forOption:(id)arg2;
- (Class)_cylinderFaceViewClass;
- (void)_enumerateFaceViewsWithBlock:(CDUnknownBlockType)arg1;
- (id)_faceViewAtFaceIndex:(unsigned long long)arg1;
- (struct CGRect)_frameForCylinderView;
- (void)_rotateAnimatedToSelectedRowFromRow:(unsigned long long)arg1;
- (void)_rotateToSelectedRow;
- (id)_selectedFaceView;
- (void)_tileCylinderForRotationDirection:(long long)arg1;
- (void)_willDisplayFaceView:(id)arg1;
- (void)applyBreathingScale:(double)arg1;
- (void)applyRubberBandingFraction:(double)arg1;
- (void)decrementSelection;
- (id)description;
- (void)incrementSelection;
- (id)initWithOptions:(id)arg1 selectedOption:(id)arg2;
- (void)layoutSubviews;
- (id)optionAtIndex:(unsigned long long)arg1;
- (void)setSelectedRowIndex:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)setTransitionFraction:(double)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;

@end
