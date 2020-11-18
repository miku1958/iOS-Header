//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSNumber, NSString;

@interface ECEncodedWordDecoder : NSObject
{
    NSNumber *_stringEncoding;
    NSString *_language;
    NSData *_headerData;
    long long _encodedWordEncoding;
    struct _NSRange _encodedTextRange;
}

@property (nonatomic) struct _NSRange encodedTextRange; // @synthesize encodedTextRange=_encodedTextRange;
@property (nonatomic) long long encodedWordEncoding; // @synthesize encodedWordEncoding=_encodedWordEncoding;
@property (readonly, copy, nonatomic) NSData *headerData; // @synthesize headerData=_headerData;
@property (copy, nonatomic) NSString *language; // @synthesize language=_language;
@property (strong, nonatomic) NSNumber *stringEncoding; // @synthesize stringEncoding=_stringEncoding;

- (void).cxx_destruct;
- (BOOL)_decodeBEncodedTextToData:(id)arg1;
- (BOOL)_decodeQEncodedTextToData:(id)arg1;
- (id)_encodedWordDelimiter;
- (id)_encodedWordEndSequence;
- (id)_encodedWordLanguageDelimiter;
- (id)_encodedWordStartSequence;
- (void)_enumerateQByteRangesUsingBlock:(CDUnknownBlockType)arg1;
- (id)_lineSeparator;
- (BOOL)decodeEncodedTextToData:(id)arg1;
- (struct _NSRange)identifyRangeOfEncodedWordAtIndex:(unsigned long long)arg1;
- (id)init;
- (id)initWithHeaderData:(id)arg1;

@end
