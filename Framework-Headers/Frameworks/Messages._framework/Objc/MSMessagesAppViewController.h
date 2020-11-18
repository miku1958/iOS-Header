//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Messages/MSConversationDelegate-Protocol.h>
#import <Messages/MSMessagePayloadProvider-Protocol.h>

@class MSConversation, NSString;

@interface MSMessagesAppViewController : UIViewController <MSMessagePayloadProvider, MSConversationDelegate>
{
    BOOL _isReadyForDisplay;
    MSConversation *_activeConversation;
}

@property (strong, nonatomic) MSConversation *activeConversation; // @synthesize activeConversation=_activeConversation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isReadyForDisplay; // @synthesize isReadyForDisplay=_isReadyForDisplay;
@property (readonly, nonatomic) unsigned long long presentationStyle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_conversation:(id)arg1 didSelectMessage:(id)arg2;
- (void)_conversation:(id)arg1 willSelectMessage:(id)arg2;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets)arg1;
- (void)dealloc;
- (void)didBecomeActiveWithConversation:(id)arg1;
- (void)didCancelSendingMessage:(id)arg1 conversation:(id)arg2;
- (void)didReceiveMessage:(id)arg1 conversation:(id)arg2;
- (void)didResignActiveWithConversation:(id)arg1;
- (void)didSelectMessage:(id)arg1 conversation:(id)arg2;
- (void)didStartSendingMessage:(id)arg1 conversation:(id)arg2;
- (void)didTransitionToPresentationStyle:(unsigned long long)arg1;
- (void)dismiss;
- (BOOL)displaysAfterAppearance;
- (void)requestPresentationStyle:(unsigned long long)arg1;
- (void)setReadyForDisplay;
- (void)updateSnapshotWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)willBecomeActiveWithConversation:(id)arg1;
- (void)willResignActiveWithConversation:(id)arg1;
- (void)willSelectMessage:(id)arg1 conversation:(id)arg2;
- (void)willTransitionToPresentationStyle:(unsigned long long)arg1;

@end
