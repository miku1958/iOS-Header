//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class AMSUICommonView;

@interface AMSUICommonCollectionViewCell : UICollectionViewCell
{
    AMSUICommonView *_underlyingContentView;
}

@property (readonly, nonatomic) AMSUICommonView *contentView;
@property (readonly, nonatomic) AMSUICommonView *underlyingContentView; // @synthesize underlyingContentView=_underlyingContentView;

- (void).cxx_destruct;
- (void)_setup;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)tintColor;

@end

