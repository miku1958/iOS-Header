//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <coreroutine/NSSecureCoding-Protocol.h>

@class NSMutableDictionary, NSUUID, RTStateDepiction;

@interface RTStateModelOneState : NSObject <NSSecureCoding>
{
    NSUUID *_uniqueId;
    RTStateDepiction *_stateDepiction;
    NSMutableDictionary *_stateTransitions;
}

@property (strong, nonatomic) RTStateDepiction *stateDepiction; // @synthesize stateDepiction=_stateDepiction;
@property (strong, nonatomic) NSMutableDictionary *stateTransitions; // @synthesize stateTransitions=_stateTransitions;
@property (strong, nonatomic) NSUUID *uniqueId; // @synthesize uniqueId=_uniqueId;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

