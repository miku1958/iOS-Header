//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <SoftwareUpdateServices/NSCopying-Protocol.h>
#import <SoftwareUpdateServices/NSSecureCoding-Protocol.h>

@class NSMutableDictionary, NSNumber, NSString, NSURL;

@interface SUDocumentation : NSObject <NSSecureCoding, NSCopying>
{
    NSURL *_baseDocumentationURL;
    NSString *_releaseNotesSummaryFileName;
    NSString *_releaseNotesFileName;
    NSString *_licenseAgreementFileName;
    NSString *_primaryLanguage;
    NSNumber *_slaVersion;
    NSString *_humanReadableUpdateName;
    NSURL *_releaseNotesSummaryURL;
    NSURL *_releaseNotesURL;
    NSURL *_licenseAgreementURL;
    NSMutableDictionary *_cachedData;
}

@property (strong, nonatomic) NSURL *baseDocumentationURL; // @synthesize baseDocumentationURL=_baseDocumentationURL;
@property (strong, nonatomic) NSString *humanReadableUpdateName; // @synthesize humanReadableUpdateName=_humanReadableUpdateName;
@property (strong, nonatomic) NSString *licenseAgreementFileName; // @synthesize licenseAgreementFileName=_licenseAgreementFileName;
@property (strong, nonatomic) NSURL *licenseAgreementURL; // @synthesize licenseAgreementURL=_licenseAgreementURL;
@property (strong, nonatomic) NSString *primaryLanguage; // @synthesize primaryLanguage=_primaryLanguage;
@property (strong, nonatomic) NSString *releaseNotesFileName; // @synthesize releaseNotesFileName=_releaseNotesFileName;
@property (strong, nonatomic) NSString *releaseNotesSummaryFileName; // @synthesize releaseNotesSummaryFileName=_releaseNotesSummaryFileName;
@property (strong, nonatomic) NSURL *releaseNotesSummaryURL; // @synthesize releaseNotesSummaryURL=_releaseNotesSummaryURL;
@property (strong, nonatomic) NSURL *releaseNotesURL; // @synthesize releaseNotesURL=_releaseNotesURL;
@property (strong, nonatomic) NSNumber *slaVersion; // @synthesize slaVersion=_slaVersion;

+ (BOOL)supportsSecureCoding;
- (id)_cachedDocumentationDataForURL:(id)arg1;
- (void)_clearTransientDocumentationData;
- (id)_getSUImage:(id)arg1;
- (id)_localizedResourceURLForDocumentationAsset:(id)arg1 resource:(id)arg2;
- (void)_resetIfNecessary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)getFullWidthImage;
- (id)getIconImage;
- (BOOL)hasAnyDocumentation;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocumentationURL:(id)arg1;
- (id)licenseAgreement;
- (id)localizedDocumentationStringFromBundle:(struct __CFBundle *)arg1 key:(id)arg2;
- (id)localizedStringFromBundle:(struct __CFBundle *)arg1 key:(id)arg2;
- (id)localizedURLFromBundle:(struct __CFBundle *)arg1 resource:(id)arg2;
- (id)pngImageDataFromBundle:(struct __CFBundle *)arg1 fileName:(id)arg2;
- (id)releaseNotes;
- (id)releaseNotesSummary;

@end
