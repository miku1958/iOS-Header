//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/EKEventDetailCell.h>

@class UILabel, UITextView;

__attribute__((visibility("hidden")))
@interface EKEventDetailURLCell : EKEventDetailCell
{
    UILabel *_URLTitleView;
    UITextView *_URLView;
    int _lastLayoutPosition;
}

- (void).cxx_destruct;
- (id)_URLTitleView;
- (id)_URLView;
- (void)_layoutForWidth:(double)arg1 position:(int)arg2;
- (id)initWithEvent:(id)arg1 editable:(BOOL)arg2 style:(long long)arg3;
- (void)layoutForWidth:(double)arg1 position:(int)arg2;
- (void)layoutSubviews;
- (void)setURL:(id)arg1;
- (BOOL)update;

@end

