//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface HULinkedApplicationRatingView : UIView
{
    double _rating;
    NSArray *_starViews;
}

@property (nonatomic) double rating; // @synthesize rating=_rating;
@property (strong, nonatomic) NSArray *starViews; // @synthesize starViews=_starViews;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setupConstraints;
- (void)updateStarViews;

@end
