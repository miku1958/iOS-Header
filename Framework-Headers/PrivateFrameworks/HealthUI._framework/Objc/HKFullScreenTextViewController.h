//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, UITextView;

@interface HKFullScreenTextViewController : UIViewController
{
    NSString *_detailText;
}

@property (copy, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property (readonly) UITextView *textView;

- (void).cxx_destruct;
- (void)createTextView;
- (id)description;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
