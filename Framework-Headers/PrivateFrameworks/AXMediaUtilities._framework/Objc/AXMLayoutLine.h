//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXMediaUtilities/AXMLayoutItem.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface AXMLayoutLine : AXMLayoutItem
{
    NSMutableArray *_sequences;
}

+ (id)line:(id)arg1;
- (void).cxx_destruct;
- (void)addSequence:(id)arg1;
- (struct CGRect)frame;
- (struct CGRect)normalizedFrame;
- (id)sequences;

@end

