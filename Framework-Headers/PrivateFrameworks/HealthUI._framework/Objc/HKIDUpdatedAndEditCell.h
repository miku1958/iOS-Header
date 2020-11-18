//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSDate, NSString, UIButton, UILabel;
@protocol HKIDUpdatedAndEditCellDelegate;

@interface HKIDUpdatedAndEditCell : UITableViewCell
{
    BOOL _hideEditButton;
    id<HKIDUpdatedAndEditCellDelegate> _delegate;
    NSDate *_dateSaved;
    UILabel *_titleLabel;
    UILabel *_dateLabel;
    UIButton *_editButton;
}

@property (strong, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property (strong, nonatomic) NSDate *dateSaved; // @synthesize dateSaved=_dateSaved;
@property (weak, nonatomic) id<HKIDUpdatedAndEditCellDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic, getter=isEditButtonDisabled) BOOL disableEditButton;
@property (strong, nonatomic) UIButton *editButton; // @synthesize editButton=_editButton;
@property (nonatomic, getter=isEditButtonHidden) BOOL hideEditButton; // @synthesize hideEditButton=_hideEditButton;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (strong, nonatomic) NSString *titleText;

- (void).cxx_destruct;
- (void)_editButtonTapped:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

