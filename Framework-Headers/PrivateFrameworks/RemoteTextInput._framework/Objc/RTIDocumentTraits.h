//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RemoteTextInput/NSCopying-Protocol.h>
#import <RemoteTextInput/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSIndexSet, NSString, TITextInputTraits;

@interface RTIDocumentTraits : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_appId;
    NSString *_bundleId;
    NSString *_appName;
    NSString *_localizedAppName;
    NSArray *_associatedDomains;
    NSString *_title;
    NSString *_prompt;
    TITextInputTraits *_textInputTraits;
    NSIndexSet *_PINEntrySeparatorIndexes;
    unsigned long long _autofillMode;
    NSDictionary *_autofillContext;
    struct _NSRange _validTextRange;
}

@property (strong, nonatomic) NSIndexSet *PINEntrySeparatorIndexes; // @synthesize PINEntrySeparatorIndexes=_PINEntrySeparatorIndexes;
@property (copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property (copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property (strong, nonatomic) NSArray *associatedDomains; // @synthesize associatedDomains=_associatedDomains;
@property (strong, nonatomic) NSDictionary *autofillContext; // @synthesize autofillContext=_autofillContext;
@property (nonatomic) unsigned long long autofillMode; // @synthesize autofillMode=_autofillMode;
@property (copy, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property (copy, nonatomic) NSString *localizedAppName; // @synthesize localizedAppName=_localizedAppName;
@property (copy, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
@property (strong, nonatomic) TITextInputTraits *textInputTraits; // @synthesize textInputTraits=_textInputTraits;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (nonatomic) struct _NSRange validTextRange; // @synthesize validTextRange=_validTextRange;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)copyContextualPropertiesFromDocumentTraits:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
