//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSmartAlbumCondition.h>

@class NSArray, PXLabeledValue;

@interface PXSmartAlbumFlashCondition : PXSmartAlbumCondition
{
    NSArray *_flashFiredValues;
}

@property (strong, nonatomic) PXLabeledValue *flashFiredValue;
@property (readonly, nonatomic) NSArray *flashFiredValues;

+ (id)defaultSingleQueryForEditingContext:(id)arg1;
- (void).cxx_destruct;

@end

