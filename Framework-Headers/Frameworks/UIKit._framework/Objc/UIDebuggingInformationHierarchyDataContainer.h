//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface UIDebuggingInformationHierarchyDataContainer : NSObject
{
    UIView *_view;
    long long _level;
}

@property (nonatomic) long long level; // @synthesize level=_level;
@property (weak, nonatomic) UIView *view; // @synthesize view=_view;

- (void).cxx_destruct;
- (id)initWithView:(id)arg1 atLevel:(long long)arg2;

@end

