//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterPrivateUI/GKCollectionViewCell.h>

@class UILabel;

@interface GKStatusCell : GKCollectionViewCell
{
    UILabel *_statusLabel;
}

@property (strong, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;

- (BOOL)canRemoveItem;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)prepareForReuse;
- (void)setStatus:(id)arg1;

@end
