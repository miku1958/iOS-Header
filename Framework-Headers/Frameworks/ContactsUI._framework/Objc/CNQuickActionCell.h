//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CNQuickActionButton;

__attribute__((visibility("hidden")))
@interface CNQuickActionCell : UICollectionViewCell
{
    BOOL _showTitle;
    BOOL _showBackgroundPlatter;
    CNQuickActionButton *_button;
}

@property (strong, nonatomic) CNQuickActionButton *button; // @synthesize button=_button;
@property (nonatomic) BOOL showBackgroundPlatter; // @synthesize showBackgroundPlatter=_showBackgroundPlatter;
@property (nonatomic) BOOL showTitle; // @synthesize showTitle=_showTitle;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end
