//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView;

@interface CKEditableCollectionViewCell : UICollectionViewCell
{
    BOOL __ck_editing;
    BOOL _hidesCheckmark;
    UIImageView *_checkmark;
    struct CGRect _contentAlignmentRect;
    struct UIEdgeInsets _contentInsets;
    struct UIEdgeInsets _marginInsets;
}

@property (nonatomic, getter=_ck_isEditing, setter=_ck_setEditing:) BOOL _ck_editing; // @synthesize _ck_editing=__ck_editing;
@property (strong, nonatomic) UIImageView *checkmark; // @synthesize checkmark=_checkmark;
@property (readonly, nonatomic) struct UIEdgeInsets contentAlignmentInsets;
@property (nonatomic) struct CGRect contentAlignmentRect; // @synthesize contentAlignmentRect=_contentAlignmentRect;
@property (nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property (nonatomic) BOOL hidesCheckmark; // @synthesize hidesCheckmark=_hidesCheckmark;
@property (nonatomic) struct UIEdgeInsets marginInsets; // @synthesize marginInsets=_marginInsets;

- (void).cxx_destruct;
- (void)_ck_setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (struct UIEdgeInsets)_horizontalSafeAreaInsets;
- (id)description;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)updateCheckmarkImage;

@end

