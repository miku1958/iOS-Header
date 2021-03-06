//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <SpringBoard/SBSUIRemoteAlertItemContentHostInterface-Protocol.h>

@class NSString;

@interface _SBLegacyRemoteAlertContentHostViewController : _UIRemoteViewController <SBSUIRemoteAlertItemContentHostInterface>
{
    id _delegate;
    NSString *_serviceClassName;
    BOOL _serviceHasSetPreferredContentSize;
}

@property (weak, nonatomic) id delegate; // @synthesize delegate=_delegate;
@property (copy, nonatomic) NSString *serviceClassName; // @synthesize serviceClassName=_serviceClassName;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)_getPreferredContentSizeWithReplyBlock:(CDUnknownBlockType)arg1;
- (id)description;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end

