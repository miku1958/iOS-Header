//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <EventKitUI/EKEditItemViewControllerProtocol-Protocol.h>

@class NSString, UITextView;
@protocol EKEditItemViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface EKEventDetailExtendedNotesViewController : UIViewController <EKEditItemViewControllerProtocol>
{
    UITextView *_textView;
}

@property (weak, nonatomic) id<EKEditItemViewControllerDelegate> editDelegate;
@property (nonatomic) BOOL editItemShouldBeAskedForInjectableViewController;
@property (copy, nonatomic) NSString *notes;
@property (nonatomic) BOOL presentModally;

- (void).cxx_destruct;
- (id)_textView;
- (id)init;
- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;

@end
