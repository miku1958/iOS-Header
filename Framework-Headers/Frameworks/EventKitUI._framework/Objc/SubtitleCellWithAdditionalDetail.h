//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/EKUITableViewCell.h>

@class UILabel;

@interface SubtitleCellWithAdditionalDetail : EKUITableViewCell
{
    UILabel *_additionalDetailLabel;
    id _source;
}

@property (readonly, strong, nonatomic) UILabel *additionalDetailLabel;
@property id source; // @synthesize source=_source;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)leftFrame:(struct CGRect)arg1 overlapsRightFrame:(struct CGRect)arg2 difference:(double *)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

