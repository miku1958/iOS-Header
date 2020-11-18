//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, PKTransitAppletState, PKTransitPassProperties;

@interface NPKPassAssociatedInfo : NSObject
{
    PKTransitPassProperties *_transitProperties;
    PKTransitAppletState *_transitAppletState;
    NSArray *_balanceFields;
    NSArray *_commutePlanFields;
}

@property (readonly, nonatomic) NSArray *balanceFields; // @synthesize balanceFields=_balanceFields;
@property (readonly, nonatomic) NSArray *commutePlanFields; // @synthesize commutePlanFields=_commutePlanFields;
@property (readonly, nonatomic) PKTransitAppletState *transitAppletState; // @synthesize transitAppletState=_transitAppletState;
@property (readonly, nonatomic) PKTransitPassProperties *transitProperties; // @synthesize transitProperties=_transitProperties;

- (void).cxx_destruct;
- (id)description;
- (id)initWithTransitProperties:(id)arg1 appletState:(id)arg2 balanceFields:(id)arg3 commutePlanFields:(id)arg4;

@end
