//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIAssertionRecord : NSObject
{
    BOOL _initialState;
    unsigned long long _type;
    long long _activeAssertionCount;
    NSString *_reason;
}

@property (nonatomic) long long activeAssertionCount; // @synthesize activeAssertionCount=_activeAssertionCount;
@property (nonatomic) BOOL initialState; // @synthesize initialState=_initialState;
@property (copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property (nonatomic) unsigned long long type; // @synthesize type=_type;

- (void).cxx_destruct;

@end

