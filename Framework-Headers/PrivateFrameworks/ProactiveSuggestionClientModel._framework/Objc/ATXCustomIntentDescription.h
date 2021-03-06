//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveSuggestionClientModel/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface ATXCustomIntentDescription : NSObject <NSSecureCoding>
{
    NSString *_typeName;
    NSDictionary *_parameters;
}

@property (readonly, copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property (readonly, copy, nonatomic) NSString *typeName; // @synthesize typeName=_typeName;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)createIntent;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTypeName:(id)arg1 parameters:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end

