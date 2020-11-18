//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class NSDictionary, TSWPCharacterStyle;

__attribute__((visibility("hidden")))
@interface TSWPStyleRun : NSObject <NSCopying>
{
    unsigned long long _charIndex;
    unsigned long long _runLength;
    unsigned long long _flags;
    TSWPCharacterStyle *_characterStyle;
    struct __CTFont *_ctFont;
    NSDictionary *_attributes;
    CDStruct_5b0a1db3 _fontHeightInfo;
}

@property (strong, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property (nonatomic) unsigned long long charIndex; // @synthesize charIndex=_charIndex;
@property (strong, nonatomic) TSWPCharacterStyle *characterStyle; // @synthesize characterStyle=_characterStyle;
@property (nonatomic) struct __CTFont *ctFont; // @synthesize ctFont=_ctFont;
@property (nonatomic) unsigned long long flags; // @synthesize flags=_flags;
@property (nonatomic) CDStruct_5b0a1db3 fontHeightInfo; // @synthesize fontHeightInfo=_fontHeightInfo;
@property (nonatomic) unsigned long long runLength; // @synthesize runLength=_runLength;

- (void).cxx_destruct;
- (BOOL)coalesceWith:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (struct _NSRange)range;

@end

