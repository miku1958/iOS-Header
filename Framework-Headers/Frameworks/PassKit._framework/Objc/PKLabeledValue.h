//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKLabeledValue : NSObject <NSSecureCoding>
{
    NSString *_label;
    NSString *_value;
}

@property (readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
@property (readonly, copy, nonatomic) NSString *value; // @synthesize value=_value;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLabel:(id)arg1 value:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end

