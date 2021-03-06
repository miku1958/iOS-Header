//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXPeopleNamePickerCell.h>

@class CNAvatarView, NSArray, UILabel, UIView;

@interface PXPeopleNamePickerContactCell : PXPeopleNamePickerCell
{
    CNAvatarView *_contactAvatarView;
    UILabel *_subtitleLabel;
    UIView *_labelsContainer;
    NSArray *_constraintsForVisibleSubtitle;
    NSArray *_constraintsForHiddenSubtitle;
}

@property (strong, nonatomic) NSArray *constraintsForHiddenSubtitle; // @synthesize constraintsForHiddenSubtitle=_constraintsForHiddenSubtitle;
@property (strong, nonatomic) NSArray *constraintsForVisibleSubtitle; // @synthesize constraintsForVisibleSubtitle=_constraintsForVisibleSubtitle;
@property (readonly, weak, nonatomic) CNAvatarView *contactAvatarView; // @synthesize contactAvatarView=_contactAvatarView;
@property (weak, nonatomic) UIView *labelsContainer; // @synthesize labelsContainer=_labelsContainer;
@property (readonly, weak, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateConstraints;

@end

