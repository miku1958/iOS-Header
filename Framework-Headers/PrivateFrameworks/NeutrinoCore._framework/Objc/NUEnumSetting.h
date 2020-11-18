//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUSetting.h>

@class NSArray, NSString;

@interface NUEnumSetting : NUSetting
{
    NSArray *_values;
}

@property (readonly) NSString *defaultValue;
@property (readonly) NSArray *values; // @synthesize values=_values;

+ (id)deserializeFromDictionary:(id)arg1 error:(out id *)arg2;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithAttributes:(id)arg1;
- (id)initWithValues:(id)arg1 attributes:(id)arg2;
- (BOOL)isValid:(out id *)arg1;
- (BOOL)serializeIntoDictionary:(id)arg1 error:(out id *)arg2;
- (BOOL)validate:(id)arg1 error:(out id *)arg2;
- (BOOL)validateValues:(out id *)arg1;

@end
