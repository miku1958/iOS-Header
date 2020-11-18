//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <CardKit/CRKCardSectionView-Protocol.h>

@class NSString;
@protocol CRKComposableView;

@interface CRKContainerCardSectionView : UIView <CRKCardSectionView>
{
    UIView *_userInputEventInterceptView;
    UIView<CRKComposableView> *_composedSuperview;
    NSString *_cardSectionViewIdentifier;
    UIView *_contentView;
    struct CGSize _contentSize;
}

@property (copy, nonatomic) NSString *cardSectionViewIdentifier; // @synthesize cardSectionViewIdentifier=_cardSectionViewIdentifier;
@property (weak, nonatomic) UIView<CRKComposableView> *composedSuperview; // @synthesize composedSuperview=_composedSuperview;
@property (nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property (strong, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL interceptsTouches;
@property (readonly) Class superclass;

+ (struct CGSize)sizeThatFitsCardSection:(id)arg1 boundingSize:(struct CGSize)arg2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)removeFromComposedSuperview;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

