//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextSelectionRect.h>

__attribute__((visibility("hidden")))
@interface _MFAtomViewTextSelectionRect : UITextSelectionRect
{
    BOOL containsStart;
    BOOL containsEnd;
    BOOL isVertical;
    long long writingDirection;
    struct CGRect rect;
}

@property (nonatomic) BOOL containsEnd; // @synthesize containsEnd;
@property (nonatomic) BOOL containsStart; // @synthesize containsStart;
@property (nonatomic) BOOL isVertical; // @synthesize isVertical;
@property (nonatomic) struct CGRect rect; // @synthesize rect;
@property (nonatomic) long long writingDirection; // @synthesize writingDirection;


@end

