//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIFocusContainerGuide;

@interface _TVFocusRedirectView : UIView
{
    BOOL _containsInertia;
    UIFocusContainerGuide *_containerGuide;
}

@property (readonly, nonatomic) UIFocusContainerGuide *containerGuide; // @synthesize containerGuide=_containerGuide;
@property (nonatomic) BOOL containsInertia; // @synthesize containsInertia=_containsInertia;

- (void).cxx_destruct;
- (BOOL)_containsInertiaSelectionChanges;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end

