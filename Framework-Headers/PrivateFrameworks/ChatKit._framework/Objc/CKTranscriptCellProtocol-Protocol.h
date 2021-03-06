//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKFullscreenEffectMessageFilter;

@protocol CKTranscriptCellProtocol <NSObject>

@property (nonatomic) double associatedItemOffset;
@property (nonatomic) double drawerPercentRevealed;
@property (nonatomic) BOOL orientation;
@property (nonatomic) BOOL wantsDrawerLayout;

- (void)addFilter:(CKFullscreenEffectMessageFilter *)arg1;
- (void)clearFilters;
- (void)layoutSubviewsForAlignmentContents;
- (void)layoutSubviewsForContents;
- (void)layoutSubviewsForDrawer;
- (void)performHide:(void (^)(void))arg1;
- (void)performInsertion:(void (^)(BOOL))arg1;
- (void)performReload:(void (^)(void))arg1 completion:(void (^)(BOOL))arg2;
- (void)performRemoval:(void (^)(BOOL))arg1;
- (void)performReveal:(void (^)(void))arg1;
@end

