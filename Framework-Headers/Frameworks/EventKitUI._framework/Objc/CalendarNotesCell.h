//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/EKUITableViewCell.h>

@class NSString, UITextView;

@interface CalendarNotesCell : EKUITableViewCell
{
    UITextView *_textView;
    NSString *_text;
}

@property (strong, nonatomic) NSString *placeholder;
@property (copy, nonatomic) NSString *text; // @synthesize text=_text;
@property (readonly, strong, nonatomic) UITextView *textView;

- (void).cxx_destruct;
- (BOOL)becomeFirstResponder;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;

@end

