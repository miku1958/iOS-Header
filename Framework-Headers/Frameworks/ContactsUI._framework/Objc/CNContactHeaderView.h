//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <ContactsUI/CNContactPhotoViewDelegate-Protocol.h>
#import <ContactsUI/CNUIReusableView-Protocol.h>

@class CNContactPhotoView, NSArray, NSDictionary, NSString, UILabel;
@protocol CNContactHeaderViewDelegate, CNPresenterDelegate;

@interface CNContactHeaderView : UIView <CNContactPhotoViewDelegate, CNUIReusableView>
{
    BOOL _needsReload;
    BOOL _alwaysShowsMonogram;
    BOOL _visibleToScrollViews;
    NSDictionary *_nameTextAttributes;
    id<CNPresenterDelegate> _presenterDelegate;
    id<CNContactHeaderViewDelegate> _delegate;
    UILabel *_nameLabel;
    NSArray *_activatedConstraints;
    NSArray *_contacts;
    CNContactPhotoView *_photoView;
}

@property (strong, nonatomic) NSArray *activatedConstraints; // @synthesize activatedConstraints=_activatedConstraints;
@property (nonatomic) BOOL alwaysShowsMonogram; // @synthesize alwaysShowsMonogram=_alwaysShowsMonogram;
@property (strong, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CNContactHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property (copy, nonatomic) NSDictionary *nameTextAttributes; // @synthesize nameTextAttributes=_nameTextAttributes;
@property (readonly, nonatomic) CNContactPhotoView *photoView; // @synthesize photoView=_photoView;
@property (weak, nonatomic) id<CNPresenterDelegate> presenterDelegate; // @synthesize presenterDelegate=_presenterDelegate;
@property (readonly) Class superclass;
@property (nonatomic) BOOL visibleToScrollViews; // @synthesize visibleToScrollViews=_visibleToScrollViews;

+ (struct CGSize)defaultPhotoSize;
+ (id)descriptorForRequiredKeys;
+ (id)descriptorForRequiredKeysIncludingAvatarViewDescriptors:(BOOL)arg1;
+ (id)makePhotoViewWithMonogrammerStyle:(long long)arg1 shouldAllowTakePhotoAction:(BOOL)arg2 shouldAllowImageDrops:(BOOL)arg3;
+ (BOOL)requiresConstraintBasedLayout;
- (void).cxx_destruct;
- (BOOL)canBecomeFirstResponder;
- (id)contactViewCache;
- (void)dealloc;
- (id)descriptorForRequiredKeys;
- (id)initWithContact:(id)arg1 frame:(struct CGRect)arg2 monogrammerStyle:(long long)arg3 shouldAllowTakePhotoAction:(BOOL)arg4 shouldAllowImageDrops:(BOOL)arg5 delegate:(id)arg6;
- (void)photoViewDidSaveEditsForImageDrop:(id)arg1;
- (void)photoViewDidUpdate:(id)arg1;
- (void)prepareForReuse;
- (void)reloadDataIfNeeded;
- (void)reloadDataPreservingChanges:(BOOL)arg1;
- (void)setNeedsReload;
- (void)updateConstraints;
- (void)updateFontSizes;
- (void)updateWithContacts:(id)arg1;
- (void)updateWithNewContact:(id)arg1;
- (id)viewControllerForPhotoView:(id)arg1;

@end

