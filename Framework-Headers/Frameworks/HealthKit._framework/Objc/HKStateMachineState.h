//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface HKStateMachineState : NSObject
{
    long long _index;
    NSString *_label;
    NSDictionary *_incomingTransitions;
    NSDictionary *_outgoingTransitions;
}

@property (copy, nonatomic) NSDictionary *incomingTransitions; // @synthesize incomingTransitions=_incomingTransitions;
@property (readonly, nonatomic) long long index; // @synthesize index=_index;
@property (readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
@property (copy, nonatomic) NSDictionary *outgoingTransitions; // @synthesize outgoingTransitions=_outgoingTransitions;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithIndex:(long long)arg1 label:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end
