//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CHSAvocadoDescriptor, UIImageView, UILabel, UIStackView;
@protocol SBLeafIconDataSource;

@interface SBHStackConfigurationWidgetTableViewCell : UITableViewCell
{
    id<SBLeafIconDataSource> _dataSource;
    CHSAvocadoDescriptor *_descriptor;
    UIStackView *_horizontalStackView;
    UIStackView *_verticalStackView;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
}

@property (strong, nonatomic) id<SBLeafIconDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (strong, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property (strong, nonatomic) CHSAvocadoDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property (strong, nonatomic) UIStackView *horizontalStackView; // @synthesize horizontalStackView=_horizontalStackView;
@property (strong, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (strong, nonatomic) UIStackView *verticalStackView; // @synthesize verticalStackView=_verticalStackView;

- (void).cxx_destruct;
- (struct SBIconImageInfo)_iconImageInfo;
- (void)configureWithDataSource:(id)arg1 icon:(id)arg2 descriptor:(id)arg3;
- (void)didMoveToWindow;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

