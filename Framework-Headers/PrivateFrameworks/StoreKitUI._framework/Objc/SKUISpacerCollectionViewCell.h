//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUICollectionViewCell.h>

#import <StoreKitUI/SKUIViewElementView-Protocol.h>

@class NSString;

@interface SKUISpacerCollectionViewCell : SKUICollectionViewCell <SKUIViewElementView>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3;
- (id)viewForElementIdentifier:(id)arg1;

@end
