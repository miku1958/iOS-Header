//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary;

@interface ATXHomeScreenPage : NSObject <NSSecureCoding>
{
    unsigned long long _pageIndex;
    NSArray *_stacks;
    NSArray *_panels;
    NSDictionary *_appLocations;
}

@property (copy, nonatomic) NSDictionary *appLocations; // @synthesize appLocations=_appLocations;
@property (nonatomic) unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property (copy, nonatomic) NSArray *panels; // @synthesize panels=_panels;
@property (copy, nonatomic) NSArray *stacks; // @synthesize stacks=_stacks;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initFromDictionaryRepresentation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
