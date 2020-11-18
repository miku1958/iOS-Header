//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

@class TSUColor;

__attribute__((visibility("hidden")))
@interface TSDFreehandDrawingToolkitUIState : TSPObject
{
    TSUColor *_currentColor;
    unsigned long long _currentToolType;
    unsigned long long _mostRecentPenToolType;
    double _penToolOpacity;
    double _penToolUnscaledWidth;
    double _pencilToolOpacity;
    double _pencilToolUnscaledWidth;
    double _crayonToolOpacity;
    double _crayonToolUnscaledWidth;
    double _fillToolOpacity;
    double _eraserToolScaledWidth;
    BOOL _eraserToolErasesWholeObjects;
}

@property (strong, nonatomic) TSUColor *currentColor; // @synthesize currentColor=_currentColor;
@property (nonatomic) unsigned long long currentToolType; // @synthesize currentToolType=_currentToolType;
@property (readonly, nonatomic) unsigned long long mostRecentPenToolType; // @synthesize mostRecentPenToolType=_mostRecentPenToolType;

- (void).cxx_destruct;
- (id)copy;
- (id)initWithContext:(id)arg1;
- (void)loadFromArchive:(const struct FreehandDrawingToolkitUIState *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)p_setupDefaultValuesFromUnarchive:(BOOL)arg1;
- (void)saveToArchive:(struct FreehandDrawingToolkitUIState *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;

@end

