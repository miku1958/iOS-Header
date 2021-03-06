//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NumbersQuicklook/NSObject-Protocol.h>

@class NSArray, NSSet, NSString;
@protocol TSCEReferenceResolving;

@protocol TSCEResolverContainer <NSObject>
- (void)addRemappedTableName:(NSString *)arg1;
- (void)clearRemappedTableNames;
- (unsigned int)nextUntitledResolverIndex;
- (NSSet *)remappedTableNames;
- (id<TSCEReferenceResolving>)resolverMatchingName:(NSString *)arg1;
- (BOOL)resolverNameIsUsed:(NSString *)arg1;
- (NSArray *)resolversMatchingPrefix:(NSString *)arg1;
- (void)rollbackNextUntitledResolverIndex:(unsigned int)arg1;
- (unsigned int)saveNextUntitledResolverIndex;
@end

