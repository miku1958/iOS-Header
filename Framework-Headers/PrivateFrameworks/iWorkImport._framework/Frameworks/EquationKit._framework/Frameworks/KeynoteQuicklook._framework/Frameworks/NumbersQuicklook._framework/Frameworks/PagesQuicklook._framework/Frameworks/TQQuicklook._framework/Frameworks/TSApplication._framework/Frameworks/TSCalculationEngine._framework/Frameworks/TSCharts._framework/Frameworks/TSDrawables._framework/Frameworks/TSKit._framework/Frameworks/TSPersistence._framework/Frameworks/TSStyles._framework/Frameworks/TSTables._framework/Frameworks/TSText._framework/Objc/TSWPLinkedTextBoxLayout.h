//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSText/TSWPShapeLayout.h>

@class TSWPLinkedLayout;

@interface TSWPLinkedTextBoxLayout : TSWPShapeLayout
{
    unsigned long long _indexInFlow;
}

@property (readonly, nonatomic) TSWPLinkedLayout *containedLayout; // @dynamic containedLayout;
@property (nonatomic) unsigned long long indexInFlow; // @synthesize indexInFlow=_indexInFlow;

- (void)i_invalidateWrap;

@end

