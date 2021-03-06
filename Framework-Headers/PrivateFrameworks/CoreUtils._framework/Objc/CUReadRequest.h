//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSError, NSMutableData;

@interface CUReadRequest : NSObject
{
    char *_bufferPtr;
    NSError *_error;
    unsigned long long _length;
    unsigned char _messageUUID[16];
    BOOL _hasMessageUUID;
    unsigned int _statusFlags;
    void *_bufferBytes;
    NSMutableData *_bufferData;
    CDUnknownBlockType _completion;
    NSData *_data;
    unsigned long long _minLength;
    unsigned long long _maxLength;
}

@property (nonatomic) void *bufferBytes; // @synthesize bufferBytes=_bufferBytes;
@property (strong, nonatomic) NSMutableData *bufferData; // @synthesize bufferData=_bufferData;
@property (copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property (strong, nonatomic) NSData *data; // @synthesize data=_data;
@property (readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property (nonatomic) BOOL hasMessageUUID; // @synthesize hasMessageUUID=_hasMessageUUID;
@property (readonly, nonatomic) unsigned long long length; // @synthesize length=_length;
@property (nonatomic) unsigned long long maxLength; // @synthesize maxLength=_maxLength;
@property (readonly, nonatomic) char *messageUUID;
@property (nonatomic) unsigned long long minLength; // @synthesize minLength=_minLength;
@property (nonatomic) unsigned int statusFlags; // @synthesize statusFlags=_statusFlags;

- (void).cxx_destruct;

@end

