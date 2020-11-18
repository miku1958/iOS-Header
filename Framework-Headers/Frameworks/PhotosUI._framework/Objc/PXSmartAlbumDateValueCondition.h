//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSmartAlbumCondition.h>

@class NSArray, NSDate, NSNumber, PXLabeledValue;

@interface PXSmartAlbumDateValueCondition : PXSmartAlbumCondition
{
    NSArray *_unitValues;
}

@property (strong, nonatomic) NSDate *dateValue;
@property (readonly, nonatomic) BOOL hasNumberOfUnitValue;
@property (strong, nonatomic) NSNumber *numberOfUnitValue;
@property (strong, nonatomic) NSDate *secondDateValue;
@property (strong, nonatomic) PXLabeledValue *unitValue;
@property (readonly, nonatomic) NSArray *unitValues;

- (void).cxx_destruct;
- (long long)comparatorMode;
- (void)setComparatorValue:(id)arg1;

@end
