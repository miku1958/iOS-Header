//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>
#import <PhotosUICore/UITextFieldDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, UIFont, UITextField;

@interface PXPeopleNamePickerTitleView : UIView <UITextFieldDelegate, PXPhotoLibraryUIChangeObserver>
{
    UITextField *_nameField;
    NSArray *_people;
    NSString *_name;
    UIFont *_nameFont;
    NSString *_placeholder;
    UIFont *_placeholderFont;
    UIView *_containerView;
    NSArray *_containerStretchingConstraints;
    NSMutableArray *_fetchResults;
    NSMutableArray *_avatarViews;
}

@property (strong, nonatomic) NSMutableArray *avatarViews; // @synthesize avatarViews=_avatarViews;
@property (strong, nonatomic) NSArray *containerStretchingConstraints; // @synthesize containerStretchingConstraints=_containerStretchingConstraints;
@property (strong, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSMutableArray *fetchResults; // @synthesize fetchResults=_fetchResults;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) UITextField *nameField; // @synthesize nameField=_nameField;
@property (strong, nonatomic) UIFont *nameFont; // @synthesize nameFont=_nameFont;
@property (strong, nonatomic) NSArray *people; // @synthesize people=_people;
@property (copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property (strong, nonatomic) UIFont *placeholderFont; // @synthesize placeholderFont=_placeholderFont;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)_contentWidth;
- (void)_updateFieldPlaceholder;
- (void)_updateFieldText;
- (void)adjustLayoutForEditing:(BOOL)arg1 maxWidth:(double)arg2 animated:(BOOL)arg3;
- (void)dealloc;
- (void)finishEditing;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 people:(id)arg2;
- (struct CGRect)popoverSourceRectForSourceView:(id)arg1;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)resetImages;

@end
