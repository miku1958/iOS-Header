//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SiriUI/SiriUIViewController-Protocol.h>

@class AceObject, NSString, SAUISnippet;
@protocol SiriUIAceObjectViewControllerDelegate;

@interface SiriUIBaseSnippetViewController : UIViewController <SiriUIViewController>
{
    AceObject *aceObject;
    id<SiriUIAceObjectViewControllerDelegate> _delegate;
}

@property (strong, nonatomic) AceObject *aceObject; // @synthesize aceObject;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SiriUIAceObjectViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) SAUISnippet *snippet;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)desiredHeight;
- (void)siriDidDeactivate;
- (void)siriDidReceiveAdditionalContent:(id)arg1 error:(id)arg2;
- (void)siriWillActivateFromSource:(long long)arg1;
- (void)wasAddedToTranscript;

@end
