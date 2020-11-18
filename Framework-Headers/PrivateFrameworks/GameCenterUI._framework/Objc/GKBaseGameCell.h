//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKCollectionViewCell.h>

@class GKGame, GKGameRecord, UIImageView, UILabel;

@interface GKBaseGameCell : GKCollectionViewCell
{
    UIImageView *_iconView;
    UILabel *_nameLabel;
}

@property (strong, nonatomic) GKGame *game;
@property (strong, nonatomic) GKGameRecord *gameRecord;
@property (strong, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property (strong, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;

+ (double)defaultRowHeight;
+ (id)itemHeightList;
- (struct CGRect)alignmentRectForText;
- (void)dealloc;
- (void)didUpdateModel;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)prepareForReuse;
- (void)setRepresentedItem:(id)arg1;

@end
