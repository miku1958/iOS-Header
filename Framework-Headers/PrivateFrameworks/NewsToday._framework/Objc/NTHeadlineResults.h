//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsToday/NSCopying-Protocol.h>
#import <NewsToday/NSSecureCoding-Protocol.h>

@class NSDate, NSOrderedSet;

@interface NTHeadlineResults : NSObject <NSCopying, NSSecureCoding>
{
    NSOrderedSet *_sections;
    NSDate *_expirationDate;
}

@property (readonly, copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property (copy, nonatomic) NSOrderedSet *sections; // @synthesize sections=_sections;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)headlineCount;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSections:(id)arg1 expirationDate:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end

