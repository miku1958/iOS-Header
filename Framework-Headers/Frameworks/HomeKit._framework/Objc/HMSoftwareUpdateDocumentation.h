//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMHTMLDocument, HMPlainTextDocument, NSNumber;

@interface HMSoftwareUpdateDocumentation : NSObject <NSSecureCoding>
{
    HMHTMLDocument *_releaseNotesSummary;
    HMHTMLDocument *_releaseNotes;
    HMPlainTextDocument *_textReleaseNotes;
    HMHTMLDocument *_licenseAgreement;
    NSNumber *_licenseAgreementVersion;
}

@property (readonly, copy) HMHTMLDocument *licenseAgreement; // @synthesize licenseAgreement=_licenseAgreement;
@property (readonly, copy) NSNumber *licenseAgreementVersion; // @synthesize licenseAgreementVersion=_licenseAgreementVersion;
@property (readonly, copy) HMHTMLDocument *releaseNotes; // @synthesize releaseNotes=_releaseNotes;
@property (readonly, copy) HMHTMLDocument *releaseNotesSummary; // @synthesize releaseNotesSummary=_releaseNotesSummary;
@property (readonly, copy) HMPlainTextDocument *textReleaseNotes; // @synthesize textReleaseNotes=_textReleaseNotes;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithReleaseNotesSummary:(id)arg1 releaseNotes:(id)arg2 textReleaseNotes:(id)arg3 licenseAgreement:(id)arg4 licenseAgreementVersion:(id)arg5;

@end
