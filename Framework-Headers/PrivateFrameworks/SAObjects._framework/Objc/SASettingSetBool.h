//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SASettingSetValue.h>

@interface SASettingSetBool : SASettingSetValue
{
}

@property (nonatomic) BOOL toggle;
@property (nonatomic) BOOL value;

+ (id)setBool;
+ (id)setBoolWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)mutatingCommand;
- (BOOL)requiresResponse;

@end

