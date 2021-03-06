//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSData.h>

@interface NSData (InternalUtils)

@property (readonly, nonatomic) NSData *NRSHA256;

+ (id)dataWithRandomBytesOfSize:(unsigned long long)arg1;
+ (id)fromUUID:(id)arg1;
- (void)NRSHA256:(unsigned char [32])arg1;
- (BOOL)matchesDataAtFilePath:(id)arg1;
- (id)toUUID;
@end

