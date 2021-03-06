//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CarPlaySupport/CPSPointsOfInterestPickerCell.h>

@class NSString, UILabel;

@interface CPSPointsOfInterestPickerExtendedCell : CPSPointsOfInterestPickerCell
{
    NSString *_title;
    NSString *_subtitle;
    NSString *_text;
    UILabel *_extendedTitleLabel;
    UILabel *_extendedSubtitleLabel;
    UILabel *_extendedInformativeLabel;
}

@property (strong, nonatomic) UILabel *extendedInformativeLabel; // @synthesize extendedInformativeLabel=_extendedInformativeLabel;
@property (strong, nonatomic) UILabel *extendedSubtitleLabel; // @synthesize extendedSubtitleLabel=_extendedSubtitleLabel;
@property (strong, nonatomic) UILabel *extendedTitleLabel; // @synthesize extendedTitleLabel=_extendedTitleLabel;
@property (strong, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property (strong, nonatomic) NSString *text; // @synthesize text=_text;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;

+ (id)identifier;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (struct UIEdgeInsets)safeAreaInsets;
- (void)setHighlighted:(BOOL)arg1;
- (void)setupViews;

@end

