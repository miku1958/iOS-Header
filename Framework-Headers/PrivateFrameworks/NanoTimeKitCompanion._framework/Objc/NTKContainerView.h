//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol NTKContainerViewLayoutDelegate;

@interface NTKContainerView : UIView
{
    struct {
        unsigned int layoutContainerView:1;
    } _delegateRespondsTo;
    id<NTKContainerViewLayoutDelegate> _layoutDelegate;
}

@property (weak, nonatomic) id<NTKContainerViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

