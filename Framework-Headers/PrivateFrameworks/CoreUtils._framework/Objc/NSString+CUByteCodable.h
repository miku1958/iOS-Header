//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

#import <CoreUtils/CUByteCodable-Protocol.h>

@interface NSString (CUByteCodable) <CUByteCodable>
+ (id)createWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;
- (const char *)encodedBytesAndReturnLength:(unsigned long long *)arg1 error:(id *)arg2;
- (id)encodedDataAndReturnError:(id *)arg1;
@end

