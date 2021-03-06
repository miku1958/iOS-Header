//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class UIView;
@protocol CKFullscreenEffectView;

@interface CKFullscreenEffectDecorationView : UICollectionReusableView
{
    UIView<CKFullscreenEffectView> *_effectView;
}

@property (weak, nonatomic) UIView<CKFullscreenEffectView> *effectView; // @synthesize effectView=_effectView;

+ (id)decorationViewKind;
+ (id)reuseIdentifier;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setupForEffectView:(id)arg1;
- (void)tearDownEffectView;

@end

