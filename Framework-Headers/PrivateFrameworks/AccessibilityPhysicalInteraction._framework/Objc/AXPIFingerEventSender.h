//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AXPIFingerEventSender : NSObject
{
    BOOL _shouldAddRealEventFlag;
    unsigned long long _senderID;
}

@property (nonatomic) unsigned long long senderID; // @synthesize senderID=_senderID;
@property (nonatomic) BOOL shouldAddRealEventFlag; // @synthesize shouldAddRealEventFlag=_shouldAddRealEventFlag;

- (id)_assignFingerIdentifiersToTouches:(id)arg1;
- (void)_sendHandEvent:(unsigned int)arg1 touchesByFingerIdentifier:(id)arg2;
- (void)performCancel;
- (void)performDownWithTouches:(id)arg1;
- (void)performDownWithTouchesByFingerIdentifier:(id)arg1;
- (void)performMoveWithTouches:(id)arg1;
- (void)performMoveWithTouchesByFingerIdentifier:(id)arg1;
- (void)performUpWithTouches:(id)arg1;
- (void)performUpWithTouchesByFingerIdentifier:(id)arg1;

@end

