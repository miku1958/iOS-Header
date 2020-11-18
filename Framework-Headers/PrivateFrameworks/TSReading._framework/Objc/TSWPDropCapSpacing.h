//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/NSCopying-Protocol.h>

@interface TSWPDropCapSpacing : NSObject <NSCopying>
{
    BOOL _allowSpanParagraphs;
    unsigned long long _lineCount;
    unsigned long long _elevatedLineCount;
    unsigned long long _followingLineCount;
    double _padding;
    unsigned long long _flags;
    double _maxWidthFactor;
}

@property (nonatomic) BOOL allowSpanParagraphs; // @synthesize allowSpanParagraphs=_allowSpanParagraphs;
@property (nonatomic) unsigned long long elevatedLineCount; // @synthesize elevatedLineCount=_elevatedLineCount;
@property (nonatomic) unsigned long long flags; // @synthesize flags=_flags;
@property (nonatomic) unsigned long long followingLineCount; // @synthesize followingLineCount=_followingLineCount;
@property (nonatomic) unsigned long long lineCount; // @synthesize lineCount=_lineCount;
@property (nonatomic) double maxWidthFactor; // @synthesize maxWidthFactor=_maxWidthFactor;
@property (nonatomic) double padding; // @synthesize padding=_padding;

+ (id)dropCapSpacingWithLineCount:(unsigned long long)arg1 elevatedLineCount:(unsigned long long)arg2;
- (unsigned long long)computedFlagsWithPropertyMap:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;

@end

