//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol NPKRemoteInterfacePresenterDelegate;

@interface NPKRemoteInterfacePresenter : NSObject
{
    id<NPKRemoteInterfacePresenterDelegate> _delegate;
    NSXPCConnection *_xpcConnection;
}

@property (weak, nonatomic) id<NPKRemoteInterfacePresenterDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;

- (void).cxx_destruct;
- (BOOL)canPresentPaymentInterface;
- (id)init;
- (void)presentContinuityPaymentInterfaceWithRemotePaymentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentInAppPaymentInterfaceWithPaymentRequest:(id)arg1 forHostApplicationName:(id)arg2 hostBundleIdentifier:(id)arg3 hostProcessIdentifier:(int)arg4 hostIdentifier:(id)arg5 orientation:(id)arg6 completion:(CDUnknownBlockType)arg7;

@end

