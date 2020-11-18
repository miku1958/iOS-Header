//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <VisualVoicemail/NSCopying-Protocol.h>
#import <VisualVoicemail/NSMutableCopying-Protocol.h>
#import <VisualVoicemail/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSString, NSURL, VMVoicemailTranscript;

@interface VMVoicemail : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    unsigned long long _remoteUID;
    unsigned long long _identifier;
    NSDate *_date;
    NSString *_senderDestinationID;
    NSString *_callbackDestinationID;
    double _duration;
    NSURL *_dataURL;
    NSURL *_transcriptionURL;
    NSString *_callbackISOCountryCode;
    NSString *_senderISOCountryCode;
    unsigned long long _flags;
}

@property (nonatomic, getter=isBlocked) BOOL blocked;
@property (copy, nonatomic) NSString *callbackDestinationID; // @synthesize callbackDestinationID=_callbackDestinationID;
@property (copy, nonatomic) NSString *callbackISOCountryCode; // @synthesize callbackISOCountryCode=_callbackISOCountryCode;
@property (readonly, nonatomic) NSString *callbackNumber;
@property (readonly, copy, nonatomic) NSData *data;
@property (nonatomic, getter=isDataAvailable) BOOL dataAvailable;
@property (readonly, nonatomic) NSString *dataPath;
@property (strong, nonatomic) NSURL *dataURL; // @synthesize dataURL=_dataURL;
@property (strong, nonatomic) NSDate *date; // @synthesize date=_date;
@property (nonatomic, getter=isDeleted) BOOL deleted;
@property (nonatomic, getter=isDetached) BOOL detached;
@property (nonatomic, getter=isDownloading) BOOL downloading;
@property (nonatomic) double duration; // @synthesize duration=_duration;
@property (nonatomic) unsigned long long flags;
@property (nonatomic) unsigned long long flags; // @synthesize flags=_flags;
@property (readonly, nonatomic) BOOL hasCallbackNumber;
@property (nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
@property (nonatomic, getter=isRead) BOOL read;
@property (nonatomic) unsigned long long remoteUID; // @synthesize remoteUID=_remoteUID;
@property (readonly, nonatomic) NSString *sender;
@property (copy, nonatomic) NSString *senderDestinationID; // @synthesize senderDestinationID=_senderDestinationID;
@property (copy, nonatomic) NSString *senderISOCountryCode; // @synthesize senderISOCountryCode=_senderISOCountryCode;
@property (nonatomic, getter=isTemporary) BOOL temporary;
@property (readonly, nonatomic) VMVoicemailTranscript *transcript;
@property (nonatomic, getter=isTranscriptionAvailable) BOOL transcriptionAvailable;
@property (readonly, nonatomic, getter=isTranscriptionRated) BOOL transcriptionRated;
@property (readonly, nonatomic) unsigned long long transcriptionState;
@property (strong, nonatomic) NSURL *transcriptionURL; // @synthesize transcriptionURL=_transcriptionURL;
@property (nonatomic, getter=isTrashed) BOOL trashed;
@property (readonly, nonatomic, getter=isUnread) BOOL unread;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)contactUsingContactStore:(id)arg1;
- (id)contactUsingContactStore:(id)arg1 withKeysToFetch:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)displayLabelUsingContactStore:(id)arg1;
- (id)displayNameUsingContactStore:(id)arg1;
- (BOOL)doesNotHaveFlags:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)flagDescription;
- (BOOL)hasFlags:(unsigned long long)arg1;
- (BOOL)hasSameContent:(id)arg1;
- (BOOL)hasSameFlags:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithMessage:(id)arg1;
- (id)initWithRecord:(const void *)arg1;
- (id)initWithVoicemailMessage:(id)arg1;
- (BOOL)isContactSuggested:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToMessage:(id)arg1;
- (BOOL)isTranscribing;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)setFlag:(unsigned long long)arg1 enabled:(BOOL)arg2;
- (BOOL)wasTranscriptionAttempted;

@end
