//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <AXHearingSupport/TTYUtteranceCellDelegate-Protocol.h>
#import <AXHearingSupport/UITableViewDataSource-Protocol.h>
#import <AXHearingSupport/UITableViewDelegate-Protocol.h>
#import <AXHearingSupport/UITextViewDelegate-Protocol.h>

@class AXHADispatchTimer, CAShapeLayer, DDParsecCollectionViewController, NSDictionary, NSLock, NSMutableArray, NSMutableCharacterSet, NSMutableString, NSObject, NSString, TTYConversation, TTYTextView, TUCall, UIButton, UITableView;
@protocol OS_dispatch_queue;

@interface TTYConversationViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, TTYUtteranceCellDelegate, UITextViewDelegate>
{
    TTYTextView *_textView;
    CAShapeLayer *_bubbleLayer;
    UIButton *_gaButton;
    AXHADispatchTimer *_ttyPredictionsTimer;
    NSMutableCharacterSet *_unsupportedCharacterSet;
    NSDictionary *_asciiSubstitutions;
    AXHADispatchTimer *_voAnnouncementTimer;
    NSMutableString *_voAnnouncementBuffer;
    NSLock *_realtimeSendLock;
    NSObject<OS_dispatch_queue> *_utteranceRequestQueue;
    BOOL _processingUtteranceBuffer;
    TTYConversation *_conversation;
    DDParsecCollectionViewController *_lookupController;
    UITableView *_tableView;
    TUCall *_call;
    NSMutableArray *_utteranceBuffer;
}

@property (strong, nonatomic) TUCall *call; // @synthesize call=_call;
@property (strong, nonatomic) TTYConversation *conversation; // @synthesize conversation=_conversation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) DDParsecCollectionViewController *lookupController; // @synthesize lookupController=_lookupController;
@property (nonatomic) BOOL processingUtteranceBuffer; // @synthesize processingUtteranceBuffer=_processingUtteranceBuffer;
@property (readonly) Class superclass;
@property (strong, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property (strong, nonatomic) NSMutableArray *utteranceBuffer; // @synthesize utteranceBuffer=_utteranceBuffer;

+ (id)viewControllerForCall:(id)arg1;
+ (id)viewControllerForConversation:(id)arg1;
- (void).cxx_destruct;
- (void)_define:(id)arg1;
- (void)_sendNewUtteranceString:(id)arg1 atIndex:(unsigned long long)arg2 forCellPath:(id)arg3;
- (id)addUtterance:(id)arg1;
- (id)callContainingUtterance;
- (void)callDidConnect:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)cellAtIndexPath:(id)arg1;
- (void)dealloc;
- (void)deviceDidReceiveCharacter:(unsigned short)arg1 forUtterance:(id)arg2;
- (void)gaButtonPressed:(id)arg1;
- (id)init;
- (id)inputTextView;
- (void)processUtteranceQueue;
- (void)realtimeTextDidChange;
- (void)sendNewUtteranceString:(id)arg1;
- (void)setTextViewUtterance:(id)arg1;
- (void)setupTableView;
- (void)shareCallInfo:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (id)textViewUtterance;
- (void)toggleMute:(id)arg1;
- (void)updateMuteButton;
- (void)updateTableViewSizeAnimated:(BOOL)arg1;
- (void)updateViewForKeyboard:(id)arg1;
- (void)updateVoiceOverAnnouncement:(unsigned short)arg1;
- (void)utteranceCellDidUpdateContent:(id)arg1;
- (BOOL)utteranceIsSelected;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

