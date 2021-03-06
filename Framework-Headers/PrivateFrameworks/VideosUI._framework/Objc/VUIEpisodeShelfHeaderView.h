//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class IKViewElement, VUISeasonPickerButton;

__attribute__((visibility("hidden")))
@interface VUIEpisodeShelfHeaderView : UICollectionReusableView
{
    VUISeasonPickerButton *_button;
    IKViewElement *_viewElement;
}

@property (readonly, nonatomic) VUISeasonPickerButton *button; // @synthesize button=_button;
@property (strong, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;

+ (id)configureWithElement:(id)arg1 existingView:(id)arg2;
- (void).cxx_destruct;
- (struct CGSize)_layoutWithSize:(struct CGSize)arg1 metricsOnly:(BOOL)arg2;
- (void)layoutSubviews;
- (void)setButton:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)switchToIndex:(unsigned long long)arg1;

@end

