//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface _CATRemoteConnectionSendDataContext : NSObject
{
    NSData *_data;
    NSData *_encodedData;
    id _userInfo;
    long long _bytesWritten;
}

@property (nonatomic) long long bytesWritten; // @synthesize bytesWritten=_bytesWritten;
@property (readonly, copy, nonatomic) NSData *data; // @synthesize data=_data;
@property (readonly, nonatomic) NSData *encodedData; // @synthesize encodedData=_encodedData;
@property (readonly, nonatomic) long long remainingBytes;
@property (readonly, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1 userInfo:(id)arg2;
- (id)remainingData;

@end

