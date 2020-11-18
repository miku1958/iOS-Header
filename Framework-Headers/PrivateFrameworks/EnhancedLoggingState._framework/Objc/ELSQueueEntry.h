//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EnhancedLoggingState/NSCoding-Protocol.h>
#import <EnhancedLoggingState/NSCopying-Protocol.h>
#import <EnhancedLoggingState/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface ELSQueueEntry : NSObject <NSCopying, NSCoding, NSSecureCoding>
{
    BOOL _retry;
    NSString *_type;
    NSString *_typeName;
    NSDictionary *_parameters;
    double _executeAfterDuration;
}

@property (nonatomic) double executeAfterDuration; // @synthesize executeAfterDuration=_executeAfterDuration;
@property (strong, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property (nonatomic) BOOL retry; // @synthesize retry=_retry;
@property (strong, nonatomic) NSString *type; // @synthesize type=_type;
@property (strong, nonatomic) NSString *typeName; // @synthesize typeName=_typeName;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(id)arg1 typeName:(id)arg2 parameters:(id)arg3 executeAfterDuration:(double)arg4 retry:(BOOL)arg5;
- (BOOL)isEqual:(id)arg1;

@end
