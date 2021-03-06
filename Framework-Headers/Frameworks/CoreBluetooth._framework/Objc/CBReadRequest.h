//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSError, NSMutableData;

@interface CBReadRequest : NSObject
{
    char *_bufferPtr;
    NSError *_error;
    unsigned long long _length;
    CDUnknownBlockType _completion;
    NSData *_data;
    unsigned long long _minLength;
    unsigned long long _maxLength;
    NSMutableData *_bufferData;
}

@property (strong, nonatomic) NSMutableData *bufferData; // @synthesize bufferData=_bufferData;
@property (copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property (strong, nonatomic) NSData *data; // @synthesize data=_data;
@property (readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property (readonly, nonatomic) unsigned long long length; // @synthesize length=_length;
@property (nonatomic) unsigned long long maxLength; // @synthesize maxLength=_maxLength;
@property (nonatomic) unsigned long long minLength; // @synthesize minLength=_minLength;

- (void).cxx_destruct;

@end

