//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class MFOfflineCacheOperation;
@protocol MFDAOfflineCacheOperation;

@protocol MFDAMailAccountRequest

@property (readonly, nonatomic) BOOL isUserRequested;
@property (readonly, nonatomic) BOOL shouldSend;

- (MFOfflineCacheOperation<MFDAOfflineCacheOperation> *)deferredOperation;
- (unsigned long long)generationNumber;
@end

