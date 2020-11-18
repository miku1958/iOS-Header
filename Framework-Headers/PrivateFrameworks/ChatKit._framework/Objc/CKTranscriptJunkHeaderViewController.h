//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKTranscriptHeaderViewController.h>

#import <ChatKit/UIPopoverPresentationControllerDelegate-Protocol.h>

@class NSString;
@protocol CKTranscriptJunkHeaderDelegate;

@interface CKTranscriptJunkHeaderViewController : CKTranscriptHeaderViewController <UIPopoverPresentationControllerDelegate>
{
    id<CKTranscriptJunkHeaderDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<CKTranscriptJunkHeaderDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_ignoreButtonPressed:(id)arg1;
- (void)_reportJunkButtonPressed:(id)arg1;
- (void)dealloc;
- (void)loadView;
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;
- (BOOL)shouldInvalidateOnAddressBookChange;

@end

