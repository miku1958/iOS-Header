//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DialogEngine/DECloser-Protocol.h>

@class NSData;

@protocol DEReader <DECloser>
- (NSData *)readData;
- (NSData *)readDataOfLength:(unsigned long long)arg1;
@end
