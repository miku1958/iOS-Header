//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHAP/HAP2LoggingObject.h>

#import <CoreHAP/HAP2Cancelable-Protocol.h>

@class NSString;

@interface HAP2Cancelable : HAP2LoggingObject <HAP2Cancelable>
{
    _Atomic BOOL _called;
    CDUnknownBlockType _block;
}

@property (copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)cancelableWithBlock:(CDUnknownBlockType)arg1;
+ (id)ignore;
+ (id)new;
- (void).cxx_destruct;
- (void)cancelWithError:(id)arg1;
- (id)init;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end

