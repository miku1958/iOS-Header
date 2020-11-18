//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <EventKitUI/ABUnknownPersonViewControllerDelegate-Protocol.h>

@class ABUnknownPersonViewController, NSString;
@protocol EKIdentityProtocol;

__attribute__((visibility("hidden")))
@interface EKUnknownIdentityViewController : UIViewController <ABUnknownPersonViewControllerDelegate>
{
    id<EKIdentityProtocol> _identity;
    ABUnknownPersonViewController *_unknownPersonViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithIdentity:(id)arg1;
- (void)loadView;
- (void)setIdentity:(id)arg1;
- (void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void *)arg2;

@end

