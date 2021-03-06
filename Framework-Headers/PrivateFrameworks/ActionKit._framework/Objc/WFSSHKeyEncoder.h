//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableData;

@interface WFSSHKeyEncoder : NSObject
{
    NSMutableData *_data;
}

@property (readonly, nonatomic) NSMutableData *data; // @synthesize data=_data;
@property (readonly, nonatomic) NSData *encodedData;
@property (readonly, nonatomic) unsigned long long encodedLength;

- (void).cxx_destruct;
- (void)encodeChar:(BOOL)arg1;
- (void)encodeData:(id)arg1;
- (void)encodeDataWithPreceedingLength:(id)arg1;
- (void)encodeInteger:(unsigned int)arg1;
- (void)encodeString:(id)arg1;
- (void)encodeStringWithPreceedingLength:(id)arg1;
- (id)init;

@end

