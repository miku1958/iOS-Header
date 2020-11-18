//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSApplication/TSAPdfTaggerContext.h>

@class NSMutableDictionary, TSWPTOCRep;

@interface TSAPdfTaggerTocChunkContext : TSAPdfTaggerContext
{
    NSMutableDictionary *_paragraphStyleToLevelMap;
    TSWPTOCRep *_tocChunkRep;
}

@property (readonly, nonatomic) TSWPTOCRep *tocChunkRep; // @synthesize tocChunkRep=_tocChunkRep;

- (void).cxx_destruct;
- (id)initWithStateOfTagger:(id)arg1 tocChunkRep:(id)arg2;
- (int)levelForParagraphStyle:(id)arg1;
- (void)setUp;

@end
