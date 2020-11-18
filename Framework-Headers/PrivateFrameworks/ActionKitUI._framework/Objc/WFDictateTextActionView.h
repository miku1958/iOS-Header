//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/WFActionCustomView.h>

#import <ActionKitUI/WFDictateTextActionRunningDelegate-Protocol.h>

@class NSString, UIButton, UITextView, WFDictateTextActionStopButton;

__attribute__((visibility("hidden")))
@interface WFDictateTextActionView : WFActionCustomView <WFDictateTextActionRunningDelegate>
{
    UITextView *_textView;
    WFDictateTextActionStopButton *_stopButton;
    UIButton *_inputSourceButton;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) UIButton *inputSourceButton; // @synthesize inputSourceButton=_inputSourceButton;
@property (weak, nonatomic) WFDictateTextActionStopButton *stopButton; // @synthesize stopButton=_stopButton;
@property (readonly) Class superclass;
@property (weak, nonatomic) UITextView *textView; // @synthesize textView=_textView;

+ (double)preferredHeightForAction:(id)arg1;
- (void).cxx_destruct;
- (void)action:(id)arg1 didReceiveTranscription:(id)arg2;
- (void)actionDidBeginListening:(id)arg1;
- (void)dealloc;
- (void)didEnterReusePool;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setAction:(id)arg1;
- (void)sourceButtonTapped;
- (void)stopButtonTapped;
- (void)updateInputSourceButton;
- (void)willLeaveReusePool;

@end
