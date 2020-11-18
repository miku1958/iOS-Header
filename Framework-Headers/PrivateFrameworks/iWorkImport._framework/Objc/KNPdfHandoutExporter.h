//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/KNPdfExporter.h>

__attribute__((visibility("hidden")))
@interface KNPdfHandoutExporter : KNPdfExporter
{
    BOOL mPrintingRuledLines;
    BOOL mPrintingNotes;
    BOOL mPrintingDivider;
    BOOL mIsPrintingNote;
}

@property (nonatomic, getter=isPrintingDivider) BOOL printingDivider; // @synthesize printingDivider=mPrintingDivider;
@property (nonatomic, getter=isPrintingNotes) BOOL printingNotes; // @synthesize printingNotes=mPrintingNotes;
@property (nonatomic, getter=isPrintingRuledLines) BOOL printingRuledLines; // @synthesize printingRuledLines=mPrintingRuledLines;

- (id)currentInfos;
- (BOOL)drawCurrentPageInContext:(struct CGContext *)arg1 viewScale:(double)arg2 unscaledClipRect:(struct CGRect)arg3 createPage:(BOOL)arg4;
- (BOOL)incrementPage;
- (id)initWithDocumentRoot:(id)arg1;
- (void)p_drawDividerLineForRect:(struct CGRect)arg1 pageRect:(struct CGRect)arg2 context:(struct CGContext *)arg3;
- (void)p_drawNotesForNode:(id)arg1 index:(unsigned long long)arg2 forRect:(struct CGRect)arg3 unscaledClipRect:(struct CGRect)arg4 scaledClipRect:(struct CGRect)arg5 context:(struct CGContext *)arg6;
- (void)p_drawRuledLinesForRect:(struct CGRect)arg1 pageRect:(struct CGRect)arg2 numberOfLines:(unsigned long long)arg3 context:(struct CGContext *)arg4;

@end

