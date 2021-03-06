//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/PXGadget-Protocol.h>

@class NSString, PHPerson, PXGadgetSpec, PXPeopleScalableAvatarView, UIButton, UILabel;
@protocol PXGadgetDelegate;

@interface PXPeopleQuestionMergeGadget : UIViewController <PXGadget>
{
    id<PXGadgetDelegate> _delegate;
    PXGadgetSpec *_gadgetSpec;
    unsigned long long _gadgetType;
    PHPerson *_person;
    PXPeopleScalableAvatarView *_keyFaceView;
    UILabel *_titleLabel;
    UIButton *_reviewButton;
}

@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) unsigned long long accessoryButtonType;
@property (readonly, nonatomic) Class collectionViewItemClass;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXGadgetDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned long long gadgetCapabilities;
@property (strong, nonatomic) PXGadgetSpec *gadgetSpec; // @synthesize gadgetSpec=_gadgetSpec;
@property (readonly, nonatomic) unsigned long long gadgetType; // @synthesize gadgetType=_gadgetType;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long headerStyle;
@property (strong, nonatomic) PXPeopleScalableAvatarView *keyFaceView; // @synthesize keyFaceView=_keyFaceView;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (strong, nonatomic) PHPerson *person; // @synthesize person=_person;
@property (nonatomic) long long priority;
@property (strong, nonatomic) UIButton *reviewButton; // @synthesize reviewButton=_reviewButton;
@property (readonly) Class superclass;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (nonatomic) struct CGRect visibleContentRect;

- (void).cxx_destruct;
- (id)contentViewController;
- (id)initWithPerson:(id)arg1;
- (void)reviewButtonTapped:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)viewDidLoad;

@end

