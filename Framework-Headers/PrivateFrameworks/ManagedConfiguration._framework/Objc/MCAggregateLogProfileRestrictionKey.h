//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfiguration/MCAggregateLogProfileKey.h>

@class NSString;

@interface MCAggregateLogProfileRestrictionKey : MCAggregateLogProfileKey
{
    unsigned long long _type;
    NSString *_feature;
    NSString *_nameSuffix;
}

@property (strong, nonatomic) NSString *feature; // @synthesize feature=_feature;
@property (strong, nonatomic) NSString *nameSuffix; // @synthesize nameSuffix=_nameSuffix;
@property (nonatomic) unsigned long long type; // @synthesize type=_type;

+ (id)_feature:(id)arg1 name:(id)arg2 type:(unsigned long long)arg3;
+ (id)falseFeature:(id)arg1;
+ (id)falseFeature:(id)arg1 name:(id)arg2;
+ (id)intersectionFeature:(id)arg1;
+ (id)intersectionFeature:(id)arg1 name:(id)arg2;
+ (id)objectFeature:(id)arg1;
+ (id)objectFeature:(id)arg1 name:(id)arg2;
+ (id)trueFeature:(id)arg1;
+ (id)trueFeature:(id)arg1 name:(id)arg2;
+ (void)updateRestrictions;
+ (id)valueFeature:(id)arg1;
+ (id)valueFeature:(id)arg1 name:(id)arg2;
- (void).cxx_destruct;
- (id)name;
- (unsigned long long)value;

@end

