//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUIAccessoryViewController.h>

#import <SearchUI/CNActionViewDelegate-Protocol.h>
#import <SearchUI/CNContactInlineActionsViewControllerDelegate-Protocol.h>
#import <SearchUI/CNUIObjectViewControllerDelegate-Protocol.h>
#import <SearchUI/NUIContainerViewDelegate-Protocol.h>

@class CNContactInlineActionsViewController, NSString, UIView;

@interface SearchUIInlineActionsViewController : SearchUIAccessoryViewController <CNContactInlineActionsViewControllerDelegate, CNUIObjectViewControllerDelegate, CNActionViewDelegate, NUIContainerViewDelegate>
{
    CNContactInlineActionsViewController *_inlineActionsViewController;
    UIView *_messageButton;
    UIView *_directionsButton;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UIView *directionsButton; // @synthesize directionsButton=_directionsButton;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) CNContactInlineActionsViewController *inlineActionsViewController; // @synthesize inlineActionsViewController=_inlineActionsViewController;
@property (strong, nonatomic) UIView *messageButton; // @synthesize messageButton=_messageButton;
@property (readonly) Class superclass;

+ (void)clearInlineActionsCache;
+ (id)directionsButtonImage;
+ (id)inlineActionsCache;
+ (BOOL)supportsRowModel:(id)arg1;
- (void).cxx_destruct;
- (void)contactInlineActionsViewController:(id)arg1 willPerformActionOfType:(id)arg2;
- (struct CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize)arg2 forArrangedSubview:(id)arg3;
- (void)didPressActionView:(id)arg1 longPress:(BOOL)arg2;
- (id)hostingViewControllerForController:(id)arg1;
- (id)setupView;
- (unsigned long long)type;
- (void)updateWithContact:(id)arg1;
- (void)updateWithContacts:(id)arg1;
- (void)updateWithRowModel:(id)arg1;

@end

