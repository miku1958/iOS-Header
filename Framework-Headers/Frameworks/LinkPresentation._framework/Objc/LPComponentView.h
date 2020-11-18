//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol LPComponentViewDelegate;

__attribute__((visibility("hidden")))
@interface LPComponentView : UIView
{
    id<LPComponentViewDelegate> _delegate;
}

@property (weak, nonatomic) id<LPComponentViewDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (void)componentViewDidMoveToWindow;
- (void)didMoveToWindow;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isFlipped;
- (void)layoutComponentView;
- (void)layoutSubviews;
- (BOOL)shouldAllowHighlightToRecognizeSimultaneouslyWithGesture:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
