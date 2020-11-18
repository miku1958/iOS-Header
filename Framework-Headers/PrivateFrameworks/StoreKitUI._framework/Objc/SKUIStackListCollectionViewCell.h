//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewReuseCollectionViewCell.h>

#import <StoreKitUI/SKUIViewElementView-Protocol.h>

@class NSMapTable, NSString;

@interface SKUIStackListCollectionViewCell : SKUIViewReuseCollectionViewCell <SKUIViewElementView>
{
    unsigned long long _alignment;
    NSMapTable *_listViews;
}

@property (nonatomic) unsigned long long alignment; // @synthesize alignment=_alignment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMapTable *listViews; // @synthesize listViews=_listViews;
@property (readonly) Class superclass;

+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
- (void).cxx_destruct;
- (BOOL)_isRightAligned;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (BOOL)layoutSubviewsWithFixedWidth:(struct CGRect)arg1 size:(struct CGSize *)arg2;
- (BOOL)layoutSubviewsWithFlowLayout:(struct CGRect)arg1 size:(struct CGSize *)arg2;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3;
- (id)viewForElementIdentifier:(id)arg1;

@end

