//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUSchema.h>

@class NSDictionary;

@interface NUAdjustmentSchema : NUSchema
{
    NSDictionary *_settings;
}

@property (readonly, nonatomic) NSDictionary *settings; // @synthesize settings=_settings;

+ (id)deserializeFromDictionary:(id)arg1 error:(out id *)arg2;
- (void).cxx_destruct;
- (id)copy:(id)arg1;
- (id)copyAdjustment:(id)arg1;
- (id)deserialize:(id)arg1 error:(out id *)arg2;
- (id)deserializeAdjustment:(id)arg1 error:(out id *)arg2;
- (BOOL)deserializeSettings:(id)arg1 fromDictionary:(id)arg2 error:(out id *)arg3;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)initWithIdentifier:(id)arg1 attributes:(id)arg2;
- (id)initWithIdentifier:(id)arg1 settings:(id)arg2 attributes:(id)arg3;
- (BOOL)isValid:(out id *)arg1;
- (id)makeJSValue:(id)arg1 context:(id)arg2 error:(out id *)arg3;
- (id)modelForProperty:(id)arg1;
- (id)schemaDependencies;
- (id)serialize:(id)arg1 error:(out id *)arg2;
- (id)serializeAdjustment:(id)arg1 error:(out id *)arg2;
- (BOOL)serializeIntoDictionary:(id)arg1 error:(out id *)arg2;
- (BOOL)serializeSettings:(id)arg1 intoDictionary:(id)arg2 error:(out id *)arg3;
- (long long)type;
- (BOOL)validate:(id)arg1 error:(out id *)arg2;
- (BOOL)validateAdjustment:(id)arg1 error:(out id *)arg2;
- (BOOL)validateSettings:(out id *)arg1;
- (BOOL)validateSettings:(id)arg1 error:(out id *)arg2;

@end

