//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSWPText.h>

@class TSDWrapSegments;

__attribute__((visibility("hidden")))
@interface TSCHTextWithInteriorWrapping : TSWPText
{
    TSDWrapSegments *_cachedInteriorWrapSegments;
}

- (void).cxx_destruct;
- (id)interiorWrapPath;
- (id)interiorWrapSegments;
- (BOOL)shrinkTextToFit;
- (id)textWrapper;
- (int)verticalAlignment;

@end

