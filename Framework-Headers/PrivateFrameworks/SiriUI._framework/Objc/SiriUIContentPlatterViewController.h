//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, SiriUIContentPlatterView;

@interface SiriUIContentPlatterViewController : UIViewController
{
    NSArray *_contentViewControllers;
}

@property (readonly, nonatomic) SiriUIContentPlatterView *contentPlatterView;
@property (strong, nonatomic) NSArray *contentViewControllers; // @synthesize contentViewControllers=_contentViewControllers;

- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)loadView;

@end

