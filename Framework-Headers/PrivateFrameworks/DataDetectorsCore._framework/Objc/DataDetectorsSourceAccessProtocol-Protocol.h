//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSFileHandle, NSMutableArray, NSNumber, NSString;

@protocol DataDetectorsSourceAccessProtocol
- (void)fileForSourceRead:(NSNumber *)arg1 resourceType:(unsigned long long)arg2 withReply:(void (^)(NSFileHandle *))arg3;
- (void)filesForSourceRead:(NSArray *)arg1 resourceType:(unsigned long long)arg2 withReply:(void (^)(NSArray *))arg3;
- (void)writeSourceFromJSONFile:(NSFileHandle *)arg1 source:(NSNumber *)arg2 withReply:(void (^)(BOOL))arg3;
- (void)writeSourceFromRawData:(NSMutableArray *)arg1 source:(NSNumber *)arg2 signature:(NSString *)arg3 withReply:(void (^)(BOOL))arg4;
@end

