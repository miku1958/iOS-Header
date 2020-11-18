//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKPhoneTranscriptMessageCell.h>

@class NSAttributedString, UILabel, UIView;

@interface CKTranscriptMessageContentCell : CKPhoneTranscriptMessageCell
{
    BOOL _drawerWasVisible;
    BOOL _drawerTextChanged;
    NSAttributedString *_drawerText;
    long long _animationPauseReasons;
    UILabel *_drawerLabel;
    struct CGSize _messageDisplayViewRequestedSize;
    struct CGSize _drawerTextSize;
}

@property (nonatomic) long long animationPauseReasons; // @synthesize animationPauseReasons=_animationPauseReasons;
@property (strong, nonatomic) UILabel *drawerLabel; // @synthesize drawerLabel=_drawerLabel;
@property (readonly) struct CGRect drawerLabelFrame;
@property (copy, nonatomic) NSAttributedString *drawerText; // @synthesize drawerText=_drawerText;
@property (nonatomic) BOOL drawerTextChanged; // @synthesize drawerTextChanged=_drawerTextChanged;
@property (nonatomic) struct CGSize drawerTextSize; // @synthesize drawerTextSize=_drawerTextSize;
@property (nonatomic) BOOL drawerWasVisible; // @synthesize drawerWasVisible=_drawerWasVisible;
@property (readonly) UIView *messageDisplayView;
@property (nonatomic) struct CGSize messageDisplayViewRequestedSize; // @synthesize messageDisplayViewRequestedSize=_messageDisplayViewRequestedSize;

- (void).cxx_destruct;
- (void)configureForChatItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviewsForAlignmentContents;
- (void)layoutSubviewsForDrawer;
- (struct CGRect)messageDisplayViewFrame:(struct CGRect)arg1 inContainerFrame:(struct CGRect)arg2;
- (struct UIEdgeInsets)safeAreaInsets;
- (void)willLayoutDrawerLabelFrame:(struct CGRect *)arg1;

@end
