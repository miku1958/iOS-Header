//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUSetting.h>

@class NSNumber;

@interface NUBoolSetting : NUSetting
{
}

@property (readonly) NSNumber *defaultValue;

+ (id)deserializeFromDictionary:(id)arg1 error:(out id *)arg2;
- (BOOL)isValid:(out id *)arg1;
- (id)makeJSValue:(id)arg1 context:(id)arg2 error:(out id *)arg3;
- (BOOL)serializeIntoDictionary:(id)arg1 error:(out id *)arg2;
- (BOOL)validate:(id)arg1 error:(out id *)arg2;

@end

