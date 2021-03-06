//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <StoreKitUI/SKUIViewElementView-Protocol.h>

@class NSString, SKUIAttributedStringLayout, UIImage;

__attribute__((visibility("hidden")))
@interface SKUIStarRatingViewElementView : UIView <SKUIViewElementView>
{
    struct UIEdgeInsets _contentInset;
    long long _elementSpacing;
    UIImage *_starRatingImage;
    SKUIAttributedStringLayout *_textLayout;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long elementSpacing; // @synthesize elementSpacing=_elementSpacing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_attributedStringWithViewElement:(id)arg1 context:(id)arg2;
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (id)textPropertiesForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3;
- (id)viewForElementIdentifier:(id)arg1;

@end

