//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ModelIO/MDLNamed-Protocol.h>
#import <ModelIO/NSFastEnumeration-Protocol.h>

@class MDLScatteringFunction, NSMutableArray, NSString;

@interface MDLMaterial : NSObject <MDLNamed, NSFastEnumeration>
{
    NSMutableArray *_userProperties;
    NSMutableArray *_builtinProperties;
    MDLScatteringFunction *_scatteringFunction;
    NSString *_name;
    MDLMaterial *_baseMaterial;
}

@property (strong, nonatomic) MDLMaterial *baseMaterial; // @synthesize baseMaterial=_baseMaterial;
@property (readonly, nonatomic) struct BidirectionalScatteringDistributionFunction *bsdf;
@property (readonly, nonatomic) unsigned long long count;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, strong, nonatomic) MDLScatteringFunction *scatteringFunction;

- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)init;
- (id)initWithName:(id)arg1 physicallyPlausibleBSDF:(struct PhysicallyPlausibleDistribution *)arg2;
- (id)initWithName:(id)arg1 scatteringFunction:(id)arg2;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)propertyNamed:(id)arg1;
- (id)propertyWithSemantic:(unsigned long long)arg1;
- (void)removeAllProperties;
- (void)removeProperty:(id)arg1;
- (void)setProperty:(id)arg1;
- (void)setScatteringFunction:(id)arg1;

@end

