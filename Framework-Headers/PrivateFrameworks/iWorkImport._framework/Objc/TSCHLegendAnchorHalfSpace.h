//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCHLegendAnchorHalfSpace : NSObject
{
    struct TSCHLegendAnchorLine mLine;
}

@property (readonly, nonatomic) struct TSCHLegendAnchorLine line; // @synthesize line=mLine;

+ (id)halfSpaceWithLine:(struct TSCHLegendAnchorLine)arg1;
- (id)description;
- (id)initWithLine:(struct TSCHLegendAnchorLine)arg1;

@end

