//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CRPollingTimer : NSObject
{
    CDStruct_1b6d18a9 _fireTime;
    BOOL _fired;
    BOOL _valid;
    id _target;
    SEL _selector;
}

@property (nonatomic) CDStruct_1b6d18a9 fireTime;
@property (nonatomic) BOOL fired; // @synthesize fired=_fired;
@property (nonatomic) SEL selector; // @synthesize selector=_selector;
@property (weak, nonatomic) id target; // @synthesize target=_target;
@property (nonatomic) BOOL valid; // @synthesize valid=_valid;

- (void).cxx_destruct;
- (void)evalAtTime:(CDStruct_1b6d18a9)arg1;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;
- (void)invalidate;

@end
