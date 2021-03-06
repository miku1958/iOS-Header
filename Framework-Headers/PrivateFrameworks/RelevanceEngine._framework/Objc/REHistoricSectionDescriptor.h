//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/NSCopying-Protocol.h>
#import <RelevanceEngine/REHistoricSectionDescriptorProperties-Protocol.h>

@class NSArray, NSOrderedSet, NSSet, NSString, RESectionDescriptor;

@interface REHistoricSectionDescriptor : NSObject <REHistoricSectionDescriptorProperties, NSCopying>
{
    NSOrderedSet *_rules;
    BOOL _invertsRanking;
    long long _maxElementCount;
    RESectionDescriptor *_parentDescriptor;
}

@property (nonatomic) BOOL invertsRanking; // @synthesize invertsRanking=_invertsRanking;
@property (nonatomic) long long maxElementCount; // @synthesize maxElementCount=_maxElementCount;
@property (readonly, nonatomic) NSString *name;
@property (strong, nonatomic) NSArray *orderedRules;
@property (weak, nonatomic) RESectionDescriptor *parentDescriptor; // @synthesize parentDescriptor=_parentDescriptor;
@property (copy, nonatomic) NSSet *rules;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;

@end

