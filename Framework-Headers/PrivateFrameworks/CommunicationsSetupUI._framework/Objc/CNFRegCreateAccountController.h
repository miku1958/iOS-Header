//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CommunicationsSetupUI/CNFRegAccountWebViewController.h>

@protocol CNFRegCreateAccountControllerDelegate;

@interface CNFRegCreateAccountController : CNFRegAccountWebViewController
{
    id<CNFRegCreateAccountControllerDelegate> _delegate;
}

@property (nonatomic) id<CNFRegCreateAccountControllerDelegate> delegate; // @synthesize delegate=_delegate;

- (id)bagKey;
- (void)cancelTapped;
- (void)completeHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;
- (void)dealloc;
- (id)logName;

@end

