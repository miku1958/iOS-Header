//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface AFSyncSnapshot : NSObject <NSSecureCoding>
{
    NSString *_anchor;
    NSString *_validity;
    long long _count;
    NSString *_key;
}

@property (copy, nonatomic) NSString *anchor; // @synthesize anchor=_anchor;
@property (nonatomic) long long count; // @synthesize count=_count;
@property (copy, nonatomic) NSString *key; // @synthesize key=_key;
@property (copy, nonatomic) NSString *validity; // @synthesize validity=_validity;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

