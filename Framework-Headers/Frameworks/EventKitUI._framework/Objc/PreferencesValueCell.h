//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/EKUIConstrainedFontsTableViewCell.h>

@protocol EKCellShortener;

@interface PreferencesValueCell : EKUIConstrainedFontsTableViewCell
{
    id<EKCellShortener> _shortener;
}

@property (weak, nonatomic) id<EKCellShortener> shortener; // @synthesize shortener=_shortener;

- (void).cxx_destruct;
- (void)_checkValueWidth;
- (void)layoutSubviews;

@end
