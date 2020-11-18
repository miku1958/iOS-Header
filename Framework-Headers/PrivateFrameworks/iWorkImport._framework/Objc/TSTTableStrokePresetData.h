//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSDStroke;

__attribute__((visibility("hidden")))
@interface TSTTableStrokePresetData : NSObject
{
    TSDStroke *mHorizontalStroke;
    TSDStroke *mVerticalStroke;
    TSDStroke *mExteriorStroke;
    unsigned int mVisibleMask;
}

@property (strong, nonatomic) TSDStroke *exteriorStroke; // @synthesize exteriorStroke=mExteriorStroke;
@property (strong, nonatomic) TSDStroke *horizontalStroke; // @synthesize horizontalStroke=mHorizontalStroke;
@property (nonatomic) unsigned int mask; // @synthesize mask=mVisibleMask;
@property (strong, nonatomic) TSDStroke *verticalStroke; // @synthesize verticalStroke=mVerticalStroke;

- (void)dealloc;
- (id)init;
- (id)initWithArchive:(const struct StrokePresetDataArchive *)arg1 unarchiver:(id)arg2;
- (id)initWithDeprecatedArchive:(const struct Deprecated_StrokePresetDataArchive *)arg1 unarchiver:(id)arg2;
- (id)initWithMask:(unsigned int)arg1 horizontalStroke:(id)arg2 verticalStroke:(id)arg3 exteriorStroke:(id)arg4;
- (BOOL)isEqual:(id)arg1;
- (void)saveToArchive:(struct StrokePresetDataArchive *)arg1 archiver:(id)arg2;

@end

