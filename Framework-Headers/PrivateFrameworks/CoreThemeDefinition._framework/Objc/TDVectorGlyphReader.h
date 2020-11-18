//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSURL;

@interface TDVectorGlyphReader : NSObject
{
    struct os_unfair_lock_s _lock;
    struct CGSVGDocument *_svgDocument;
    NSURL *_fileURL;
    NSDictionary *_guideNodes;
    NSDictionary *_vectorGlyphNodes;
    NSMutableDictionary *_vectorGlyphWithWeightSize;
    double _sourcePointSize;
    double _defaultPointSize;
}

+ (id)vectorGlyphReaderWithURL:(id)arg1 error:(id *)arg2;
+ (id)vectorGlyphReaderWithURL:(id)arg1 platform:(long long)arg2 error:(id *)arg3;
- (id)_baselineNodeIDForGlyphSize:(long long)arg1;
- (id)_caplineNodeIDForGlyphSize:(long long)arg1;
- (BOOL)_commonInitWithData:(id)arg1 platform:(long long)arg2 error:(id *)arg3;
- (id)_glyphNodeIDForWeight:(long long)arg1 size:(long long)arg2;
- (BOOL)_readSVGNodesError:(id *)arg1;
- (double)_sourcePointSize;
- (BOOL)_validateVectorGlyphsWithError:(id *)arg1;
- (CDStruct_3c058996)alignmentRectInsetsForVectorGlyphWithWeight:(long long)arg1 size:(long long)arg2;
- (double)baselineForVectorGlyphWithWeight:(long long)arg1 size:(long long)arg2;
- (double)capHeightForVectorGlyphWithWeight:(long long)arg1 size:(long long)arg2;
- (void)dealloc;
- (double)defaultPointSize;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)initWithData:(id)arg1 platform:(long long)arg2 error:(id *)arg3;
- (id)initWithURL:(id)arg1 error:(id *)arg2;
- (id)initWithURL:(id)arg1 platform:(long long)arg2 error:(id *)arg3;
- (unsigned long long)numberOfVectorGlyphs;
- (BOOL)vectorGlyphExistsWithWeight:(long long)arg1 size:(long long)arg2 error:(id *)arg3;
- (struct CGSVGDocument *)vectorGlyphWithWeight:(long long)arg1 size:(long long)arg2 error:(id *)arg3;

@end
