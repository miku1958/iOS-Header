//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol NCSizeObservingViewDelegate;

__attribute__((visibility("hidden")))
@interface NCSizeObservingView : UIView
{
    BOOL _delegateInterestedInSizeChanges;
    id<NCSizeObservingViewDelegate> _delegate;
}

@property (weak, nonatomic) id<NCSizeObservingViewDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;

@end

