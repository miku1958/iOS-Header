//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProactiveML/NSObject-Protocol.h>

@class NSArray, PMLSparseVector;

@protocol PMLMultiLabelClassifierProtocol <NSObject>
- (unsigned long long)outputDimension;
- (NSArray *)predict:(PMLSparseVector *)arg1;
@end

