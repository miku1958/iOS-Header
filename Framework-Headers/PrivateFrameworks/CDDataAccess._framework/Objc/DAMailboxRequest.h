//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DAMailboxRequest : NSObject
{
    int _requestType;
    int _bodyFormat;
    NSString *_messageID;
}

@property (nonatomic) int bodyFormat; // @synthesize bodyFormat=_bodyFormat;
@property (copy, nonatomic) NSString *messageID; // @synthesize messageID=_messageID;
@property (nonatomic) int requestType; // @synthesize requestType=_requestType;

- (void).cxx_destruct;
- (id)init;

@end

