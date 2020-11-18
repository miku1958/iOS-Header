//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MTVisualStylingProvider, UIColor, UIView;

@interface WFMaterialStylableTableViewCell : UITableViewCell
{
    UIColor *_overridingBackgroundColor;
    MTVisualStylingProvider *_fillProvider;
    UIView *_highlightedBackgroundView;
}

@property (strong, nonatomic) MTVisualStylingProvider *fillProvider; // @synthesize fillProvider=_fillProvider;
@property (strong, nonatomic) UIView *highlightedBackgroundView; // @synthesize highlightedBackgroundView=_highlightedBackgroundView;
@property (strong, nonatomic) UIColor *overridingBackgroundColor; // @synthesize overridingBackgroundColor=_overridingBackgroundColor;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
