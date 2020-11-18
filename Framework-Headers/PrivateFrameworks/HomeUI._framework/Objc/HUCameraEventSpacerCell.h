//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@interface HUCameraEventSpacerCell : UICollectionViewCell
{
    BOOL _spansMultipleDays;
    BOOL _needsFullDashedLineWidth;
}

@property (nonatomic) BOOL needsFullDashedLineWidth; // @synthesize needsFullDashedLineWidth=_needsFullDashedLineWidth;
@property (nonatomic) BOOL spansMultipleDays; // @synthesize spansMultipleDays=_spansMultipleDays;

- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateWithRecordingEvent:(id)arg1 previousEvent:(id)arg2 spanningMultipleDays:(BOOL)arg3;

@end
