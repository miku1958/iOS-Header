//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@protocol TSPComponentWriteChannel;

@protocol TSPEncoder <NSObject>
- (id<TSPComponentWriteChannel>)newMetadataComponentWriteChannel;
- (id<TSPComponentWriteChannel>)newRootObjectComponentWriteChannel;
@end

