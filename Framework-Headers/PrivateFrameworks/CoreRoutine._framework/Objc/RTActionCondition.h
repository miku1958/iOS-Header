//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreRoutine/NSSecureCoding-Protocol.h>

@class NSArray, RTAction;

@interface RTActionCondition : NSObject <NSSecureCoding>
{
    RTAction *_action;
    NSArray *_dateIntervals;
}

@property (readonly, nonatomic) RTAction *action; // @synthesize action=_action;
@property (readonly, nonatomic) NSArray *dateIntervals; // @synthesize dateIntervals=_dateIntervals;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAction:(id)arg1 dateIntervals:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToActionCondition:(id)arg1;

@end
