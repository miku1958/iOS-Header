//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/NSObject-Protocol.h>

@class TSWPStorage;

@protocol TSWPFootnoteHeightMeasurer <NSObject>
- (void)addFootnoteReferenceStorage:(TSWPStorage *)arg1;
- (double)footnoteHeight;
- (void)removeAllFootnoteReferenceStorages;
- (void)removeFootnoteReferenceStorage:(TSWPStorage *)arg1;
- (void)setContainerWidth:(double)arg1;
- (void)setFootnoteSpacing:(long long)arg1;
@end

