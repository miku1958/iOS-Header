//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface EKUIBlurryView : UIView
{
    BOOL _hasActivated;
    BOOL _shouldRasterizeForTransition;
}

@property double blurRadius;
@property (nonatomic) BOOL shouldRasterizeForTransition; // @synthesize shouldRasterizeForTransition=_shouldRasterizeForTransition;

- (void)_activateBlurring;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;

@end
