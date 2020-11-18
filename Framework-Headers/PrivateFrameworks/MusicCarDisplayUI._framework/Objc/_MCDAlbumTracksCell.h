//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UILabel;

@interface _MCDAlbumTracksCell : UITableViewCell
{
    UILabel *_titleLabel;
    UILabel *_trackNumberLabel;
    UILabel *_durationLabel;
    double _maximumDurationWidth;
}

@property (copy, nonatomic) NSString *durationText;
@property (nonatomic) double maximumDurationWidth; // @synthesize maximumDurationWidth=_maximumDurationWidth;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *trackNumberText;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;

@end

