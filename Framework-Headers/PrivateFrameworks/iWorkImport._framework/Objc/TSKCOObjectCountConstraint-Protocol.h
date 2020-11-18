//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>
#import <iWorkImport/TSKCOOperation-Protocol.h>

@protocol TSKCOObjectCountConstraint;

@protocol TSKCOObjectCountConstraint <NSObject, TSKCOOperation>

@property (readonly, nonatomic) int objectCount;
@property (readonly, nonatomic) int objectCounterSpace;

- (id<TSKCOObjectCountConstraint>)operationWithNewObjectCount:(int)arg1;
@end
