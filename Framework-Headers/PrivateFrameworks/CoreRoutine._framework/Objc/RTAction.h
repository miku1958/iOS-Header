//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreRoutine/NSSecureCoding-Protocol.h>

@class NSDictionary;

@interface RTAction : NSObject <NSSecureCoding>
{
    long long _type;
    NSDictionary *_options;
}

@property (readonly, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property (readonly, nonatomic) long long type; // @synthesize type=_type;

+ (id)actionTypeToString:(long long)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 andOptions:(id)arg2;

@end

