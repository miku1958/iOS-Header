//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/NSCopying-Protocol.h>

@class TSSPropertyMap;

@interface TSWPLineStyling : NSObject <NSCopying>
{
    long long _lineCount;
    unsigned long long _options;
    TSSPropertyMap *_additionalCharacterStylePropertyMap;
    TSSPropertyMap *_overrideCharacterStylePropertyMap;
}

@property (readonly, strong, nonatomic) TSSPropertyMap *additionalCharacterStylePropertyMap; // @synthesize additionalCharacterStylePropertyMap=_additionalCharacterStylePropertyMap;
@property (readonly, nonatomic) long long lineCount; // @synthesize lineCount=_lineCount;
@property (readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property (readonly, strong, nonatomic) TSSPropertyMap *overrideCharacterStylePropertyMap; // @synthesize overrideCharacterStylePropertyMap=_overrideCharacterStylePropertyMap;

+ (id)lineStylingWithLineCount:(long long)arg1 options:(unsigned long long)arg2 additionalCharacterStylePropertyMap:(id)arg3 overrideCharacterStylePropertyMap:(id)arg4;
- (id)_optionsDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithLineCount:(long long)arg1 options:(unsigned long long)arg2 additionalCharacterStylePropertyMap:(id)arg3 overrideCharacterStylePropertyMap:(id)arg4;
- (BOOL)isEqual:(id)arg1;

@end

