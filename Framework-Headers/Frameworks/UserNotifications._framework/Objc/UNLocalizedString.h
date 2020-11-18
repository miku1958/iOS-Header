//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@class NSArray;

@interface UNLocalizedString : NSString
{
    NSString *_key;
    NSArray *_arguments;
    NSString *_value;
}

@property (readonly, copy, nonatomic) NSArray *arguments; // @synthesize arguments=_arguments;
@property (readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
@property (readonly, copy, nonatomic) NSString *value; // @synthesize value=_value;

+ (id)localizedStringForKey:(id)arg1 arguments:(id)arg2 value:(id)arg3;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)_allowsDirectEncoding;
- (id)_initWithKey:(id)arg1 arguments:(id)arg2 value:(id)arg3;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (Class)classForCoder;
- (Class)classForKeyedArchiver;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)length;
- (id)un_localizedStringArguments;
- (id)un_localizedStringKey;
- (id)un_localizedStringValue;

@end
