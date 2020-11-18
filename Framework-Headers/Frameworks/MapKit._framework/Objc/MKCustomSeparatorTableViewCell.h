//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKTableViewCell.h>

@interface MKCustomSeparatorTableViewCell : MKTableViewCell
{
    double _leftSeparatorInset;
    double _rightSeparatorInset;
}

@property (nonatomic) double leadingSeparatorInset;
@property (nonatomic) double leftSeparatorInset; // @synthesize leftSeparatorInset=_leftSeparatorInset;
@property (nonatomic) double rightSeparatorInset; // @synthesize rightSeparatorInset=_rightSeparatorInset;
@property (nonatomic, getter=isSeparatorHidden) BOOL separatorHidden;
@property (nonatomic) double trailingSeparatorInset;

- (struct CGRect)_separatorFrame;
- (void)_updateSeparatorInset;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
