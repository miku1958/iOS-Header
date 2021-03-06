//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUIListCollectionViewCell.h>

@class IKViewElement, VUIListLockupCollectionViewCellLayout, VUIListLockupCollectionViewCellView;

__attribute__((visibility("hidden")))
@interface VUIListLockupCollectionViewCell : VUIListCollectionViewCell
{
    CDUnknownBlockType _buttonSelectionHandler;
    IKViewElement *_viewElement;
    IKViewElement *_primaryButtonElement;
    IKViewElement *_secondaryButtonElement;
    VUIListLockupCollectionViewCellView *_listCellView;
    VUIListLockupCollectionViewCellLayout *_layout;
}

@property (copy, nonatomic) CDUnknownBlockType buttonSelectionHandler; // @synthesize buttonSelectionHandler=_buttonSelectionHandler;
@property (strong, nonatomic) VUIListLockupCollectionViewCellLayout *layout; // @synthesize layout=_layout;
@property (strong, nonatomic) VUIListLockupCollectionViewCellView *listCellView; // @synthesize listCellView=_listCellView;
@property (strong, nonatomic) IKViewElement *primaryButtonElement; // @synthesize primaryButtonElement=_primaryButtonElement;
@property (strong, nonatomic) IKViewElement *secondaryButtonElement; // @synthesize secondaryButtonElement=_secondaryButtonElement;
@property (strong, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;

+ (id)configureWithElement:(id)arg1 existingView:(id)arg2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

