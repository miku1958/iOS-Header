//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <WorkflowUI/WFActionEventObserver-Protocol.h>

@class NSProgress, NSString, UIColor, WFAction;

@interface WFModuleView : UIView <WFActionEventObserver>
{
    BOOL _showing;
    WFAction *_action;
    UIColor *_progressBackgroundColor;
    NSProgress *_progress;
    UIView *_progressView;
}

@property (weak, nonatomic) WFAction *action; // @synthesize action=_action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property (strong, nonatomic) UIColor *progressBackgroundColor; // @synthesize progressBackgroundColor=_progressBackgroundColor;
@property (weak, nonatomic) UIView *progressView; // @synthesize progressView=_progressView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)accessibilityContainerType;
- (id)accessibilityLabel;
- (void)actionRunningStateDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end
