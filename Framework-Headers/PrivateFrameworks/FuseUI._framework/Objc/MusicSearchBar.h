//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UISearchBar.h>

@protocol MusicSearchBarDelegate;

@interface MusicSearchBar : UISearchBar
{
}

@property (nonatomic) id<MusicSearchBarDelegate> delegate; // @dynamic delegate;

- (BOOL)_isInBar;
- (void)layoutSubviews;

@end

