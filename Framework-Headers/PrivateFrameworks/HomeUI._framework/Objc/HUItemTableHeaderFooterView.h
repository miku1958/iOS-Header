//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

#import <HomeUI/UITextViewDelegate-Protocol.h>

@class NSArray, NSAttributedString, NSLayoutConstraint, NSString, UITextView;
@protocol HUTextInteractionHandling;

@interface HUItemTableHeaderFooterView : UITableViewHeaderFooterView <UITextViewDelegate>
{
    BOOL _includeBottomSpacing;
    UITextView *_messageTextView;
    id<HUTextInteractionHandling> _textInteractionHandler;
    NSArray *_constraints;
    NSLayoutConstraint *_bottomSpacingConstraint;
}

@property (copy, nonatomic) NSAttributedString *attributedMessage;
@property (strong, nonatomic) NSLayoutConstraint *bottomSpacingConstraint; // @synthesize bottomSpacingConstraint=_bottomSpacingConstraint;
@property (strong, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL includeBottomSpacing; // @synthesize includeBottomSpacing=_includeBottomSpacing;
@property (copy, nonatomic) NSString *message;
@property (strong, nonatomic) UITextView *messageTextView; // @synthesize messageTextView=_messageTextView;
@property (nonatomic) unsigned long long numberOfLines;
@property (readonly) Class superclass;
@property (weak, nonatomic) id<HUTextInteractionHandling> textInteractionHandler; // @synthesize textInteractionHandler=_textInteractionHandler;

+ (BOOL)requiresConstraintBasedLayout;
- (void).cxx_destruct;
- (double)_bottomSpacing;
- (id)initWithReuseIdentifier:(id)arg1;
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)updateConstraints;

@end

