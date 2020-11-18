//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;
@protocol SCNShadable;

@interface _SCNShadableCompilationIssue : NSObject
{
    id<SCNShadable> _shadable;
    NSString *_entryPoint;
    NSString *_effectiveModifier;
    NSString *_message;
    unsigned long long _type;
}

@property (readonly, nonatomic) NSString *effectiveModifier; // @synthesize effectiveModifier=_effectiveModifier;
@property (readonly, nonatomic) NSString *entryPoint; // @synthesize entryPoint=_entryPoint;
@property (readonly, nonatomic) NSString *message; // @synthesize message=_message;
@property (readonly, nonatomic) id<SCNShadable> shadable; // @synthesize shadable=_shadable;
@property (readonly, nonatomic) unsigned long long type; // @synthesize type=_type;

+ (id)issueWithShadable:(id)arg1 entryPoint:(id)arg2 effectiveModifier:(id)arg3 message:(id)arg4 type:(unsigned long long)arg5;
- (void)dealloc;

@end

