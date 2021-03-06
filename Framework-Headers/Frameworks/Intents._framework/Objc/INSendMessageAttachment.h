//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INEnumerable-Protocol.h>
#import <Intents/INJSONSerializable-Protocol.h>

@class INFile, NSString, NSURL;

@interface INSendMessageAttachment : NSObject <INJSONSerializable, INEnumerable>
{
    BOOL _currentLocation;
    INFile *_audioMessageFile;
    INFile *_file;
    NSURL *_speechDataURL;
}

@property (readonly, copy, nonatomic) INFile *audioMessageFile; // @synthesize audioMessageFile=_audioMessageFile;
@property (readonly, nonatomic) BOOL currentLocation; // @synthesize currentLocation=_currentLocation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) INFile *file; // @synthesize file=_file;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSURL *speechDataURL; // @synthesize speechDataURL=_speechDataURL;
@property (readonly) Class superclass;
@property (readonly) Class superclass;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (id)attachmentWithAudioMessageFile:(id)arg1;
+ (id)attachmentWithCurrentLocation;
+ (id)attachmentWithFile:(id)arg1;
+ (id)attachmentWithSpeechDataURL:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_initWithCurrentLocation:(BOOL)arg1 file:(id)arg2 speechDataURL:(id)arg3 audioMessageFile:(id)arg4;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (BOOL)_intents_enumerateObjectsOfClass:(Class)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

