//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class GKLabel;

@interface GKMultiplayerHeaderView : UICollectionReusableView
{
    GKLabel *_label;
}

@property (strong, nonatomic) GKLabel *label; // @synthesize label=_label;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setMinPlayers:(long long)arg1 maxPlayers:(long long)arg2;

@end
