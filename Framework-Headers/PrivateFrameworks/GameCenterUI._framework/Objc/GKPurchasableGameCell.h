//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKBaseGameCell.h>

@class GKRatingView, GKStoreItemInternal, UILabel;

@interface GKPurchasableGameCell : GKBaseGameCell
{
    float _capturedRating;
    GKStoreItemInternal *_storeItem;
    UILabel *_developerLabel;
    UILabel *_priceLabel;
    GKRatingView *_ratingStarsView;
    UILabel *_numberRatings;
}

@property (nonatomic) float capturedRating; // @synthesize capturedRating=_capturedRating;
@property (strong, nonatomic) UILabel *developerLabel; // @synthesize developerLabel=_developerLabel;
@property (strong, nonatomic) UILabel *numberRatings; // @synthesize numberRatings=_numberRatings;
@property (strong, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property (strong, nonatomic) GKRatingView *ratingStarsView; // @synthesize ratingStarsView=_ratingStarsView;
@property (strong, nonatomic) GKStoreItemInternal *storeItem; // @synthesize storeItem=_storeItem;

- (BOOL)canRemoveItem;
- (void)dealloc;
- (void)didUpdateModel;
- (void)establishConstraints;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)prepareForReuse;

@end

