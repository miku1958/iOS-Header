//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MIME/MFBaseFilterDataConsumer.h>

@interface MFUUDecoder : MFBaseFilterDataConsumer
{
    unsigned long long _begin;
    unsigned long long _end;
    unsigned long long _length;
    unsigned long long _readBytes;
    unsigned char _encoded[4];
    BOOL _beginComplete;
    BOOL _dataComplete;
    BOOL _validLength;
    BOOL _lineComplete;
    BOOL _passthrough;
}

- (long long)appendData:(id)arg1;
- (void)done;

@end
