//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinDistributorCompanion/BBObserverDelegate-Protocol.h>

@class NSString;
@protocol BBObserverDelegate, BLTBBObserverDelegateDelegate;

@interface BLTBBObserverDelegate : NSObject <BBObserverDelegate>
{
    id<BBObserverDelegate> _actualDelegate;
    id<BLTBBObserverDelegateDelegate> _delegate;
}

@property (weak) id<BBObserverDelegate> actualDelegate; // @synthesize actualDelegate=_actualDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<BLTBBObserverDelegateDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)observer:(id)arg1 noteServerConnectionStateChanged:(BOOL)arg2;
- (BOOL)respondsToSelector:(SEL)arg1;

@end

