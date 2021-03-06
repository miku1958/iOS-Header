//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TipsCore/TPSSerializableObject.h>

@class NSNumber, NSString;

@interface TPSContextualDuetEventMeta : TPSSerializableObject
{
    NSString *_context;
    NSString *_domain;
    NSString *_intentVerb;
    NSString *_intentClass;
    NSNumber *_intentDirection;
    NSNumber *_donatedBySiri;
}

@property (copy, nonatomic) NSString *context; // @synthesize context=_context;
@property (copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property (copy, nonatomic) NSNumber *donatedBySiri; // @synthesize donatedBySiri=_donatedBySiri;
@property (copy, nonatomic) NSString *intentClass; // @synthesize intentClass=_intentClass;
@property (copy, nonatomic) NSNumber *intentDirection; // @synthesize intentDirection=_intentDirection;
@property (copy, nonatomic) NSString *intentVerb; // @synthesize intentVerb=_intentVerb;

+ (id)classSet;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

