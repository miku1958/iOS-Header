//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSTCellStyle, TSWPParagraphStyle;

@interface TSTTableHeaderInfo : NSObject
{
    TSTCellStyle *mCellStyle;
    TSWPParagraphStyle *mTextStyle;
    double mSize;
    unsigned char mHidingState;
    unsigned short mNumberOfCells;
}

@property (strong, nonatomic) TSTCellStyle *cellStyle; // @synthesize cellStyle=mCellStyle;
@property (nonatomic) unsigned char hidingState; // @synthesize hidingState=mHidingState;
@property (nonatomic) unsigned short numberOfCells; // @synthesize numberOfCells=mNumberOfCells;
@property (nonatomic) double size; // @synthesize size=mSize;
@property (strong, nonatomic) TSWPParagraphStyle *textStyle; // @synthesize textStyle=mTextStyle;

- (void)dealloc;
- (id)description;

@end

