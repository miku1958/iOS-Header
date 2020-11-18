//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface _AXAssertionServer : NSObject
{
    CDUnknownBlockType _assertionWasAcquiredHandler;
    CDUnknownBlockType _assertionWasReleasedHandler;
    NSMutableDictionary *_heldAssertionMap;
}

@property (copy, nonatomic) CDUnknownBlockType assertionWasAcquiredHandler; // @synthesize assertionWasAcquiredHandler=_assertionWasAcquiredHandler;
@property (copy, nonatomic) CDUnknownBlockType assertionWasReleasedHandler; // @synthesize assertionWasReleasedHandler=_assertionWasReleasedHandler;
@property (strong, nonatomic) NSMutableDictionary *heldAssertionMap; // @synthesize heldAssertionMap=_heldAssertionMap;

- (void).cxx_destruct;
- (void)addHeldAssertionOfType:(id)arg1 byClient:(id)arg2;
- (id)clientsHoldingAssertionOfType:(id)arg1;
- (id)description;
- (id)init;
- (void)removeHeldAssertionOfType:(id)arg1 byClient:(id)arg2;

@end

