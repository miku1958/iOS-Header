//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PencilKit/NSObject-Protocol.h>

@class _PKToolIndicator;

@protocol _PKToolIndicatorDelegate <NSObject>
- (void)toolIndicator:(_PKToolIndicator *)arg1 willPresent:(BOOL)arg2 animated:(BOOL)arg3;
- (struct CGRect)toolIndicatorCenteringRect:(_PKToolIndicator *)arg1;
@end
