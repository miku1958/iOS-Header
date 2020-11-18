//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString;

@interface WLKModalTextPresenter : UIViewController
{
    NSString *_text;
    BOOL *_hideDoneButton;
}

@property (nonatomic) BOOL *hideDoneButton; // @synthesize hideDoneButton=_hideDoneButton;
@property (copy, nonatomic) NSString *text; // @synthesize text=_text;

- (void).cxx_destruct;
- (void)donePressed;
- (id)initWithTitle:(id)arg1 text:(id)arg2;
- (id)initWithTitle:(id)arg1 text:(id)arg2 doneButton:(BOOL)arg3;
- (void)presentFromParentViewController:(id)arg1;

@end
