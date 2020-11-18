//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class UIViewController;

@protocol CNPresenterDelegate <NSObject>

@property (readonly) BOOL isPresentingModalViewController;

- (void)sender:(id)arg1 dismissViewController:(UIViewController *)arg2;
- (void)sender:(id)arg1 dismissViewController:(UIViewController *)arg2 completionHandler:(void (^)(void))arg3;
- (void)sender:(id)arg1 presentViewController:(UIViewController *)arg2;
@end

