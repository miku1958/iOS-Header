//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIActivityIndicatorView, UILabel;

@interface GKLoadingCell : UICollectionViewCell
{
    UIActivityIndicatorView *_activityIndicator;
    UILabel *_loading;
}

@property (strong, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property (strong, nonatomic) UILabel *loading; // @synthesize loading=_loading;

- (void).cxx_destruct;
- (void)awakeFromNib;

@end
