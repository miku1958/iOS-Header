//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, Protocol;

@interface TSCEDistributor : NSObject
{
    NSMutableArray *_receivers;
}

@property (readonly, nonatomic) Protocol *protocol;
@property (readonly, nonatomic) NSArray *receivers; // @synthesize receivers=_receivers;

- (void).cxx_destruct;
- (void)addReceiver:(id)arg1;
- (void)addReceiverIfMissing:(id)arg1;
- (void)disconnect;
- (void)distributeBlock:(CDUnknownBlockType)arg1;
- (void)dropAllTargets;
- (BOOL)hasReceiver:(id)arg1;
- (id)init;
- (void)removeReceiver:(id)arg1;
- (void)suspendDuringBlock:(CDUnknownBlockType)arg1;

@end

