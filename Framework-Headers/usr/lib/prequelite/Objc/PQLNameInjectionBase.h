//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSData.h>

@interface PQLNameInjectionBase : NSData
{
    unsigned long long _length;
    char *_bytes;
}

@property (readonly, nonatomic) NSData *sql;

- (const void *)bytes;
- (void)dealloc;
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)initWithData:(id)arg1;
- (unsigned long long)length;

@end

