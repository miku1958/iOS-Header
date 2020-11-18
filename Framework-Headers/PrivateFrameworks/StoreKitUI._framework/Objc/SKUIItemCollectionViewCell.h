//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUICollectionViewCell.h>

#import <StoreKitUI/SKUICellLayoutParentView-Protocol.h>

@class NSString, SKUIItemCellLayout;

@interface SKUIItemCollectionViewCell : SKUICollectionViewCell <SKUICellLayoutParentView>
{
    BOOL _layoutNeedsLayout;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) SKUIItemCellLayout *layout;
@property (readonly) Class superclass;

- (void)applyLayoutAttributes:(id)arg1;
- (void)configureForItem:(id)arg1 clientContext:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setBounds:(struct CGRect)arg1;
- (void)setCellLayoutNeedsLayout;
- (void)setFrame:(struct CGRect)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;

@end

