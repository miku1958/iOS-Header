//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class WLKUISportsCellView;

@interface WLKUISportsCollectionViewCell : UICollectionViewCell
{
    WLKUISportsCellView *_sportsCellView;
}

@property (strong, nonatomic) WLKUISportsCellView *sportsCellView; // @synthesize sportsCellView=_sportsCellView;

+ (void)registerElements;
+ (id)sportsCardCellFromElement:(id)arg1 existingView:(id)arg2;
- (void).cxx_destruct;
- (BOOL)canBecomeFocused;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutWithElement:(id)arg1;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

