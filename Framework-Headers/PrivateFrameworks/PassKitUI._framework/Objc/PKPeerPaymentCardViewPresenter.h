//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKPaymentAuthorizationViewPresenting-Protocol.h>

@class NSString;

@interface PKPeerPaymentCardViewPresenter : NSObject <PKPaymentAuthorizationViewPresenting>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)presentCell:(id)arg1 withDataItem:(id)arg2 shouldShowSeperator:(BOOL)arg3;

@end

