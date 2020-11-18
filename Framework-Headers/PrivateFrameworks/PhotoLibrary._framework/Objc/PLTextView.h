//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextView.h>

@class UILabel;

@interface PLTextView : UITextView
{
    UILabel *_placeholder;
    BOOL _showingPlaceholder;
}

- (id)_placeholder;
- (void)dealloc;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setPlaceholderText:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)updatePlaceholder;

@end

