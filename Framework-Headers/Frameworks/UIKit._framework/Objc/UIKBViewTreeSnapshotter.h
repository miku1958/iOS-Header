//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, UIView;

__attribute__((visibility("hidden")))
@interface UIKBViewTreeSnapshotter : NSObject
{
    NSMutableArray *_inputViews;
    UIView *_snapshotView;
}

@property (readonly, nonatomic) UIView *snapshotView; // @synthesize snapshotView=_snapshotView;

+ (id)snapshotterForKeyboardView:(id)arg1 afterScreenUpdates:(BOOL)arg2;
- (void)dealloc;

@end
