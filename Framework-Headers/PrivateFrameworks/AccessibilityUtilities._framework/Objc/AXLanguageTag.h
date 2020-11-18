//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccessibilityUtilities/NSCopying-Protocol.h>

@class AXDialectMap, NSMutableOrderedSet, NSString;

@interface AXLanguageTag : NSObject <NSCopying>
{
    BOOL _wasPredicted;
    NSString *_content;
    NSMutableOrderedSet *_unambiguousDialects;
    NSMutableOrderedSet *_ambiguousDialects;
    struct _NSRange _range;
}

@property (strong, nonatomic) NSMutableOrderedSet *ambiguousDialects; // @synthesize ambiguousDialects=_ambiguousDialects;
@property (nonatomic) NSString *content; // @synthesize content=_content;
@property (readonly, nonatomic) NSString *contentSubstring;
@property (readonly, nonatomic) AXDialectMap *dialect;
@property (readonly, nonatomic) AXDialectMap *preferredAmbiguousDialect;
@property (readonly, nonatomic) AXDialectMap *preferredUnambiguousDialect;
@property (nonatomic) struct _NSRange range; // @synthesize range=_range;
@property (strong, nonatomic) NSMutableOrderedSet *unambiguousDialects; // @synthesize unambiguousDialects=_unambiguousDialects;
@property (nonatomic) BOOL wasPredicted; // @synthesize wasPredicted=_wasPredicted;

+ (id)tagWithDialects:(id)arg1 range:(struct _NSRange)arg2 content:(id)arg3 predictedByTagger:(BOOL)arg4;
- (void)addAmbiguousDialect:(id)arg1;
- (void)addAmbiguousDialects:(id)arg1;
- (void)addUnambiguousDialect:(id)arg1;
- (BOOL)canBeSpokenByDialect:(id)arg1;
- (BOOL)canBeSpokenByLanguage:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)hasAmbigiousDialects;

@end

