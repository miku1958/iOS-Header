//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface DCSinglePixelLineView : UIView
{
    BOOL _hasSetUpSizeConstraint;
}

@property (nonatomic) BOOL hasSetUpSizeConstraint; // @synthesize hasSetUpSizeConstraint=_hasSetUpSizeConstraint;

- (id)addSizeConstraint;
- (id)findSizeLayoutConstraintIfExists;
- (void)setUpHeightConstraintIfNecessary;
- (void)updateConstraints;

@end
