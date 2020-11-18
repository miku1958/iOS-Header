//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/NCNotificationActionRunner-Protocol.h>

@class NSString, SBAlertItem;

@interface NCUserAlertActionRunner : NSObject <NCNotificationActionRunner>
{
    BOOL _shouldForwardAction;
    SBAlertItem *_alertItem;
}

@property (readonly, weak, nonatomic) SBAlertItem *alertItem; // @synthesize alertItem=_alertItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL shouldForwardAction; // @synthesize shouldForwardAction=_shouldForwardAction;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)executeAction:(id)arg1 fromOrigin:(id)arg2 endpoint:(id)arg3 withParameters:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)initWithSBAlertItem:(id)arg1;

@end
