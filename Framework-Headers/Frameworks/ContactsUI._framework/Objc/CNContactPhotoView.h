//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <ContactsUI/CNAvatarViewDelegate-Protocol.h>
#import <ContactsUI/QLPreviewControllerDataSource-Protocol.h>
#import <ContactsUI/QLPreviewControllerDelegate-Protocol.h>
#import <ContactsUI/UIDropInteractionDelegate-Protocol.h>
#import <ContactsUI/UIImagePickerControllerDelegate-Protocol.h>
#import <ContactsUI/UINavigationControllerDelegate-Protocol.h>

@class CNAvatarView, CNMutableContact, NSArray, NSString, PRLikeness, UIButton, UIDropInteraction, UIImageView, UILongPressGestureRecognizer, UITapGestureRecognizer;
@protocol CNContactPhotoViewDelegate, CNPresenterDelegate;

__attribute__((visibility("hidden")))
@interface CNContactPhotoView : UIControl <UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIDropInteractionDelegate, QLPreviewControllerDelegate, QLPreviewControllerDataSource, CNAvatarViewDelegate>
{
    BOOL _editing;
    BOOL _modified;
    BOOL _shouldAllowTakePhotoAction;
    BOOL _prohibitsPersonaFetch;
    BOOL _isAnimatingBounce;
    BOOL _acceptsImageDrop;
    NSArray *_contacts;
    CNAvatarView *_avatarView;
    id<CNPresenterDelegate> _presenterDelegate;
    id<CNContactPhotoViewDelegate> _delegate;
    CNMutableContact *_pendingEditContact;
    PRLikeness *_originalLikeness;
    PRLikeness *_currentLikeness;
    UIButton *_addPhotoButton;
    UIButton *_editPhotoButton;
    UIImageView *_attributionImageView;
    NSArray *_variableConstraints;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UIDropInteraction *_dropInteraction;
}

@property (nonatomic) BOOL acceptsImageDrop; // @synthesize acceptsImageDrop=_acceptsImageDrop;
@property (strong, nonatomic) UIButton *addPhotoButton; // @synthesize addPhotoButton=_addPhotoButton;
@property (strong, nonatomic) UIImageView *attributionImageView; // @synthesize attributionImageView=_attributionImageView;
@property (strong, nonatomic) CNAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property (strong, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
@property (strong, nonatomic) PRLikeness *currentLikeness; // @synthesize currentLikeness=_currentLikeness;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CNContactPhotoViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UIDropInteraction *dropInteraction; // @synthesize dropInteraction=_dropInteraction;
@property (strong, nonatomic) UIButton *editPhotoButton; // @synthesize editPhotoButton=_editPhotoButton;
@property (nonatomic, getter=isEditing) BOOL editing; // @synthesize editing=_editing;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isAnimatingBounce; // @synthesize isAnimatingBounce=_isAnimatingBounce;
@property (strong, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property (nonatomic) BOOL modified; // @synthesize modified=_modified;
@property (readonly, nonatomic) CNMutableContact *mutableContact;
@property (strong, nonatomic) PRLikeness *originalLikeness; // @synthesize originalLikeness=_originalLikeness;
@property (strong, nonatomic) CNMutableContact *pendingEditContact; // @synthesize pendingEditContact=_pendingEditContact;
@property (weak, nonatomic) id<CNPresenterDelegate> presenterDelegate; // @synthesize presenterDelegate=_presenterDelegate;
@property (nonatomic) BOOL prohibitsPersonaFetch; // @synthesize prohibitsPersonaFetch=_prohibitsPersonaFetch;
@property (readonly, nonatomic) BOOL shouldAllowTakePhotoAction; // @synthesize shouldAllowTakePhotoAction=_shouldAllowTakePhotoAction;
@property (readonly) Class superclass;
@property (strong, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property (strong, nonatomic) NSArray *variableConstraints; // @synthesize variableConstraints=_variableConstraints;

+ (struct CGSize)defaultSize;
+ (BOOL)requiresConstraintBasedLayout;
+ (id)supportedPasteboardTypes;
- (void).cxx_destruct;
- (id)_api_dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)_bounceSmallPhoto;
- (id)_createImagePicker;
- (id)_createImagePickerForEditingImageData:(id)arg1 withCropRect:(struct CGRect)arg2;
- (BOOL)_isUsingCuratedPhoto;
- (id)_localizedStringForProfileAction:(id)arg1 type:(unsigned long long)arg2;
- (void)_presentFullScreenPhoto:(id)arg1;
- (void)_presentPhotoEditingSheet;
- (void)_zoomContactPhoto;
- (void)avatarTapped:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)contact;
- (void)copy:(id)arg1;
- (id)currentImageData;
- (id)currentImageDataAndCropRect:(struct CGRect *)arg1;
- (void)dealloc;
- (void)disablePhotoTapGesture;
- (BOOL)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (BOOL)hasPhoto;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 monogrammerStyle:(long long)arg2 shouldAllowTakePhotoAction:(BOOL)arg3 threeDTouchEnabled:(BOOL)arg4 allowsImageDrops:(BOOL)arg5 imageRenderer:(id)arg6;
- (BOOL)isMeContact;
- (void)longPressGesture:(id)arg1;
- (void)menuWillHide:(id)arg1;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (void)paste:(id)arg1;
- (void)presentImagePicker:(id)arg1 withStyle:(long long)arg2;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (struct CGRect)previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id *)arg3;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (id)previewController:(id)arg1 transitionViewForPreviewItem:(id)arg2;
- (void)previewControllerDidDismiss:(id)arg1;
- (id)previewPath;
- (void)resetPhoto;
- (void)saveEdits;
- (void)saveEditsWithPendingContact:(id)arg1;
- (void)saveImagePickerMediaFromInfo:(id)arg1 toContact:(id)arg2 saveToCameraRoll:(BOOL)arg3;
- (void)setHighlightedFrame:(BOOL)arg1;
- (void)updateAttributionBadge;
- (void)updateConstraints;
- (void)updateFontSizes;
- (void)updatePhoto;
- (void)updatePhotoAndNotifyDelegate:(BOOL)arg1;
- (void)willBeginPreviewInteractionForAvatarView:(id)arg1;

@end

