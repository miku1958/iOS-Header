//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/CNContactHeaderView.h>

#import <ContactsUI/CNUIReusableView-Protocol.h>

@class CNContactFormatter, NSDictionary, NSLayoutConstraint, NSString, UILabel, UIView;

@interface CNContactHeaderDisplayView : CNContactHeaderView <CNUIReusableView>
{
    NSDictionary *_taglineTextAttributes;
    CNContactFormatter *_contactFormatter;
    NSString *_alternateName;
    NSString *_message;
    double _minHeight;
    double _maxHeight;
    UIView *_personHeaderView;
    UILabel *_taglineLabel;
    double _lastViewWidth;
    NSLayoutConstraint *_photoTopConstraint;
    NSLayoutConstraint *_photoHeightConstraint;
    NSLayoutConstraint *_avatarNameSpacingConstraint;
    struct CGSize _maxNameSize;
}

@property (strong, nonatomic) NSString *alternateName; // @synthesize alternateName=_alternateName;
@property (strong) NSLayoutConstraint *avatarNameSpacingConstraint; // @synthesize avatarNameSpacingConstraint=_avatarNameSpacingConstraint;
@property (nonatomic) unsigned long long avatarStyle;
@property (strong, nonatomic) CNContactFormatter *contactFormatter; // @synthesize contactFormatter=_contactFormatter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double lastViewWidth; // @synthesize lastViewWidth=_lastViewWidth;
@property (nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property (nonatomic) struct CGSize maxNameSize; // @synthesize maxNameSize=_maxNameSize;
@property (strong, nonatomic) NSString *message; // @synthesize message=_message;
@property (nonatomic) double minHeight; // @synthesize minHeight=_minHeight;
@property (strong, nonatomic) UIView *personHeaderView; // @synthesize personHeaderView=_personHeaderView;
@property (strong) NSLayoutConstraint *photoHeightConstraint; // @synthesize photoHeightConstraint=_photoHeightConstraint;
@property (readonly, nonatomic) double photoLabelSpacing;
@property (readonly, nonatomic) double photoMinTopMargin;
@property (strong) NSLayoutConstraint *photoTopConstraint; // @synthesize photoTopConstraint=_photoTopConstraint;
@property (readonly) Class superclass;
@property (strong) UILabel *taglineLabel; // @synthesize taglineLabel=_taglineLabel;
@property (copy, nonatomic) NSDictionary *taglineTextAttributes;

+ (id)contactHeaderViewWithContact:(id)arg1 allowsPhotoDrops:(BOOL)arg2 delegate:(id)arg3;
+ (id)contactHeaderViewWithContact:(id)arg1 delegate:(id)arg2;
+ (id)descriptorForRequiredKeysForContactFormatter:(id)arg1 includingAvatarViewDescriptors:(BOOL)arg2;
+ (id)makePhotoViewWithMonogrammerStyle:(long long)arg1 shouldAllowTakePhotoAction:(BOOL)arg2 shouldAllowImageDrops:(BOOL)arg3;
- (void).cxx_destruct;
- (id)_headerStringForContacts:(id)arg1;
- (id)_taglineStringForContacts:(id)arg1;
- (void)_updatePhotoView;
- (void)calculateLabelSizes;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)copy:(id)arg1;
- (id)descriptorForRequiredKeys;
- (void)disablePhotoTapGesture;
- (void)handleNameLabelLongPress:(id)arg1;
- (id)initWithContact:(id)arg1 frame:(struct CGRect)arg2 delegate:(id)arg3;
- (id)initWithContact:(id)arg1 frame:(struct CGRect)arg2 monogrammerStyle:(long long)arg3 shouldAllowImageDrops:(BOOL)arg4 delegate:(id)arg5;
- (void)layoutSubviews;
- (void)menuWillHide:(id)arg1;
- (void)reloadDataPreservingChanges:(BOOL)arg1;
- (void)setNameTextAttributes:(id)arg1;
- (void)tintColorDidChange;
- (void)updateConstraints;
- (void)updateFontSizes;
- (void)updateSizeDependentAttributes;

@end

