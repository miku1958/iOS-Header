//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/ODDLayoutObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ODDShape : ODDLayoutObject
{
    int mType;
    int mPresetType;
    NSMutableArray *mAdjustments;
}

- (void).cxx_destruct;
- (void)addAdjustment:(id)arg1;
- (id)adjustments;
- (id)description;
- (id)init;
- (int)presetType;
- (void)setPresetType:(int)arg1;
- (void)setType:(int)arg1;
- (int)type;

@end

