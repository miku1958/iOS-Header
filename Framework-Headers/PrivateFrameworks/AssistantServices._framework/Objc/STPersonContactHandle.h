//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface STPersonContactHandle : NSObject <NSSecureCoding>
{
    NSString *_handle;
    NSString *_label;
    unsigned long long _type;
}

@property (copy, nonatomic) NSString *handle; // @synthesize handle=_handle;
@property (copy, nonatomic) NSString *label; // @synthesize label=_label;
@property (nonatomic) unsigned long long type; // @synthesize type=_type;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPersonContactHandle:(id)arg1;

@end
