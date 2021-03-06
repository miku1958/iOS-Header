//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString, SFCardSection, SFImage, SFSearchResult;

@interface SPUICompletion : NSObject
{
    BOOL _completionResultIsPotentiallyPunchout;
    NSAttributedString *_completionString;
    NSString *_extensionString;
    NSString *_bridgeString;
    SFImage *_image;
    NSString *_copyableString;
    NSString *_typedString;
    SFSearchResult *_result;
    SFCardSection *_cardSection;
}

@property (strong, nonatomic) NSString *bridgeString; // @synthesize bridgeString=_bridgeString;
@property (readonly, nonatomic) SFCardSection *cardSection; // @synthesize cardSection=_cardSection;
@property (readonly, nonatomic) BOOL completionResultIsPotentiallyPunchout; // @synthesize completionResultIsPotentiallyPunchout=_completionResultIsPotentiallyPunchout;
@property (strong, nonatomic) NSAttributedString *completionString; // @synthesize completionString=_completionString;
@property (readonly, nonatomic) NSString *copyableString; // @synthesize copyableString=_copyableString;
@property (strong, nonatomic) NSString *extensionString; // @synthesize extensionString=_extensionString;
@property (strong, nonatomic) SFImage *image; // @synthesize image=_image;
@property (readonly, nonatomic) SFSearchResult *result; // @synthesize result=_result;
@property (readonly, nonatomic) NSString *typedString; // @synthesize typedString=_typedString;

+ (id)initWithTypedString:(id)arg1 result:(id)arg2 cardSection:(id)arg3;
+ (id)localizedNameForBundleIdentifier:(id)arg1;
+ (id)openString;
+ (BOOL)stringMatchesWritingDirection:(id)arg1;
+ (BOOL)supportsResult:(id)arg1 cardSection:(id)arg2;
- (void).cxx_destruct;
- (id)completionStringToMatch;
- (id)completionStringWithString:(id)arg1;
- (id)description;
- (id)initWithTypedString:(id)arg1 result:(id)arg2 cardSection:(id)arg3;
- (id)nonPrefixMatchExtensionString;
- (id)prefixMatchExtensionString;
- (struct _NSRange)rangeOfStringWithTypedString:(id)arg1;
- (void)updateFields;

@end

