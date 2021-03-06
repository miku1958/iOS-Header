//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IKViewElement, TVImageLayout, VUICollectionViewFeaturedView;

__attribute__((visibility("hidden")))
@interface VUICollectionViewFeaturedCell : UICollectionViewCell
{
    VUICollectionViewFeaturedView *_featuredView;
    TVImageLayout *_imageLayout;
    IKViewElement *_viewElement;
}

@property (strong, nonatomic) VUICollectionViewFeaturedView *featuredView; // @synthesize featuredView=_featuredView;
@property (strong, nonatomic) TVImageLayout *imageLayout; // @synthesize imageLayout=_imageLayout;
@property (strong, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;

+ (double)_iOSLockupWidthWithWindowWidth:(double)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2 showsPageControl:(BOOL)arg3;
+ (id)featuredCellWithElement:(id)arg1 existingCell:(id)arg2;
+ (struct CGSize)lockupSizeForElement:(id)arg1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

