//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSmartAlbumEXIFCondition.h>

@class NSArray, PXLabeledValue;

@interface PXSmartAlbumShutterSpeedCondition : PXSmartAlbumEXIFCondition
{
    NSArray *_shutterSpeedValues;
}

@property (strong, nonatomic) PXLabeledValue *secondShutterSpeedValue;
@property (strong, nonatomic) PXLabeledValue *shutterSpeedValue;
@property (readonly, nonatomic) NSArray *shutterSpeedValues;

+ (id)defaultSingleQueryForEditingContext:(id)arg1;
+ (id)formatter;
- (void).cxx_destruct;

@end
