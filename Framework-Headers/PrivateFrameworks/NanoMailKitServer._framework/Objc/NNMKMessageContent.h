//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoMailKitServer/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSString;

@interface NNMKMessageContent : NSObject <NSSecureCoding>
{
    BOOL _mainAlternativeValid;
    BOOL _partiallyLoaded;
    NSString *_messageId;
    NSString *_externalReferenceId;
    NSData *_textData;
    unsigned long long _originalContentSize;
    NSArray *_attachments;
}

@property (strong, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
@property (strong, nonatomic) NSString *externalReferenceId; // @synthesize externalReferenceId=_externalReferenceId;
@property (nonatomic) BOOL mainAlternativeValid; // @synthesize mainAlternativeValid=_mainAlternativeValid;
@property (strong, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property (nonatomic) unsigned long long originalContentSize; // @synthesize originalContentSize=_originalContentSize;
@property (nonatomic) BOOL partiallyLoaded; // @synthesize partiallyLoaded=_partiallyLoaded;
@property (strong, nonatomic) NSData *textData; // @synthesize textData=_textData;

+ (id)classesForUnarchivingTextData;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

