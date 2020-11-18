//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INHomeFilter, NSArray;

@interface INHomeContent : NSObject <NSCopying, NSSecureCoding>
{
    INHomeFilter *_filter;
    NSArray *_actions;
}

@property (readonly, copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property (readonly, copy, nonatomic) INHomeFilter *filter; // @synthesize filter=_filter;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFilter:(id)arg1 actions:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end

