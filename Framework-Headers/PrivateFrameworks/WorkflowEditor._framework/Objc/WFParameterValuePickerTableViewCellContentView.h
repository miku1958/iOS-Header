//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <WorkflowEditor/UIContentView-Protocol.h>

@class NSString, UIImageView, UILabel, UIStackView, WFParameterValuePickerTableViewCellConfiguration;

@interface WFParameterValuePickerTableViewCellContentView : UIView <UIContentView>
{
    WFParameterValuePickerTableViewCellConfiguration *_configuration;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_iconImageView;
    UIStackView *_contentStackView;
    UIStackView *_labelsStackView;
}

@property (copy, nonatomic) WFParameterValuePickerTableViewCellConfiguration *configuration; // @synthesize configuration=_configuration;
@property (readonly, nonatomic) UIStackView *contentStackView; // @synthesize contentStackView=_contentStackView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property (readonly, nonatomic) UIStackView *labelsStackView; // @synthesize labelsStackView=_labelsStackView;
@property (readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

- (void).cxx_destruct;
- (void)applyConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

@end

