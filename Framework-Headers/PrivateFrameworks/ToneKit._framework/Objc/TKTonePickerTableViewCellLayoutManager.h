//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCellLayoutManagerValue1.h>

@interface TKTonePickerTableViewCellLayoutManager : UITableViewCellLayoutManagerValue1
{
    double _minimumTextIndentation;
}

@property (nonatomic) double minimumTextIndentation; // @synthesize minimumTextIndentation=_minimumTextIndentation;

- (struct CGRect)_adjustedTextFrameWithOriginalTextFrame:(struct CGRect)arg1 forCell:(id)arg2;
- (struct CGRect)textRectForCell:(id)arg1 rowWidth:(double)arg2 forSizing:(BOOL)arg3;

@end
