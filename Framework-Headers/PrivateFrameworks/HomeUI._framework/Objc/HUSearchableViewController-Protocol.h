//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/UITextFieldDelegate-Protocol.h>

@class UIView;
@protocol HUSearchBar;

@protocol HUSearchableViewController <UITextFieldDelegate>

@property (readonly, nonatomic) UIView<HUSearchBar> *searchBar;
@property (readonly, nonatomic) unsigned long long searchBarPosition;

- (void)updateForSearch;
@end

