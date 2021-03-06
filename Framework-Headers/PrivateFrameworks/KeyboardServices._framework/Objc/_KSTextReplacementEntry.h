//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <KeyboardServices/NSCopying-Protocol.h>
#import <KeyboardServices/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSString;

@interface _KSTextReplacementEntry : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _needsSaveToCloud;
    BOOL _wasDeleted;
    NSString *_phrase;
    NSString *_shortcut;
    NSDate *_timestamp;
    _KSTextReplacementEntry *_priorValue;
    NSData *_cloudData;
    NSString *_cloudID;
}

@property (strong, nonatomic) NSData *cloudData; // @synthesize cloudData=_cloudData;
@property (copy, nonatomic) NSString *cloudID; // @synthesize cloudID=_cloudID;
@property BOOL needsSaveToCloud; // @synthesize needsSaveToCloud=_needsSaveToCloud;
@property (copy, nonatomic) NSString *phrase; // @synthesize phrase=_phrase;
@property (strong, nonatomic) _KSTextReplacementEntry *priorValue; // @synthesize priorValue=_priorValue;
@property (copy, nonatomic) NSString *shortcut; // @synthesize shortcut=_shortcut;
@property (copy, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property BOOL wasDeleted; // @synthesize wasDeleted=_wasDeleted;

+ (id)localEntryFromCloudEntry:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptedFields;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEquivalentTo:(id)arg1;
- (id)unEncryptedFields;
- (id)uniqueID;
- (id)uniqueRecordName;
- (id)uniqueRecordNameVer0;

@end

