//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIStatusBarRegionLinearLayout.h>

@interface _UIStatusBarRegionStackingLayout : _UIStatusBarRegionLinearLayout
{
    BOOL _hugging;
    long long _horizontalAlignment;
    double _interspace;
}

@property (nonatomic) long long horizontalAlignment; // @synthesize horizontalAlignment=_horizontalAlignment;
@property (nonatomic) BOOL hugging; // @synthesize hugging=_hugging;
@property (nonatomic) double interspace; // @synthesize interspace=_interspace;

- (id)_horizontalConstraintsForViews:(id)arg1 layoutGuides:(id)arg2;
- (BOOL)fitsAllItems;

@end
