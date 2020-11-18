//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSString;

@interface PKAssertion : NSObject
{
    NSLock *_invalidationLock;
    BOOL _invalidateWhenBackgrounded;
    NSString *_reason;
    unsigned long long _type;
    CDUnknownBlockType _invalidationHandler;
    NSString *_identifier;
}

@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) BOOL invalidateWhenBackgrounded; // @synthesize invalidateWhenBackgrounded=_invalidateWhenBackgrounded;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property (readonly, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property (readonly, nonatomic) unsigned long long type; // @synthesize type=_type;

+ (void)acquireAssertionOfType:(unsigned long long)arg1 withReason:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)isAssertionValid:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)preheatConnection;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithType:(unsigned long long)arg1 identifier:(id)arg2 reason:(id)arg3;
- (void)invalidate;
- (void)markAsInvalidatedAndNotify;

@end
