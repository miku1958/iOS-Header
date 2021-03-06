//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint;

@interface CPSHairlineView : UIView
{
    long long _axis;
    NSLayoutConstraint *_strokeThicknessConstraint;
}

@property (nonatomic) long long axis; // @synthesize axis=_axis;
@property (strong, nonatomic) NSLayoutConstraint *strokeThicknessConstraint; // @synthesize strokeThicknessConstraint=_strokeThicknessConstraint;

+ (id)grayHairlineViewAlongAxis:(long long)arg1;
- (void).cxx_destruct;
- (void)_updateStrokeThickness;
- (id)initWithAxis:(long long)arg1 color:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;

@end

