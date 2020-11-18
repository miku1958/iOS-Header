//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSAttributedString, UIColor, UIRefreshControl;

__attribute__((visibility("hidden")))
@interface _UIRefreshControlContentView : UIView
{
    UIRefreshControl *_refreshControl;
    UIColor *_tintColor;
}

@property (strong, nonatomic) NSAttributedString *attributedTitle;
@property (readonly, nonatomic) double maximumSnappingHeight;
@property (readonly, nonatomic) double minimumSnappingHeight;
@property (nonatomic) UIRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property (readonly, nonatomic) long long style;
@property (strong, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;

- (void).cxx_destruct;
- (double)_heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;
- (void)didTransitionFromState:(int)arg1 toState:(int)arg2;
- (void)refreshControlInvalidatedSnappingHeight;
- (void)willTransitionFromState:(int)arg1 toState:(int)arg2;

@end
