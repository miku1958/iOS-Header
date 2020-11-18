//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>
#import <iWorkImport/TSWPOffscreenColumn-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSWPTargetHint : NSObject <TSWPOffscreenColumn, NSCopying>
{
    BOOL _usedParagraphHeights;
    BOOL _endOfLayout;
    BOOL _lastLineIsEmptyAndHasListLabel;
    unsigned long long _nextWidowPullsDownFromCharIndex;
    unsigned long long _columnCount;
    unsigned long long _lineFragmentCount;
    struct _NSRange _range;
    struct _NSRange _anchoredRange;
    struct CGRect _frameBounds;
}

@property (nonatomic) struct _NSRange anchoredRange; // @synthesize anchoredRange=_anchoredRange;
@property (nonatomic) unsigned long long columnCount; // @synthesize columnCount=_columnCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL endOfLayout; // @synthesize endOfLayout=_endOfLayout;
@property (nonatomic) struct CGRect frameBounds; // @synthesize frameBounds=_frameBounds;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL lastLineIsEmptyAndHasListLabel; // @synthesize lastLineIsEmptyAndHasListLabel=_lastLineIsEmptyAndHasListLabel;
@property (nonatomic) unsigned long long lineFragmentCount; // @synthesize lineFragmentCount=_lineFragmentCount;
@property (nonatomic) unsigned long long nextWidowPullsDownFromCharIndex; // @synthesize nextWidowPullsDownFromCharIndex=_nextWidowPullsDownFromCharIndex;
@property (nonatomic) struct _NSRange range; // @synthesize range=_range;
@property (readonly) Class superclass;
@property (nonatomic) BOOL usedParagraphHeights; // @synthesize usedParagraphHeights=_usedParagraphHeights;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)trimToCharIndex:(unsigned long long)arg1 inTarget:(id)arg2 removeFootnoteReferenceCount:(unsigned long long)arg3 removeAutoNumberFootnoteCount:(unsigned long long)arg4;

@end

