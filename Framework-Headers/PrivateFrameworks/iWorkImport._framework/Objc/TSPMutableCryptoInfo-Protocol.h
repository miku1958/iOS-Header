//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPCryptoInfo-Protocol.h>

@protocol TSUEncodedBlockInfo;

@protocol TSPMutableCryptoInfo <TSPCryptoInfo>
- (void)addBlockInfo:(id<TSUEncodedBlockInfo>)arg1;
- (void)incrementDecodedLengthBy:(unsigned long long)arg1;
- (void)reset;
@end

