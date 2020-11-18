//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SVVisibilityMonitoring-Protocol.h>

@class NSMutableArray, NSString, SVVisibilityMonitor;

@interface SXVideoPlayerVisibilityMonitor : NSObject <SVVisibilityMonitoring>
{
    SVVisibilityMonitor *_visibilityMonitor;
    NSMutableArray *_willAppearBlocks;
    NSMutableArray *_didAppearBlocks;
    NSMutableArray *_visiblePercentageBlocks;
    NSMutableArray *_willDisappearBlocks;
    NSMutableArray *_didDisappearBlocks;
}

@property (readonly, nonatomic) BOOL appeared;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMutableArray *didAppearBlocks; // @synthesize didAppearBlocks=_didAppearBlocks;
@property (readonly, nonatomic) NSMutableArray *didDisappearBlocks; // @synthesize didDisappearBlocks=_didDisappearBlocks;
@property (readonly) unsigned long long hash;
@property (readonly, weak, nonatomic) id object;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly) Class superclass;
@property (strong, nonatomic) SVVisibilityMonitor *visibilityMonitor; // @synthesize visibilityMonitor=_visibilityMonitor;
@property (readonly, nonatomic) double visiblePercentage;
@property (readonly, nonatomic) NSMutableArray *visiblePercentageBlocks; // @synthesize visiblePercentageBlocks=_visiblePercentageBlocks;
@property (readonly, nonatomic) NSMutableArray *willAppearBlocks; // @synthesize willAppearBlocks=_willAppearBlocks;
@property (readonly, nonatomic) NSMutableArray *willDisappearBlocks; // @synthesize willDisappearBlocks=_willDisappearBlocks;

- (void).cxx_destruct;
- (void)configureVisibilityMonitor:(id)arg1;
- (id)initWithVisibilityMonitor:(id)arg1;
- (void)onDidAppear:(CDUnknownBlockType)arg1;
- (void)onDidDisappear:(CDUnknownBlockType)arg1;
- (void)onVisiblePercentageChange:(CDUnknownBlockType)arg1;
- (void)onWillAppear:(CDUnknownBlockType)arg1;
- (void)onWillDisappear:(CDUnknownBlockType)arg1;

@end

