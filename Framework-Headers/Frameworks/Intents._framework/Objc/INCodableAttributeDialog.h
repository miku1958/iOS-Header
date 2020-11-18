//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INCodableCoding-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INCodableAttribute, INCodableDescription, NSString;

@interface INCodableAttributeDialog : NSObject <NSSecureCoding, NSCopying, INCodableCoding>
{
    BOOL _defaultDialog;
    INCodableAttribute *_codableAttribute;
    NSString *_formatString;
    NSString *_formatStringID;
}

@property (weak, nonatomic, setter=_setCodableAttribute:) INCodableAttribute *_codableAttribute; // @synthesize _codableAttribute;
@property (readonly, weak, nonatomic) INCodableDescription *_codableDescription;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isDefaultDialog) BOOL defaultDialog; // @synthesize defaultDialog=_defaultDialog;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *formatString; // @synthesize formatString=_formatString;
@property (copy, nonatomic) NSString *formatStringID; // @synthesize formatStringID=_formatStringID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)__INCodableDescriptionFormatStringDictionaryKey;
- (id)__INCodableDescriptionFormatStringDictionaryLanguageCodeKey;
- (id)__INCodableDescriptionFormatStringIDKey;
- (id)__INCodableDescriptionFormatStringKey;
- (id)__INCodableDescriptionFormatStringLanguageCodeKey;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)localizedDialogWithIntent:(id)arg1 tokens:(id)arg2;
- (id)localizedDialogWithIntent:(id)arg1 tokens:(id)arg2 forLanguage:(id)arg3;
- (id)localizedDialogWithIntent:(id)arg1 tokens:(id)arg2 localizer:(id)arg3;
- (void)updateWithDictionary:(id)arg1;

@end
