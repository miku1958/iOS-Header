//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAlertController.h>

#import <SearchUI/MFMailComposeViewControllerDelegate-Protocol.h>

@class NSString, SFSearchResult, UIViewController;
@protocol SFFeedbackListener;

@interface SearchUIGradingFeedbackViewController : UIAlertController <MFMailComposeViewControllerDelegate>
{
    SFSearchResult *_result;
    UIViewController *_viewControllerForPresenting;
    id<SFFeedbackListener> _feedbackDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak) id<SFFeedbackListener> feedbackDelegate; // @synthesize feedbackDelegate=_feedbackDelegate;
@property (readonly) unsigned long long hash;
@property (strong) SFSearchResult *result; // @synthesize result=_result;
@property (readonly) Class superclass;
@property (strong) UIViewController *viewControllerForPresenting; // @synthesize viewControllerForPresenting=_viewControllerForPresenting;

- (void).cxx_destruct;
- (void)addActionForGrade:(unsigned long long)arg1 title:(id)arg2;
- (id)initWithResult:(id)arg1 feedbackDelegate:(id)arg2;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)viewWillAppear:(BOOL)arg1;

@end
