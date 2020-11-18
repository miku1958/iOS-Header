//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CHDChart, OADDrawingTheme;

__attribute__((visibility("hidden")))
@interface CHAutoStyling : NSObject
{
    CHDChart *mChart;
    OADDrawingTheme *mDrawingTheme;
}

+ (id)autoStylingWithChart:(id)arg1 drawingTheme:(id)arg2;
- (void).cxx_destruct;
- (int)defaultMarkerStyleForSeriesIndex:(unsigned long long)arg1;
- (id)drawingTheme;
- (id)initWithChart:(id)arg1 drawingTheme:(id)arg2;
- (void)replaceStrokeAndFillInEmptyMarker:(id)arg1 withSeriesGraphicProperties:(id)arg2;

@end
