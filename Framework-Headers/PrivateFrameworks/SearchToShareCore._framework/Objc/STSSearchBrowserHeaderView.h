//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSLayoutConstraint, UISearchBar;

@interface STSSearchBrowserHeaderView : UIView
{
    NSLayoutConstraint *_searchBarHeight;
    UISearchBar *_searchBar;
}

@property (readonly, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;

- (void).cxx_destruct;
- (id)init;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateConstraints;

@end
