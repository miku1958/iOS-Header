//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSArray;

@protocol UIPreviewInteractionAnimating <NSObject>

@property (copy, nonatomic) NSArray *containerViews;
@property (readonly, nonatomic, getter=isStopped) BOOL stopped;

- (void)setAnimationsForCancel:(void (^)(void))arg1 completion:(void (^)(BOOL))arg2;
- (void)setAnimationsForCommit:(void (^)(void))arg1 completion:(void (^)(BOOL))arg2;
- (void)setAnimationsForInteractiveHighlight:(void (^)(void))arg1 completion:(void (^)(BOOL))arg2;
- (void)setAnimationsForPreview:(void (^)(void))arg1 completion:(void (^)(BOOL))arg2;
- (void)stopAnimations;
@end
