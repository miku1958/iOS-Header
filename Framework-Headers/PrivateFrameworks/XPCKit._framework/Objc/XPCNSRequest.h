//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, XPCRequest;
@protocol NSCoding;

@interface XPCNSRequest : NSObject
{
    id<NSCoding> _message;
    NSData *_data;
    XPCRequest *_request;
}

@property (readonly, strong, nonatomic) NSData *data; // @synthesize data=_data;
@property (readonly, strong, nonatomic) id<NSCoding> message; // @synthesize message=_message;
@property (readonly, strong, nonatomic) XPCRequest *request; // @synthesize request=_request;

- (void).cxx_destruct;
- (id)initWithXPCRequest:(id)arg1;
- (void)sendReply:(id)arg1;

@end
