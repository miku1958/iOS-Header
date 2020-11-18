//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface NFResponseAPDU : NSObject
{
    unsigned short _status;
    NSData *_data;
}

@property (readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property (readonly, nonatomic) NSData *response;
@property (readonly, nonatomic) unsigned short status; // @synthesize status=_status;

+ (id)responseWithData:(id)arg1;
- (void).cxx_destruct;
- (unsigned short)decodeUnderlyingAppletError:(id *)arg1;
- (id)initWithData:(id)arg1;

@end
