//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BookUtility/BUIOChannel-Protocol.h>
#import <BookUtility/BUStreamReadChannel-Protocol.h>

@protocol BUReadChannel <BUIOChannel, BUStreamReadChannel>
- (void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 handler:(void (^)(BOOL, NSObject<OS_dispatch_data> *, NSError *))arg3;
@end

