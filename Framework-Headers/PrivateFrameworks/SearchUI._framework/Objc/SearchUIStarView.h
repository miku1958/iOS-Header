//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface SearchUIStarView : UIView
{
    double _rating;
}

@property double rating; // @synthesize rating=_rating;

+ (id)emptyStar;
+ (id)fullStar;
+ (id)halfStar;
+ (id)starImageWithName:(id)arg1;
- (id)initWithStarRating:(double)arg1 style:(unsigned long long)arg2;

@end
