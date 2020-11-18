//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMNicknameEncryptionFieldTag, NSData, NSString;

@interface IMNicknameEncryptionCipherRecordField : NSObject
{
    NSString *_fieldName;
    NSData *_cipherData;
    NSData *_IV;
    IMNicknameEncryptionFieldTag *_tag;
}

@property (readonly, nonatomic) NSData *IV; // @synthesize IV=_IV;
@property (readonly, nonatomic) NSData *cipherData; // @synthesize cipherData=_cipherData;
@property (readonly, nonatomic) NSString *fieldName; // @synthesize fieldName=_fieldName;
@property (readonly, nonatomic) IMNicknameEncryptionFieldTag *tag; // @synthesize tag=_tag;

+ (id)cipherRecordFieldWithFieldName:(id)arg1 dataRepresentation:(id)arg2 error:(id *)arg3;
- (id)dataRepresentationWithError:(id *)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithFieldName:(id)arg1 cipherData:(id)arg2 IV:(id)arg3 tag:(id)arg4;

@end
