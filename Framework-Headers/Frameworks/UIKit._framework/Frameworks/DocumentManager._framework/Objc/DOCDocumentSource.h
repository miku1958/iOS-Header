//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DocumentManager/NSCopying-Protocol.h>
#import <DocumentManager/NSSecureCoding-Protocol.h>

@class FPProvider, NSArray, NSString, UIImage;

@interface DOCDocumentSource : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _hasTemplateIcon;
    BOOL _hidden;
    NSString *_displayName;
    UIImage *_icon;
    NSString *_promptText;
    NSString *_identifier;
    NSArray *_documentTypes;
    FPProvider *_searching_fileProvider;
}

@property (copy) NSString *displayName; // @synthesize displayName=_displayName;
@property (copy) NSArray *documentTypes; // @synthesize documentTypes=_documentTypes;
@property BOOL hasTemplateIcon; // @synthesize hasTemplateIcon=_hasTemplateIcon;
@property BOOL hidden; // @synthesize hidden=_hidden;
@property (strong) UIImage *icon; // @synthesize icon=_icon;
@property (copy) NSString *identifier; // @synthesize identifier=_identifier;
@property (copy) NSString *promptText; // @synthesize promptText=_promptText;
@property FPProvider *searching_fileProvider; // @synthesize searching_fileProvider=_searching_fileProvider;

+ (void)defaultSourceForBundleIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (id)defaultSourceForBundleIdentifier:(id)arg1 defaultSourceIdentifier:(id)arg2 sources:(id)arg3;
+ (void)defaultSourceForBundleIdentifier:(id)arg1 selectedSourceIdentifier:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (id)defaultSourceIdentifierForBundleIdentifier:(id)arg1;
+ (void)endSearchingSources:(id)arg1;
+ (BOOL)isICloudFileProviderEnabledForBundleIdentifier:(id)arg1;
+ (void)setDefaultSource:(id)arg1 forBundleIdentifier:(id)arg2;
+ (void)setDefaultSourceIdentifier:(id)arg1 forBundleIdentifier:(id)arg2;
+ (id)sourceIdentifierOrderWithDefault:(id)arg1;
+ (id)startSearchingSourcesForBundleIdentifier:(id)arg1 updateBlock:(CDUnknownBlockType)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithProvider:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)sanitizedSource;
- (BOOL)usesEnumeration;

@end
