//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <StoreKitUI/UITextViewDelegate-Protocol.h>

@class NSString, UITextView;

__attribute__((visibility("hidden")))
@interface SKUIReportAConcernDetailsCell : UITableViewCell <UITextViewDelegate>
{
    NSString *_placeholderText;
    UITextView *_textView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *placeholderText; // @synthesize placeholderText=_placeholderText;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *text;
@property (strong, nonatomic) UITextView *textView; // @synthesize textView=_textView;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)updatePlaceholderText:(BOOL)arg1;

@end

