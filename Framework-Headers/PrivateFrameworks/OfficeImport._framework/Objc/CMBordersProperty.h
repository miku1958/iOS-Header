//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/CMProperty.h>

@class OITSUColor;

__attribute__((visibility("hidden")))
@interface CMBordersProperty : CMProperty
{
    OITSUColor *mBorderColor;
    OITSUColor *mBorderTopColor;
    OITSUColor *mBorderLeftColor;
    OITSUColor *mBorderBottomColor;
    OITSUColor *mBorderRightColor;
    int mBorderStyle[5];
    int mBorderWidth[5];
    int mCustomWidth;
}

+ (BOOL)isStroked:(id)arg1;
- (void).cxx_destruct;
- (void)adjustValues;
- (id)colorString;
- (id)cssString;
- (id)cssStringForName:(id)arg1;
- (id)init;
- (id)initWithOADStroke:(id)arg1;
- (BOOL)isNoneAtLocation:(int)arg1;
- (void)setFromOadStroke:(id)arg1 atLocation:(int)arg2 state:(id)arg3;
- (void)setNoneAtLocation:(int)arg1;
- (id)stringFromColor:(id)arg1;
- (id)stringFromStyleEnum:(int)arg1;
- (id)stringFromWidthEnum:(int)arg1;
- (id)styleString;
- (id)widthString;

@end
