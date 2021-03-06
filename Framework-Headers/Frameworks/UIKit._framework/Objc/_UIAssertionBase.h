//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIAssertion-Protocol.h>

@class NSString, _UIAssertionController;

__attribute__((visibility("hidden")))
@interface _UIAssertionBase : NSObject <_UIAssertion>
{
    BOOL _initialState;
    unsigned long long _type;
    NSString *_reason;
    _UIAssertionController *_parentController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL initialState; // @synthesize initialState=_initialState;
@property (weak, nonatomic) _UIAssertionController *parentController; // @synthesize parentController=_parentController;
@property (readonly, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long type; // @synthesize type=_type;

- (void).cxx_destruct;
- (id)_initWithType:(unsigned long long)arg1 initialState:(BOOL)arg2 reason:(id)arg3;
- (void)dealloc;

@end

