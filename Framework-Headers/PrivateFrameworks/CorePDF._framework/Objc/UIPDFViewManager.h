//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIView;

@interface UIPDFViewManager : NSObject
{
    UIView *_activeView;
}

+ (id)sharedViewManager;
- (void)makeViewActive:(id)arg1;
- (void)viewReleased:(id)arg1;

@end
