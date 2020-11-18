//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <UIKit/UIPrintInteractionControllerDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIPrintActivityWrapperNavigationController : UINavigationController <UIPrintInteractionControllerDelegate>
{
    CDUnknownBlockType _completionHandler;
    BOOL _presentedPrintInteractionController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL presentedPrintInteractionController; // @synthesize presentedPrintInteractionController=_presentedPrintInteractionController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end

