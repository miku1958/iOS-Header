//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ControlCenterUI/NSObject-Protocol.h>

@class CCUIControlCenterSectionViewController, CCUIControlCenterStatusUpdate, NSString;
@protocol CCUIControlCenterSystemAgent;

@protocol CCUIControlCenterSectionViewControllerDelegate <NSObject>
- (void)beginSuppressingPunchOutMaskCachingForReason:(NSString *)arg1;
- (id<CCUIControlCenterSystemAgent>)controlCenterSystemAgent;
- (void)endSuppressingPunchOutMaskCachingForReason:(NSString *)arg1;
- (long long)layoutStyle;
- (void)noteSectionEnabledStateDidChange:(CCUIControlCenterSectionViewController *)arg1;
- (void)section:(CCUIControlCenterSectionViewController *)arg1 publishStatusUpdate:(CCUIControlCenterStatusUpdate *)arg2;
- (void)sectionWantsControlCenterDismissal:(CCUIControlCenterSectionViewController *)arg1;
@end

