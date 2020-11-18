//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AXEventTapPair : NSObject
{
    int priority;
    int _type;
    CDUnknownBlockType handler;
    NSString *identifier;
    struct __IOHIDEventSystemClient *_systemClient;
    CDUnknownBlockType _matchingServiceHandler;
}

@property (copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier;
@property (copy, nonatomic) CDUnknownBlockType matchingServiceHandler; // @synthesize matchingServiceHandler=_matchingServiceHandler;
@property (nonatomic) int priority; // @synthesize priority;
@property (strong, nonatomic) struct __IOHIDEventSystemClient *systemClient; // @synthesize systemClient=_systemClient;
@property (nonatomic) int type; // @synthesize type=_type;

- (void)dealloc;
- (id)description;

@end

