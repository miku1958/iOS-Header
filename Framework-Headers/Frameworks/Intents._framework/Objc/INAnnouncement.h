//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INJSONSerializable-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSNumber, NSString, NSURL;

@interface INAnnouncement : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>
{
    NSURL *_speechDataURL;
    NSString *_identifier;
    NSString *_speechDataTranscription;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSNumber *endTime;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, copy, nonatomic) NSString *speechDataTranscription; // @synthesize speechDataTranscription=_speechDataTranscription;
@property (readonly, copy, nonatomic) NSURL *speechDataURL; // @synthesize speechDataURL=_speechDataURL;
@property (readonly, copy, nonatomic) NSNumber *startTime;
@property (readonly) Class superclass;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSpeechDataURL:(id)arg1 identifier:(id)arg2;
- (id)initWithSpeechDataURL:(id)arg1 identifier:(id)arg2 speechDataTranscription:(id)arg3;
- (id)initWithSpeechDataURL:(id)arg1 startTime:(id)arg2 endTime:(id)arg3 identifier:(id)arg4;
- (BOOL)isEqual:(id)arg1;

@end

