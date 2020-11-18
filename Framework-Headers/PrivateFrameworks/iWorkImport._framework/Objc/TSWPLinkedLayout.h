//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSWPLayout.h>

@class TSWPLayoutManager;

__attribute__((visibility("hidden")))
@interface TSWPLinkedLayout : TSWPLayout
{
}

@property (strong, nonatomic) TSWPLayoutManager *layoutManager; // @dynamic layoutManager;
@property (nonatomic) BOOL textLayoutValid; // @dynamic textLayoutValid;

- (void)i_validateTextLayout;
- (BOOL)isLastTarget;
- (BOOL)isLinked;
- (BOOL)isOverflowing;
- (id)nextTargetFirstColumn;
- (id)nextTargetTopicNumbers;
- (BOOL)optimizeSegmentationOfEmptyLines;
- (id)previousTargetLastColumn;
- (id)previousTargetTopicNumbers;
- (BOOL)repShouldPreventCaret;
- (void)validate;
- (void)willBeRemovedFromLayoutController:(id)arg1;

@end
