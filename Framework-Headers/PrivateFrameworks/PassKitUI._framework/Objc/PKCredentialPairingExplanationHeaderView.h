//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface PKCredentialPairingExplanationHeaderView : UIView
{
    UIImageView *_imageView;
    BOOL _useCompactLayout;
}

@property (nonatomic) BOOL useCompactLayout; // @synthesize useCompactLayout=_useCompactLayout;

- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (id)pairingImage;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
