//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, WCMessage;

@interface WCQueuedMessage : NSObject
{
    WCMessage *_message;
    CDUnknownBlockType _completionHandler;
    NSDate *_creationDate;
}

@property (copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (readonly) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property (strong) WCMessage *message; // @synthesize message=_message;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)description;
- (id)initWithMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
