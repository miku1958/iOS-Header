//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ChatKit/UIScrollViewDelegate-Protocol.h>

@class CKConversation, NSString, UIImageView, UILabel, UIScrollView, UIView;

__attribute__((visibility("hidden")))
@interface CKSentWithSiriViewController : UIViewController <UIScrollViewDelegate>
{
    CKConversation *_conversation;
    UIScrollView *_scrollView;
    UIView *_contentView;
    UILabel *_contextDescriptionLabel;
    UIImageView *_heroImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_detailLabel;
}

@property (strong, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property (strong, nonatomic) UILabel *contextDescriptionLabel; // @synthesize contextDescriptionLabel=_contextDescriptionLabel;
@property (strong, nonatomic) CKConversation *conversation; // @synthesize conversation=_conversation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIImageView *heroImageView; // @synthesize heroImageView=_heroImageView;
@property (strong, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property (strong, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property (readonly) Class superclass;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

- (void).cxx_destruct;
- (id)_titleLabelText;
- (BOOL)canBecomeFirstResponder;
- (id)initWithConversation:(id)arg1;
- (id)inputAccessoryViewController;
- (id)localizedStringWithLanguageCode:(id)arg1 format:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;

@end

