//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSWPHeaderRep.h>

@class NSTimer, TPPaginatedPageInfo;

__attribute__((visibility("hidden")))
@interface TPHeaderRep : TSWPHeaderRep
{
    BOOL _hideKnobs;
    NSTimer *editingDidBeginTimer;
}

@property (strong, nonatomic) NSTimer *editingDidBeginTimer; // @synthesize editingDidBeginTimer;
@property (nonatomic) BOOL hideKnobs; // @synthesize hideKnobs=_hideKnobs;
@property (readonly, nonatomic) TPPaginatedPageInfo *pageInfo;

- (void).cxx_destruct;
- (BOOL)p_isInDocumentSetup;
- (BOOL)p_isMiddleFooterRep;
- (BOOL)p_isMiddleHeaderRep;
- (BOOL)p_shouldCreateArrowKnobs;
- (id)pageLayout;

@end

