//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUSetting.h>

@interface NUOpaqueSetting : NUSetting
{
}

+ (id)deserializeFromDictionary:(id)arg1 error:(out id *)arg2;
+ (id)supportedAttributes;
- (id)deserialize:(id)arg1 error:(out id *)arg2;
- (BOOL)isValid:(out id *)arg1;
- (id)serialize:(id)arg1 error:(out id *)arg2;
- (BOOL)serializeIntoDictionary:(id)arg1 error:(out id *)arg2;
- (BOOL)validate:(id)arg1 error:(out id *)arg2;
- (BOOL)validateAttribute:(id)arg1 value:(id)arg2 error:(out id *)arg3;
- (BOOL)validatePlistCompatibility:(id)arg1 error:(out id *)arg2;

@end

