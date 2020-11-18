//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TSReading/NSCopying-Protocol.h>

@class TSTLayout;

@interface TSTAnimation : NSObject <NSCopying>
{
    TSTLayout *mLayout;
    int mKind;
    CDStruct_5f1f7aa9 *mCellRanges;
    unsigned long long mCellRangeCount;
    unsigned long long mStageCount;
    unsigned long long mStage;
    BOOL mFinal;
    BOOL mByColumn;
    BOOL mByRow;
    BOOL mByCell;
    BOOL mByContent;
    BOOL mByCellRange;
    BOOL mByMissingCellRange;
    BOOL mReverse;
    BOOL mShowsTableChrome;
    BOOL mShowsOverlayLayers;
    BOOL mExpandBackgroundFill;
    BOOL mDrawsBlackAndWhite;
}

@property (readonly) unsigned long long cellRangeCount;
@property (readonly) BOOL clipStrokes;
@property (readonly) BOOL drawCellBackground;
@property (readonly) BOOL drawCellContent;
@property (readonly) BOOL drawStrokes;
@property (readonly) BOOL drawTableBackground;
@property (readonly) BOOL drawTableName;
@property BOOL drawsBlackAndWhite; // @synthesize drawsBlackAndWhite=mDrawsBlackAndWhite;
@property (readonly) BOOL enabled;
@property BOOL expandBackgroundFill; // @synthesize expandBackgroundFill=mExpandBackgroundFill;
@property (readonly) BOOL final; // @synthesize final=mFinal;
@property BOOL showsOverlayLayers; // @synthesize showsOverlayLayers=mShowsOverlayLayers;
@property BOOL showsTableChrome; // @synthesize showsTableChrome=mShowsTableChrome;
@property (readonly) unsigned long long stage; // @synthesize stage=mStage;
@property (readonly) unsigned long long stageCount; // @synthesize stageCount=mStageCount;

+ (BOOL)deliveryStyleSupportedForExport:(unsigned long long)arg1;
+ (id)newAnimationWithLayout:(id)arg1 andCellRange:(CDStruct_5f1f7aa9)arg2;
+ (id)newAnimationWithLayout:(id)arg1 andDeliveryStyle:(unsigned long long)arg2;
+ (unsigned long long)stageCountForTextureDeliveryStyle:(unsigned long long)arg1 andTable:(id)arg2;
+ (unsigned long long)textureDeliveryStyleFromDeliveryString:(id)arg1;
+ (id)textureDeliveryStylesLocalized:(BOOL)arg1;
- (void)addCellRange:(CDStruct_5f1f7aa9)arg1;
- (CDStruct_5f1f7aa9)cellRangeAtIndex:(unsigned long long)arg1;
- (void)clearCellRanges;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)setStage:(unsigned long long)arg1 andFinal:(BOOL)arg2;

@end

