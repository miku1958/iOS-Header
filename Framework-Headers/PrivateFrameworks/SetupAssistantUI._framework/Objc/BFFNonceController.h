//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SetupAssistantUI/BuddyController-Protocol.h>

@class NSString;
@protocol BuddyControllerDelegate;

@interface BFFNonceController : UIViewController <BuddyController>
{
    id<BuddyControllerDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<BuddyControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)controllerNeedsToRun;
- (void).cxx_destruct;

@end

