//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoPassKit/NPKContactlessPaymentSessionManagerObserver-Protocol.h>

@class NSString;

@interface NPKContactlessPaymentSessionSoundsManager : NSObject <NPKContactlessPaymentSessionManagerObserver>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)contactlessPaymentSessionManager:(id)arg1 didChangeSessionState:(id)arg2;

@end

