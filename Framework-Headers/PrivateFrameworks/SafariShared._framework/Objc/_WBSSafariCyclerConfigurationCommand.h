//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _WBSSafariCyclerConfigurationCommand : NSObject
{
    NSString *_name;
    NSString *_help;
    NSString *_usage;
    unsigned long long _minimumArgumentCount;
    unsigned long long _maximumArgumentCount;
    id _target;
    SEL _action;
}

@property (nonatomic) SEL action; // @synthesize action=_action;
@property (readonly, copy, nonatomic) NSString *help; // @synthesize help=_help;
@property (nonatomic) unsigned long long maximumArgumentCount; // @synthesize maximumArgumentCount=_maximumArgumentCount;
@property (nonatomic) unsigned long long minimumArgumentCount; // @synthesize minimumArgumentCount=_minimumArgumentCount;
@property (readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (weak, nonatomic) id target; // @synthesize target=_target;
@property (copy, nonatomic) NSString *usage; // @synthesize usage=_usage;

- (void).cxx_destruct;
- (id)init;
- (id)initWithName:(id)arg1 help:(id)arg2;
- (BOOL)invokeWithParameters:(id)arg1;
- (void)setArgumentCount:(unsigned long long)arg1;

@end

