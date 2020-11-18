//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MIME/MFMessageBody.h>

#import <MIME/ECMimePart-Protocol.h>

@class MFMimePart, NSArray, NSString;

@interface MFMimeBody : MFMessageBody <ECMimePart>
{
    MFMimePart *_topLevelPart;
    unsigned int _preferredAlternative:16;
    unsigned int _numAlternatives:16;
    long long _encryptedDescendantState;
    NSArray *_signers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasEncryptedDescendantPart;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *mimeSubtype;
@property (readonly, copy, nonatomic) NSString *mimeType;
@property (strong, nonatomic) NSArray *signers; // @synthesize signers=_signers;
@property (readonly) Class superclass;
@property (strong, nonatomic) MFMimePart *topLevelPart;
@property (readonly, nonatomic) unsigned long long totalTextSize;

+ (id)copyNewMimeBoundary;
+ (id)versionString;
- (id)attachmentURLs;
- (id)attachments;
- (id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long *)arg2 asHTML:(BOOL)arg3 isComplete:(BOOL *)arg4;
- (void)dealloc;
- (id)init;
- (BOOL)isHTML;
- (BOOL)isRich;
- (long long)numberOfAlternatives;
- (unsigned int)numberOfAttachmentsSigned:(BOOL *)arg1 encrypted:(BOOL *)arg2;
- (id)partWithNumber:(id)arg1;
- (long long)preferredAlternative;
- (id)preferredBodyPart;
- (void)setPreferredAlternative:(long long)arg1;
- (id)textHtmlPart;

@end

