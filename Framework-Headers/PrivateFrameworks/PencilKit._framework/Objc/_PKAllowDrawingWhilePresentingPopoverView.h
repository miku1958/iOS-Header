//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol _PKAllowDrawingWhilePresentingPopoverViewDelegate;

@interface _PKAllowDrawingWhilePresentingPopoverView : UIView
{
    BOOL _isHitTesting;
    id<_PKAllowDrawingWhilePresentingPopoverViewDelegate> _delegate;
}

@property (weak, nonatomic) id<_PKAllowDrawingWhilePresentingPopoverViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) BOOL isHitTesting; // @synthesize isHitTesting=_isHitTesting;

- (void).cxx_destruct;
- (id)_rootAncestorViewOfDimmmingView:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

