//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SiriUI/SiriUIContentPlatterViewControllerContaining-Protocol.h>

@class NSString, SiriUIContentPlatterViewController;

@interface SiriUINavigationContentViewController : UIViewController <SiriUIContentPlatterViewControllerContaining>
{
    UIViewController *_contentViewController;
}

@property (nonatomic, getter=isContentLayoutEnabled) BOOL contentLayoutEnabled;
@property (readonly, nonatomic) SiriUIContentPlatterViewController *contentPlatterViewController;
@property (strong, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (id)_navigationContentView;
- (void)contentViewDidUpdateSize;
- (BOOL)hasContentAtPoint:(struct CGPoint)arg1;
- (void)loadView;
- (id)title;
- (void)viewDidLoad;

@end

