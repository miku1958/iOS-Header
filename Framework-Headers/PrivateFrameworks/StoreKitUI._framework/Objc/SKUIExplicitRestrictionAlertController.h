//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SKUIClientContext, UIViewController;

@interface SKUIExplicitRestrictionAlertController : NSObject
{
    SKUIClientContext *_clientContext;
    UIViewController *_presentingViewController;
}

- (void).cxx_destruct;
- (id)initWithClientContext:(id)arg1;
- (id)initWithClientContext:(id)arg1 presentingViewController:(id)arg2;
- (void)presentExplicitRestrictionAlertIfNeededOfType:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end
