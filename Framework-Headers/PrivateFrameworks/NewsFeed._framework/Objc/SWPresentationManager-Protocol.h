//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsFeed/NSObject-Protocol.h>

@protocol SWPresentationManager <NSObject>

@property (nonatomic, readonly) double height;
@property (nonatomic, copy) CDUnknownBlockType loadBlock;
@property (nonatomic, copy) CDUnknownBlockType presentableBlock;
@property (nonatomic) unsigned long long presentationState;

- (void)onLoad:(void (^)(void))arg1;
- (void)onPresentable:(void (^)(double))arg1;
- (void)refresh;
@end

