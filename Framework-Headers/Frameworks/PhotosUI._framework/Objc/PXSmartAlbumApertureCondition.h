//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSmartAlbumEXIFCondition.h>

@class NSArray, PXLabeledValue;

@interface PXSmartAlbumApertureCondition : PXSmartAlbumEXIFCondition
{
    NSArray *_apertureValues;
}

@property (strong, nonatomic) PXLabeledValue *apertureValue;
@property (readonly, nonatomic) NSArray *apertureValues;
@property (strong, nonatomic) PXLabeledValue *secondApertureValue;

+ (id)defaultSingleQueryForEditingContext:(id)arg1;
+ (id)formatter;
- (void).cxx_destruct;

@end

