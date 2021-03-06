//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <ManagedConfigurationUI/MCUIScrollAnimationResponder-Protocol.h>

@class NSString, UILabel, UIStackView;

__attribute__((visibility("hidden")))
@interface MCProfileTitlePageOrganizationCell : UITableViewCell <MCUIScrollAnimationResponder>
{
    NSString *_organizationName;
    NSString *_appleID;
    UILabel *_organizationLabel;
    UILabel *_appleIDLabel;
    UILabel *_organizationValueLabel;
    UILabel *_appleIDValueLabel;
    UIStackView *_labelStackView;
}

@property (copy, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property (strong, nonatomic) UILabel *appleIDLabel; // @synthesize appleIDLabel=_appleIDLabel;
@property (strong, nonatomic) UILabel *appleIDValueLabel; // @synthesize appleIDValueLabel=_appleIDValueLabel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIStackView *labelStackView; // @synthesize labelStackView=_labelStackView;
@property (strong, nonatomic) UILabel *organizationLabel; // @synthesize organizationLabel=_organizationLabel;
@property (copy, nonatomic) NSString *organizationName; // @synthesize organizationName=_organizationName;
@property (strong, nonatomic) UILabel *organizationValueLabel; // @synthesize organizationValueLabel=_organizationValueLabel;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createHorizontalStackWithViews:(id)arg1;
- (id)_createLabelLabel;
- (id)_createValueLabel;
- (id)_createVerticalStackWithViews:(id)arg1;
- (void)_updateConstraintWithStack:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateProgressWithTranslationDistance:(double)arg1 referenceDistance:(double)arg2 isScrolling:(BOOL)arg3;

@end

