//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

__attribute__((visibility("hidden")))
@interface UIPrintActivityWrapperNavigationController : UINavigationController
{
    CDUnknownBlockType _completionHandler;
    BOOL _presentedPrintInteractionController;
}

@property (nonatomic) BOOL presentedPrintInteractionController; // @synthesize presentedPrintInteractionController=_presentedPrintInteractionController;

- (void).cxx_destruct;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end

