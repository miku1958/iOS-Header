//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PDFCoachMarkManagerPrivate;

__attribute__((visibility("hidden")))
@interface PDFCoachMarkManager : NSObject
{
    PDFCoachMarkManagerPrivate *_private;
}

- (void).cxx_destruct;
- (void)_cleanCoachMarks;
- (id)_pageLayerForPage:(id)arg1;
- (void)createCoachMarkForPage:(id)arg1 atFrame:(struct CGRect)arg2;
- (id)initWithPDFRenderingProperties:(id)arg1;
- (void)pageLayerDidAppear:(id)arg1;
- (void)pageLayerWillRemove:(id)arg1;

@end

