//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface HSDAAPPropertyInfo : NSObject
{
    NSMutableDictionary *_codeMap;
    NSMutableDictionary *_valueTypeMap;
}

@property (strong, nonatomic) NSMutableDictionary *codeMap; // @synthesize codeMap=_codeMap;
@property (strong, nonatomic) NSMutableDictionary *valueTypeMap; // @synthesize valueTypeMap=_valueTypeMap;

+ (id)sharedContainerPropertyInfo;
+ (id)sharedItemPropertyInfo;
- (void).cxx_destruct;
- (id)_init;
- (unsigned int)elementCodeForProperty:(id)arg1;
- (BOOL)hasInfoForProperty:(id)arg1;
- (void)mapProperty:(id)arg1 toCode:(unsigned int)arg2 valueType:(long long)arg3;
- (long long)valueTypeForProperty:(id)arg1;

@end
