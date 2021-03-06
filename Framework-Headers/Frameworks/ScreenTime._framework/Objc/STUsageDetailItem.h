//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface STUsageDetailItem : NSObject
{
    BOOL _usageTrusted;
    float _quantity;
    NSString *_identifier;
    long long _type;
}

@property (readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly) BOOL isAllAppsOrCategories;
@property (nonatomic) float quantity; // @synthesize quantity=_quantity;
@property (readonly) float sortQuantity;
@property long long type; // @synthesize type=_type;
@property (readonly) BOOL usageTrusted; // @synthesize usageTrusted=_usageTrusted;

+ (id)keyPathsForValuesAffectingIsAllAppsOrCategories;
+ (id)keyPathsForValuesAffectingSortQuantity;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithType:(long long)arg1 identifier:(id)arg2;
- (id)initWithType:(long long)arg1 identifier:(id)arg2 usageTrusted:(BOOL)arg3;
- (BOOL)isEqual:(id)arg1;

@end

