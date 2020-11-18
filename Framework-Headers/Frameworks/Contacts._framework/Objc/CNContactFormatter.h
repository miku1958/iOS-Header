//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class NSPersonNameComponentsFormatter;

@interface CNContactFormatter : NSFormatter
{
    BOOL _ignoresOrganization;
    BOOL _ignoresNickname;
    BOOL _emphasizesPrimaryNameComponent;
    NSPersonNameComponentsFormatter *_nameFormatter;
    long long _style;
    unsigned long long _fallbackStyle;
    long long _sortOrder;
}

@property (nonatomic) BOOL emphasizesPrimaryNameComponent; // @synthesize emphasizesPrimaryNameComponent=_emphasizesPrimaryNameComponent;
@property (nonatomic) unsigned long long fallbackStyle; // @synthesize fallbackStyle=_fallbackStyle;
@property (nonatomic) BOOL ignoresNickname; // @synthesize ignoresNickname=_ignoresNickname;
@property (nonatomic) BOOL ignoresOrganization; // @synthesize ignoresOrganization=_ignoresOrganization;
@property (readonly, strong) NSPersonNameComponentsFormatter *nameFormatter; // @synthesize nameFormatter=_nameFormatter;
@property (nonatomic) long long sortOrder; // @synthesize sortOrder=_sortOrder;
@property (nonatomic) long long style; // @synthesize style=_style;

+ (id)attributedStringFromContact:(id)arg1 style:(long long)arg2 defaultAttributes:(id)arg3;
+ (id)delimiterForContact:(id)arg1;
+ (id)descriptorForRequiredKeysForStyle:(long long)arg1;
+ (long long)nameOrderForContact:(id)arg1;
+ (id)stringFromContact:(id)arg1 style:(long long)arg2;
+ (BOOL)styleSupportsFallBackToFullNameStyle:(long long)arg1;
- (id)abbreviatedNameForContact:(id)arg1 attributes:(id)arg2;
- (void)appendValue:(id)arg1 derivedFromPropertyName:(id)arg2 toString:(id)arg3 delimiter:(id)arg4 attributes:(id)arg5;
- (void)appendValueForProperties:(id)arg1 fromContact:(id)arg2 toString:(id)arg3 delimiter:(id)arg4 attributes:(id)arg5 fallback:(BOOL)arg6;
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (id)attributedStringFromContact:(id)arg1 defaultAttributes:(id)arg2;
- (id)avatarNameForContact:(id)arg1 attributes:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)descriptorForRequiredKeys;
- (void)encodeWithCoder:(id)arg1;
- (id)fullNameForContact:(id)arg1 attributes:(id)arg2 style:(long long)arg3;
- (BOOL)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)shortNameForContact:(id)arg1 attributes:(id)arg2;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromContact:(id)arg1;
- (id)stringFromContact:(id)arg1 attributes:(id)arg2;
- (id)stringFromPotentiallySuggestedContact:(id)arg1 relatedToProperty:(id)arg2;

@end

