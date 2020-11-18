//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/EKUIConstrainedFontsTableViewCell.h>

@class UILabel;
@protocol EKCellShortener;

@interface CalendarEventEditedByCell : EKUIConstrainedFontsTableViewCell
{
    UILabel *_titleLabel2;
    UILabel *_valueLabel2;
    unsigned int _valuePlaceholder:2;
    id<EKCellShortener> _shortener;
}

@property (readonly, strong, nonatomic) UILabel *detailTextLabel2;
@property (weak, nonatomic) id<EKCellShortener> shortener; // @synthesize shortener=_shortener;
@property (readonly, strong, nonatomic) UILabel *textLabel2;

- (void).cxx_destruct;
- (void)_checkValueWidth;
- (void)_copyTextLabelAttributesFrom:(id)arg1 to:(id)arg2;
- (BOOL)detailText2IsPlaceholder;
- (BOOL)detailTextIsPlaceholder;
- (void)layoutSubviews;
- (void)setDetailText2IsPlaceholder:(BOOL)arg1;
- (void)setDetailTextIsPlaceholder:(BOOL)arg1;

@end

