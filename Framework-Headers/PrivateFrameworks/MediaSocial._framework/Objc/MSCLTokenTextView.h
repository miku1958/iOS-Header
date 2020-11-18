//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextView.h>

@class NSMutableArray, NSString;
@protocol MSCLTokenTextViewDelegate;

@interface MSCLTokenTextView : UITextView
{
    long long _maximumTagLength;
    NSString *_tagDelimeter;
    NSMutableArray *_tokenViews;
    id<MSCLTokenTextViewDelegate> _changeDelegate;
    NSString *_tagSuffix;
}

@property (weak, nonatomic) id<MSCLTokenTextViewDelegate> changeDelegate; // @synthesize changeDelegate=_changeDelegate;
@property (nonatomic) long long maximumTagLength; // @synthesize maximumTagLength=_maximumTagLength;
@property (readonly, copy, nonatomic) NSString *pendingTagForSelectedRange;
@property (copy, nonatomic) NSString *tagDelimeter; // @synthesize tagDelimeter=_tagDelimeter;
@property (copy, nonatomic) NSString *tagSuffix; // @synthesize tagSuffix=_tagSuffix;
@property (readonly, nonatomic) struct CGRect textRectForSelectedRange;

- (void).cxx_destruct;
- (struct _NSRange)_tagRangeForRange:(struct _NSRange)arg1;
- (BOOL)becomeFirstResponder;
- (void)enumerateTokenAttachmentsUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (void)insertTokenWithAttachment:(id)arg1;
- (id)pendingTagForRange:(struct _NSRange)arg1 usedRange:(struct _NSRange *)arg2;
- (void)reloadTokenSelection;
- (void)reloadTokenViews;
- (void)replaceTextInRange:(struct _NSRange)arg1 withTokenAttachment:(id)arg2 suffix:(id)arg3;
- (BOOL)resignFirstResponder;
- (BOOL)selectTokenAtIndex:(long long)arg1;
- (void)setAttributedText:(id)arg1;
- (id)textWithResolvedTokenStrings;

@end
