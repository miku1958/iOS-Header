//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/NSCopying-Protocol.h>

@interface TSWPTextStatistics : NSObject <NSCopying>
{
    unsigned long long _wordCount;
    unsigned long long _charactersNoWhiteSpace;
    unsigned long long _paragraphCount;
    BOOL _isAccurate;
}

@property (nonatomic) unsigned long long charactersNoWhiteSpace; // @synthesize charactersNoWhiteSpace=_charactersNoWhiteSpace;
@property (nonatomic) BOOL isAccurate; // @synthesize isAccurate=_isAccurate;
@property (nonatomic) unsigned long long paragraphCount; // @synthesize paragraphCount=_paragraphCount;
@property (nonatomic) unsigned long long wordCount; // @synthesize wordCount=_wordCount;

- (void)addTextStatistics:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)removeTextStatistics:(id)arg1;
- (void)resetStatistics;
- (void)setTextStatistics:(id)arg1;

@end

